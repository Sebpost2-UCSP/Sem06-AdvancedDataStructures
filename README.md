Here’s a README for your `Sem06-AdvancedDataStructures` repository:
# Sem06-AdvancedDataStructures

### Course Overview
This repository contains assignments from the **Advanced Data Structures** course taken in my sixth semester. The course covered specialized data structures, focusing on high-dimensional data and spatial searching. We explored concepts like the **curse of dimensionality**, clustering algorithms, and studied structures like **KD-Trees** and **R-Trees** through research papers and practical implementations.

### Learning Outcomes
In this course, I developed skills in:
- Implementing advanced data structures like **KD-Trees** and parallel **Priority Queues**.
- Understanding the curse of dimensionality and its implications on data structures for high-dimensional spaces.
- Using advanced data structures to solve real-world problems related to spatial data and prioritization.

### Project and Assignments

#### 1. PriorityQueue (Parallel Priority Queue)
   - **Description**: A custom implementation of a **Priority Queue** that operates in parallel to handle high-priority tasks efficiently.
   - **Features**:
     - Uses a binary heap to prioritize elements, with support for both max and min heaps.
     - Optimized for concurrent operations, with resize capabilities to manage dynamic data efficiently.
     - Provides operations like `push`, `pop`, and `front` to handle prioritized data.
   - **Purpose**: This project illustrated the importance of priority handling in parallel environments and optimized operations for a priority queue.

#### 2. KD-Tree (K-Dimensional Tree)
   - **Description**: An implementation of a **KD-Tree**, a data structure optimized for storing spatial data in `N` dimensions. The KD-Tree allows efficient searches for nearest neighbors and is commonly used in multi-dimensional data applications.
   - **Features**:
     - Allows for insertion, deletion, and search operations across multiple dimensions.
     - Supports basic KD-Tree operations and placeholder methods for `k-nearest neighbors` (KNN) queries, demonstrating an in-progress implementation of spatial search.
     - `knn_query` and `knn_value` are currently incomplete as part of ongoing work on nearest neighbor searches.
   - **Purpose**: This project applied concepts from high-dimensional data handling, focusing on optimized storage and search for multi-dimensional points, common in clustering and spatial data analysis.

### Additional Resources
We supplemented the coding assignments by reading and analyzing research papers on KD-Trees, R-Trees, and various clustering algorithms. These readings provided the theoretical foundation for implementing efficient high-dimensional data structures.

### Project Structure
Each assignment has its own folder, structured as follows:
- **PriorityQueue**: Contains the `PriorityQueue.h` file and CMake configuration for compilation.
- **KD-tree**: Contains `KD-tree.hpp` and its dependencies, along with CMake configuration.
- **CMake**: Each project includes a CMake configuration for easy compilation and execution.
