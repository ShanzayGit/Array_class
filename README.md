# Array_class

## Overview
This project implements a **templated dynamic array class in C++**, built from scratch to explore memory management, operator overloading, and object-oriented programming concepts.  
Unlike `std::vector`, this array provides a minimal but educational interface for resizing, indexing, and stream operations.



## 📂 Folder Structure

Array_class/
- Templated_Array.h            # Header file (class definition and implementation)
- Array_class.sln    # Visual Studio solution file
- main.cpp           # Example usage 
- .gitignore
- .gitattributes


## ⚙️ Build & Run Instructions

### 🔹 On Windows (Visual Studio)
1. Open `Array_class.sln` in Visual Studio.
2. Add `Templated_Array.h`  to your project.
3. Create a `main.cpp` file with sample usage.
4. Build and run with **Ctrl+F5**.

### 🔹 On Linux/Mac (g++)
```
g++ main.cpp -o array_app
./array_app
```

## 🧩 Example Usage

 Array<int> arr{1, 2, 3, 4, 5};
 cout << "Array size: " << arr.getSize() << endl;
 cout << "Elements: " << arr << endl;
 arr.reSize(3);
 cout << "After resize to 3: " << arr << endl;

**Expected Output:**
Array size: 5
Elements: 1 , 2 , 3 , 4 , 5
After resize to 3: 1 , 2 , 3


## 🚀 Features Implemented
- **Constructors**: default, initializer list, copy, move, capacity-based
- **Destructor**: cleans up allocated memory
- **Indexing**: `operator[]` with bounds checking
- **Resizing**: `reSize(newCapacity)` to adjust capacity
- **Assignment operators**: copy and move
- **Iteration support**: `begin()` and `end()` pointers
- **Stream operators**: `<<` for output, `>>` for input


## 📌 Future Improvements
- Add `clear()` and `reserve()` methods
- Implement exception handling for invalid indices
- Support iterators for range-based loops
- Compare performance with `std::vector`

