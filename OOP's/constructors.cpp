class Base {
public:
    Base(int x) { /* initialization */ }
};

class Derived : public Base {
public:
    Derived(int x, int y) : Base(x) { /* initialization */ }
};

/* If the base class has a parameterized constructor (i.e., one that requires arguments),
 you must explicitly call this constructor from the derived class's constructor using an initializer 
 list. If you do not specify which base class constructor to call,
 the default constructor of the base class will be invoked if it exists. */

 // when you create object of derived class the memory is allocated to both base and derived part of 
 //object

 // about order of constructor and destructor
 // when we call constructor base first and then derived second
 // but with destructor it is reverse
 