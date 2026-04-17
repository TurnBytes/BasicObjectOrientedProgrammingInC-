# OOP Concepts - Week 5 Lesson 1

## Topics Covered

### 1. Inheritance
- **Definition**: Mechanism where one class (derived/child class) inherits properties and methods from another class (base/parent class)
- **Purpose**: Code reusability, establishing relationship between classes
- **Syntax**: `class DerivedClass : public BaseClass { ... }`
- **Benefits**: Reduces code duplication, creates hierarchical relationships

### 2. Types of Inheritance

#### Multiple Inheritance
- **Definition**: A derived class inherits from multiple base classes
- **Syntax**: `class Derived : public Base1, public Base2 { ... }`
- **Example**: A class inheriting from both Vehicle and ElectricDevice
- **Note**: Can lead to diamond problem (ambiguity when both base classes have same method)

#### Multilevel Inheritance
- **Definition**: A class inherits from another derived class, creating a chain
- **Syntax**: `class A {}; class B : public A {}; class C : public B {};`
- **Example**: Vehicle → Car → SportsCar (Car inherits from Vehicle, SportsCar inherits from Car)
- **Benefits**: Creates deep inheritance hierarchies

### 3. Polymorphism
- **Definition**: Ability of objects to take many forms
- **Types**: Compile-time (function overloading) and Run-time (function overriding)
- **Purpose**: Allows same interface to be used for different data types
- **Key Concept**: "One interface, multiple implementations"

### 4. Overriding
- **Definition**: Redefining a base class method in derived class with same signature
- **Purpose**: Provide specific implementation in derived class
- **Requirements**: Same method name, same parameters, same return type
- **Access**: Base class method should be virtual or accessible

### 5. Virtual Functions
- **Definition**: Base class functions declared with `virtual` keyword
- **Purpose**: Enable runtime polymorphism through function overriding
- **Syntax**: `virtual returnType functionName(parameters) { ... }`
- **Behavior**: Calls derived class version when object is of derived type
- **Pure Virtual**: `virtual returnType functionName(parameters) = 0;` (makes class abstract)

## Key Points to Remember
- Inheritance promotes code reuse
- Virtual functions enable dynamic binding
- Multiple inheritance can cause ambiguity
- Polymorphism allows flexible code design
- Always use appropriate access specifiers (public, private, protected)

## Common Interview Questions
1. What is the difference between function overloading and overriding?
2. Explain virtual functions and their importance
3. What is the diamond problem in multiple inheritance?
4. How does polymorphism work in C++?
5. When should you use inheritance vs composition?