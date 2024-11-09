# Sem06-AdvancedDataStructures

### Course Overview
This repository contains assignments from the **Advanced Data Structures** course taken in my sixth semester. The course covered specialized data structures for high-dimensional and parallel processing, such as **KD-Trees** and **parallel queues/lists**. Key topics included understanding the **curse of dimensionality**, clustering algorithms, and efficient structures for both spatial and concurrent data handling.

### Learning Outcomes
In this course, I developed skills in:
- Implementing and managing complex data structures like **KD-Trees** for high-dimensional data.
- Developing concurrent data structures, including a parallel **Priority Queue**, **List**, and **Queue**.
- Optimizing data structure performance in multi-threaded environments for efficient task management.

### Project and Assignments

#### 1. PriorityQueue (Parallel Priority Queue)
   - **Description**: A custom **Priority Queue** implementation that operates in parallel for efficient management of high-priority tasks.
   - **Features**:
     - Utilizes a binary heap structure, supporting both max and min configurations.
     - Designed for concurrent operations, including `push`, `pop`, and `front` methods.
   - **Purpose**: Demonstrates priority management in a multi-threaded environment with optimizations for concurrent execution.
   - **Usage**:
     - Navigate to the `PriorityQueue` directory.
     - Compile with CMake:
       ```bash
       cmake ..
       make
       ./EDA-parcial  # Executes the Priority Queue
       ```

#### 2. KD-Tree (K-Dimensional Tree)
   - **Description**: An implementation of a **KD-Tree**, used for efficient multi-dimensional data storage and spatial searches.
   - **Features**:
     - Supports insertion, deletion, and search operations for multi-dimensional points.
     - Partial K-Nearest Neighbor (KNN) querying functionality, demonstrating spatial search potential.
   - **Purpose**: Introduces efficient data handling for high-dimensional datasets, commonly used in clustering and spatial analysis.
   - **Usage**:
     - Navigate to the `KDtree` directory.
     - Compile with CMake:
       ```bash
       cmake ..
       make
       ./kdtree_test  # Executes the KD-Tree
       ```

#### 3. Parallel-list-main (Concurrent Linked List)
   - **Description**: A **concurrent linked list** with thread-safe operations for adding and removing elements in parallel.
   - **Features**:
     - Implements locking mechanisms (`mutex`) to manage concurrent additions and removals.
     - Uses threads to perform multiple insertions and deletions concurrently.
   - **Purpose**: Demonstrates synchronization techniques in data structures and introduces parallelism for efficient list management.
   - **Usage**:
     - Navigate to the `Parallel-list-main` directory.
     - Compile with CMake:
       ```bash
       cmake ..
       make
       ./List  # Executes the parallel list operations
       ```

#### 4. Parallel-queue-master (Producer-Consumer Queue)
   - **Description**: A **concurrent queue** using the producer-consumer model, where multiple producers and consumers operate on a shared queue.
   - **Features**:
     - Thread-safe `push` and `pop` operations using `mutex` and `condition_variable` for managing producer-consumer relationships.
     - Producers generate data, and consumers process it, showcasing a classic concurrent processing pattern.
   - **Purpose**: Illustrates the producer-consumer model with thread-safe access in a shared environment, commonly used for buffering and task scheduling.
   - **Usage**:
     - Navigate to the `Parallel-queue-master` directory.
     - Compile with CMake:
       ```bash
       cmake ..
       make
       ./producer_consumer <num_producers> <num_consumers>  # Runs the producer-consumer queue
       ```

### Project Structure
Each assignment is organized into its own directory, each with a `CMakeLists.txt` file to facilitate compilation:
- **PriorityQueue**: Contains `PriorityQueue.h` and CMake configuration for building.
- **KDtree**: Contains `KD-tree.hpp` and necessary files for the KD-Tree.
- **Parallel-list-main**: Includes `main.cpp` implementing a concurrent linked list with multi-threaded operations.
- **Parallel-queue-master**: Contains `main.cpp` implementing the producer-consumer queue.
