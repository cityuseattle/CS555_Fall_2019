# Module 6 Lessons Learned

# abstraction
- use `public:` to interface to outside world
- use `private:` hide data to outside world
- use of constructor to initialize data members when you instantiate a class

# inheritance
- use of base class
```
class Shape {

}
```
- use of derived class
```
class Rectangle: public Shape {

}
```

# polymorphism
- use of `protected`. Class members declared as protected can be used only by the following: Member functions of the class that originally declared these members.
- use of `virtual` functions
  - can force you to inherit
  - or be relax to not force you to inherit
