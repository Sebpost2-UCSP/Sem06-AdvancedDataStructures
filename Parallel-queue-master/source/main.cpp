#include <iostream>
#include <mutex>
#include <queue>
#include <sstream>
#include <thread>
#include <condition_variable>


template <typename T>
class ConcurrentQueue {
 public:
  void push(const T &data) { 
      std::lock_guard<std::mutex> lock(queue_mutex_);
      queue_.push(data); 
      cv.notify_one();
  }

  T pop() {
      std::unique_lock<std::mutex> lock(queue_mutex_);
      while (queue_.empty())
      {
          cv.wait(lock);
      }
      T result = queue_.front();
      queue_.pop();
      return result;
  }

 private:
  std::queue<T> queue_;
  std::mutex queue_mutex_;
  std::condition_variable cv;
};

class Producer {
 public:
  Producer(unsigned int id, ConcurrentQueue<std::string> *queue)
      : id_(id), queue_(queue) {}

  void operator()() {
    int data = 0;
    while (true) {
      std::stringstream stream;
      stream << "Producer: " << id_ << " Data: " << data++ << std::endl;
      queue_->push(stream.str());
      std::cout << stream.str() << std::endl;
    }
  }

 private:
  unsigned int id_;
  ConcurrentQueue<std::string> *queue_;
};

class Consumer {
 public:
  Consumer(unsigned int id, ConcurrentQueue<std::string> *queue)
      : id_(id), queue_(queue) {}

  void operator()() {
    while (true) {
      std::stringstream stream;
      stream << "Consumer: " << id_ << " Data: " << queue_->pop().c_str()
             << std::endl;

      std::cout << stream.str() << std::endl;
    }
  }

 private:
  unsigned int id_;
  ConcurrentQueue<std::string> *queue_;
};

int main(int argc, char *argv[]) {
  if (argc != 3) {
    return 1;
  }
  int number_producers = std::stoi(argv[1]);
  int number_consumers = std::stoi(argv[2]);

  ConcurrentQueue<std::string> queue;

  std::vector<std::thread *> producers;
  for (unsigned int i = 0; i < number_producers; ++i) {
    std::thread *producer_thread = new std::thread(Producer(i, &queue));
    producers.push_back(producer_thread);
  }

  std::vector<std::thread *> consumers;
  for (unsigned int i = 0; i < number_consumers; ++i) {
    std::thread *consumer_thread = new std::thread(Consumer(i, &queue));
    consumers.push_back(consumer_thread);
  }

  int stop;
  std::cin >> stop;

  for (unsigned int i = 0; i < number_producers; ++i) {
      producers[i]->join();
  }

  for (unsigned int i = 0; i < number_consumers; ++i) {
      consumers[i]->join();
  }

  return 0;
}
