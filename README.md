# abhi-inheritance.cpp
The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming. 
In C++, inheritance is a fundamental concept in object-oriented programming (OOP) that allows you to create a new class (called a derived or child class) based on an existing class (called a base or parent class). The derived class inherits the properties and behaviors (data members and member functions) of the base class, and it can also add new members or override existing members. Inheritance is one of the key features of OOP and promotes code reusability and the creation of hierarchies of classes.

There are several types of inheritance in C++:

1. **Single Inheritance**: A derived class inherits from only one base class.
   
2. **Multiple Inheritance**: A derived class can inherit from more than one base class. C++ supports multiple inheritance, which means a class can have multiple parent classes.

3. **Multilevel Inheritance**: You can create a chain of derived classes, where one class derives from another, and so on.

4. **Hierarchical Inheritance**: Multiple derived classes inherit from a single base class.

5. **Hybrid Inheritance**: A combination of multiple and hierarchical inheritance.

In C++, you specify inheritance using the `class` or `struct` keyword, followed by a colon, and then the access specifier (public, protected, or private), and the name of the base class. Here's a simple example of single inheritance in C++:

```cpp
class Base {
public:
    void display() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show" << endl;
    }
};

int main() {
    Derived d;
    d.display(); // Accessing the base class function
    d.show();    // Accessing the derived class function
    return 0;
}
```

In this example, the `Derived` class inherits the `display()` function from the `Base` class and adds its own function `show()`. This allows code reuse and extends the functionality of the `Base` class.

Inheritance is a powerful mechanism that helps you create more organized and modular code, and it's a core concept in C++'s support for object-oriented programming.
