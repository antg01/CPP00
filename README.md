# CP00

### 🚀 **C++98 Essentials Summary (for a C Programmer)**

Since you're transitioning from C to C++98, here's a concise overview of the key concepts we've covered so far.

---

### 1️⃣ **C++98 Overview**
- C++98 is an extension of C, adding **object-oriented programming (OOP)**, **templates**, and **standard libraries** like the **STL**.
- You can still use C code in C++, but C++ offers more powerful abstractions.

---

### 2️⃣ **Namespaces**
- **Purpose:** Prevent **name conflicts** in large codebases.
- **Syntax:**
  ```cpp
  namespace Math {
      int add(int a, int b) { return a + b; }
  }

  int main() {
      std::cout << Math::add(3, 4) << std::endl;
      return 0;
  }
  ```
- Use `using namespace Math;` to avoid `Math::` prefix (with caution).

---

### 3️⃣ **Classes**
- A **class** is a blueprint to create **objects**, combining **data (attributes)** and **functions (methods)**.
- **Example:**
  ```cpp
  class Person {
  public:
      std::string name;
      int age;
      void introduce() {
          std::cout << "Hi, I'm " << name << " and I'm " << age << " years old." << std::endl;
      }
  };
  ```

- **Access Specifiers:**
  - `public`: Accessible from outside the class.
  - `private`: Only accessible within the class.
  - `protected`: Accessible in derived classes.

---

### 4️⃣ **Constructors & Destructors**
- **Constructor:** Initializes an object automatically when created.
- **Destructor:** Cleans up resources when the object is destroyed.

```cpp
class Car {
public:
    Car() { std::cout << "Car created!" << std::endl; }    // Constructor
    ~Car() { std::cout << "Car destroyed!" << std::endl; } // Destructor
};
```

- **Constructor Overloading:** Multiple constructors with different parameters.

---

### 5️⃣ **Initialization Lists**
- Efficient way to **initialize members** directly, especially `const`, references, or complex types.
- **Syntax:**
  ```cpp
  class Point {
      int x, y;
  public:
      Point(int a, int b) : x(a), y(b) {}  // Initialization list
  };
  ```

---

### 6️⃣ **Encapsulation**
- Protects internal data and controls how it's accessed or modified.
- Achieved using `private` members and `public` getter/setter methods.

```cpp
class BankAccount {
private:
    double balance;
public:
    void deposit(double amount) { balance += amount; }
    double get_balance() { return balance; }
};
```

---

### 7️⃣ **Inheritance**
- Allows one class to **inherit** properties and methods from another.
- **Syntax:**
  ```cpp
  class Animal {
  public:
      void eat() { std::cout << "Eating..." << std::endl; }
  };

  class Dog : public Animal {
  public:
      void bark() { std::cout << "Barking!" << std::endl; }
  };
  ```

---

### 8️⃣ **Polymorphism**
- Enables methods to behave differently based on the object type, using **virtual functions**.

```cpp
class Animal {
public:
    virtual void speak() { std::cout << "Animal speaks" << std::endl; }
};

class Dog : public Animal {
public:
    void speak() { std::cout << "Dog barks" << std::endl; }
};

void make_sound(Animal* a) {
    a->speak();
}
```

---

### 9️⃣ **Templates (Generic Programming)**
- Allows writing **generic functions or classes** that work with any data type.

```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}
```

---

### 🔥 **Memory Management in C++**
- Use `new` and `delete` instead of `malloc`/`free`.

```cpp
int* ptr = new int(42); // Allocate memory
delete ptr;             // Free memory
```

---

### 1️⃣0️⃣ **STL (Standard Template Library)**
- Provides **ready-to-use data structures** (like `vector`, `map`, `set`) and **algorithms** (`sort`, `find`, etc.).

```cpp
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {3, 1, 4, 1, 5};
    std::sort(numbers.begin(), numbers.end());

    for (int n : numbers) {
        std::cout << n << " ";
    }
    return 0;
}
```

---

### ✅ **Key Differences Between C and C++98**

| **C**                    | **C++98**                        |
|--------------------------|----------------------------------|
| Procedural Programming   | Object-Oriented Programming (OOP) |
| `struct` for data only   | `class` with data & methods      |
| `malloc` / `free`        | `new` / `delete`                 |
| No Namespaces            | Namespaces to avoid name conflicts |
| No Templates             | Templates for generic programming |
| Manual Error Handling    | Exception handling (`try-catch`) |

---
