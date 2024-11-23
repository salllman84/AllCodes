// Single Inheritance
// In single inheritance, a class is derived from one base class.

class Base {
    // Base class members
};

class Derived : public Base {
    // Derived class members
};

// Multiple Inheritance
// In multiple inheritance, a class is derived from more than one base class.

class Base1 {
    // Base class 1 members
};

class Base2 {
    // Base class 2 members
};

class Derived : public Base1, public Base2 {
    // Derived class members
};

// Hierarchical Inheritance
// In hierarchical inheritance, multiple classes are derived from a single base class.

class Base {
    // Base class members
};

class Derived1 : public Base {
    // Derived class 1 members
};

class Derived2 : public Base {
    // Derived class 2 members
};

// Multilevel Inheritance
// In multilevel inheritance, a class is derived from another derived class.

class Base {
    // Base class members
};

class Intermediate : public Base {
    // Intermediate class members
};

class Derived : public Intermediate {
    // Derived class members
};
