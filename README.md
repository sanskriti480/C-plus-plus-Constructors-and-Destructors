# C++ Experiment 12: Constructors and Destructors

---

## Aim  
To study and implement **constructors and destructors** in C++, understand their behavior, types, and applications.

---

## Apparatus / Tools Used  
- **VS Code**  
- **Programiz Online C++ Compiler**  

---

## Objectives  

- To learn how constructors initialize objects automatically when they are created.  
- To understand the rules and properties of constructors.  
- To explore different types of constructors: default, parameterized, copy.  
- To understand destructors and how they free memory/resources.  
- To study the order of constructor and destructor calls.  
- To analyze advantages and disadvantages of constructors and destructors in real applications.  

---

## Theory  

### What is a Constructor?  

- A **constructor** is a special member function of a class.  
- It is **automatically invoked** when an object of the class is created.  
- It has the **same name as the class** and **no return type** (not even `void`).  
- Used to **initialize data members** of a class.  

---

### Characteristics of Constructors  

- Called automatically when an object is created.  
- No return type.  
- Can be **overloaded** (multiple constructors in one class).  
- Invoked only once per object creation.  
- Can have default arguments.  

---

### Types of Constructors  

1. **Default Constructor**  
   - No parameters.  
   - Initializes members with default values.  

2. **Parameterized Constructor**  
   - Takes parameters.  
   - Allows assigning custom values during object creation.  

3. **Copy Constructor**  
   - Initializes a new object as a copy of an existing object.  
   - Syntax: `ClassName(const ClassName &obj)`.  

---

### What is a Destructor?  

- A **destructor** is a special member function of a class.  
- Invoked **automatically when an object goes out of scope** or is deleted.  
- Has the same name as the class, preceded by a **tilde (~)**.  
- Used to **release resources** such as memory, files, or network connections.  

---

### Characteristics of Destructors  

- Invoked automatically at the end of scope.  
- Cannot be overloaded.  
- No parameters and no return type.  
- Only one destructor per class.  
- If not defined, compiler provides a default destructor.  

---

### Table: Constructor vs Destructor  

| Feature              | Constructor                               | Destructor                          |
|----------------------|-------------------------------------------|-------------------------------------|
| **Purpose**          | Initializes object                        | Cleans up object                    |
| **Name**             | Same as class name                        | `~ClassName`                        |
| **Return Type**      | None                                      | None                                |
| **Parameters**       | Can have (except default constructor)     | Cannot have                         |
| **Overloading**      | Allowed                                   | Not allowed                         |
| **Automatic Call**   | On object creation                        | On object destruction               |

---

### Advantages of Constructors  

- Automatic initialization of objects.  
- Supports overloading (flexibility).  
- Reduces code repetition.  
- Enhances readability and maintainability.  

---

### Disadvantages of Constructors  

- Cannot be virtual.  
- Cannot return values.  
- May cause ambiguity with multiple overloaded versions.  

---

### Advantages of Destructors  

- Automatically frees memory/resources.  
- Prevents resource leaks.  
- Reduces programmer effort.  

---

### Disadvantages of Destructors  

- Cannot be overloaded.  
- Executes in an unpredictable order in multiple inheritance.  
- Programmer has less control over exact time of call (handled by compiler).  

---

## Algorithm  

1. Start the program.  
2. Define a class `Car`.  
3. Create a **constructor** to initialize brand and model.  
4. Create a **destructor** to print a message when object is destroyed.  
5. In `main()`:  
   - Declare an object of class `Car`.  
   - Observe constructor called during creation.  
   - Observe destructor called at the end of program.  
6. End the program.  

---

## Concepts Used  

- **Object-Oriented Programming** principles.  
- Automatic function invocation.  
- Resource management.  
- Constructor overloading.  
- Destructor cleanup process.  

---

## Code  

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;

    // Constructor
    Car(string b, string m) {
        brand = b;
        model = m;
        cout << "Constructor called! Car created: " << brand << " " << model << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destructor called! Car destroyed: " << brand << " " << model << endl;
    }
};

int main() {
    Car myCar("Ford", "Mustang");  // Constructor is invoked automatically
    // Destructor will be called automatically at the end of scope
    return 0;
}
