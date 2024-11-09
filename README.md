# Sem06-AdvancedDataStructures

### Course Overview
This repository contains assignments from the **Advanced Data Structures** course taken in my sixth semester. The course focused on specialized data structures for high-dimensional and spatial data, including **KD-Trees** and parallel **Priority Queues**. Topics covered included the **curse of dimensionality**, clustering algorithms, and various advanced data structures, with both practical implementations and supporting theoretical foundations from research papers.

### Learning Outcomes
Through this course, I gained skills in:
- Implementing advanced data structures like **KD-Trees** and parallel **Priority Queues**.
- Understanding and addressing challenges related to high-dimensional data, particularly the curse of dimensionality.
- Applying data structures to optimize spatial searches and prioritized tasks.

### Project and Assignments

#### 1. PriorityQueue (Parallel Priority Queue)
   - **Description**: A custom implementation of a **Priority Queue** designed to operate in parallel, managing high-priority tasks efficiently.
   - **Features**:
     - Uses a binary heap with support for both max and min configurations.
     - Resizable structure to handle dynamic data, with `push`, `pop`, and `front` operations for prioritized task management.
   - **Purpose**: This assignment demonstrated the importance of efficient task prioritization in parallel environments, optimized for performance in concurrent use cases.

   - **Usage**:
     - Navigate to the `PriorityQueue` directory.
     - Compile using the provided CMake configuration (`CMakeLists.txt` for C++14 standard).
       ```bash
       mkdir build
       cd build
       cmake ..
       make
       ./EDA-parcial  # Runs the Priority Queue executable
       ```

#### 2. KD-Tree (K-Dimensional Tree)
   - **Description**: A **KD-Tree** implementation designed for storing and querying spatial data in `N` dimensions, allowing for efficient multi-dimensional searches.
   - **Features**:
     - Basic KD-Tree operations: insertion, search, and deletion.
     - Partially implemented K-Nearest Neighbor (KNN) querying functions (`knn_query` and `knn_value`) as placeholders for further development.
   - **Purpose**: This project introduced optimized structures for managing spatial data, laying a foundation for high-dimensional data applications, including clustering and multi-dimensional indexing.

   - **Usage**:
     - Navigate to the `KDtree` directory.
     - Compile using the provided CMake configuration (`CMakeLists.txt` for C++11 standard).
       ```bash
       mkdir build
       cd build
       cmake ..
       make
       ./kdtree_test  # Runs the KD-Tree executable
       ```

### Project Structure
Each assignment is in its own directory, organized as follows:
- **PQ**: Contains `PriorityQueue.h` and the necessary CMake configuration.
- **KDtree**: Contains `KD-tree.hpp` along with CMake configuration and dependencies.
