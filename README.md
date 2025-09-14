# C++ Experiment 12: Constructors and Destructors

---

## Aim  
---

- To study and implement Constructors and Destructors in C++.
- To understand how objects are initialized automatically using constructors.
- To explore how destructors clean up resources when objects go out of scope.
- To demonstrate the types of constructors: Default, Parameterized, and Copy Constructor.

---

## Apparatus / Tools Used  
- **VS Code**  
- **Programiz Online C++ Compiler**  

---

## Objectives  
---

- To learn how constructors initialize objects automatically when they are created.  
- To understand the rules and properties of constructors.  
- To explore different types of constructors: default, parameterized, copy.  
- To understand destructors and how they free memory/resources.  
- To study the order of constructor and destructor calls.  
- To analyze advantages and disadvantages of constructors and destructors in real applications.  
- To implement examples demonstrating constructor overloading and copy constructors.  

---

## Theory  

### What is a Constructor?  
---

- A **constructor** is a special member function of a class that is called **automatically when an object is created**.  
- Its primary purpose is to **initialize data members** of a class.  
- Constructors **have the same name as the class** and **no return type** (not even void).  
- Multiple constructors can exist in a class using **constructor overloading**.  

---

### Rules for Constructors  
---

1. Name must be **same as the class**.  
2. Must **not have a return type**.  
3. Can be **public, private, or protected**.  
4. Can be **overloaded** to allow multiple ways to initialize objects.  
5. Can have **default arguments**.  
6. Can be **explicit** to avoid implicit conversions.  

---

### Types of Constructors 
---

1. **Default Constructor**  
   - Has no parameters.  
   - Automatically initializes objects with default values.  

2. **Parameterized Constructor**  
   - Accepts arguments to assign specific values to objects.  

3. **Copy Constructor**  
   - Used to create a **new object as a copy** of an existing object.  
   - Syntax: `ClassName(const ClassName &obj)`  

4. **Dynamic Constructor**  
   - Allocates memory dynamically using pointers.  
   - Useful in **dynamic memory management** for large objects.  

---

### What is a Destructor?  
---

- A **destructor** is a member function with the **same name as the class** prefixed by `~`.  
- It is invoked **automatically when the object goes out of scope or is deleted**.  
- Used to **release resources** like memory, file handles, or connections.  
- Each class can have **only one destructor**, and it **cannot be overloaded**.  

---

### Rules for Destructors  
---

1. Name must be `~ClassName`.  
2. Cannot have parameters.  
3. Cannot return a value.  
4. Automatically called **once per object**.  
5. Called in **reverse order of constructor calls** in case of multiple objects.  
6. If no destructor is defined, the **compiler provides a default destructor**.  

---

### Constructor vs Destructor  

| Feature              | Constructor                               | Destructor                          |
|----------------------|-------------------------------------------|-------------------------------------|
| **Purpose**          | Initialize objects                        | Clean up objects/resources          |
| **Name**             | Same as class name                        | `~ClassName`                        |
| **Return Type**      | None                                      | None                                |
| **Parameters**       | Can have parameters                        | Cannot have parameters              |
| **Overloading**      | Allowed                                   | Not allowed                         |
| **Automatic Call**   | On object creation                        | On object destruction               |
| **Frequency**        | Called once per object creation           | Called once per object destruction |

---

### Advantages of Constructors  
---

- Automatic initialization of objects.  
- Supports overloading → flexible object creation.  
- Reduces **code repetition** and increases readability.  
- Enables **parameterized object initialization**.  
- Ensures **safe initialization** for critical resources.  

---

### Disadvantages of Constructors  
---

- Cannot return values or be virtual.  
- Multiple overloaded constructors may cause ambiguity.  
- Implicit constructor calls may sometimes lead to **unexpected behavior**.  

---

### Advantages of Destructors 
---

- Automatic resource cleanup prevents **memory leaks**.  
- Reduces programmer effort.  
- Ensures **consistent program termination**.

---

### Disadvantages of Destructors  
---

- Cannot be overloaded or accept parameters.  
- Order of destruction may cause issues in **multiple inheritance** scenarios.  
- Compiler-controlled call timing reduces **predictability** for some resources.  

---

### Applications
---

- Automatic initialization in Banking systems (accounts, customers).
- Used in Games to initialize characters, scores, and levels.
- In Operating Systems, destructors help free resources.
- In Database systems, constructors establish connections, destructors close them.
- Essential in Data Structures (Linked List, Tree, Graph) for memory management.

---

### Additional Theory  
---

- **Constructor Chaining**: Calling one constructor from another in the same class.  
- **Constructor in Inheritance**: Base class constructor is called **before derived class constructor**.  
- **Virtual Destructor**: Needed in base classes to ensure proper destruction of derived class objects.  
- **Dynamic Memory Management**: Destructors are critical for freeing memory allocated with `new`.  
- **Best Practices**: Always pair `new` with `delete` in the destructor.  

---

## Algorithm  

### Program 1: Constructor and Destructor Example  

1. Start the program.  
2. Create a class `Car` with members `brand` and `model`.  
3. Define a **parameterized constructor** to initialize brand and model.  
4. Define a **destructor** to display a cleanup message.  
5. In `main()`, create an object of `Car`.  
6. Observe **constructor message on creation**.  
7. Observe **destructor message on program exit**.  
8. End the program.  

---

## Concepts Used  
---

- **OOP principles** (encapsulation, object lifecycle).  
- Automatic function invocation.  
- Constructor overloading.  
- Copy constructor behavior.  
- Destructor for resource cleanup.  

---

## Conclusion
---

- Constructors and destructors are essential for managing object lifecycle in C++.
- Constructors ensure safe and automatic initialization of objects.
- Destructors ensure safe cleanup of memory and resources.
- Constructor overloading gives flexibility in object creation, while destructor ensures program safety.
- Together, they make C++ programs robust, efficient, and reliable. 

---

