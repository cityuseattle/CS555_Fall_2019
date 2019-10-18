# Module 2 Lessons Learned

# constants_and_literals
- use `#define` to create a constant variable for global access
- use `const` to create a constant variable with scoping
- use best practice of `UPPERCASE` for constant variable naming
```
#define NEWLINE '\n'
#define HORTAB '\t'
const int  LENGTH = 10;
const int  WIDTH  = 5;
const char VERTAB = '\v';
```

# decision_making
- use of ternary operator for conditional statement
- syntax: condition `?` return/output if true `:` return/output if false
```
response = (withPineapple) ? "I love it!" : "I hate it!";
```

# loop_types
- use of `while` loop
- use of multiple decrement `----n`

# modifier_types
- use `unsigned int` to allow large numbers to be stored in a variable
- range: `0 to 65,535 or 0 to 4,294,967,295`
- storage size: `2 or 4 bytes`

# operators
- use of pointers
- use of reference operator `&`
- use of dereference operator `*`
```
mypointer = &firstvalue;
*mypointer = 10;
mypointer = &secondvalue;
*mypointer = 20;
```

# storage_classes
- use `static` keyword to allow usage of variable / function without instantiating a class
