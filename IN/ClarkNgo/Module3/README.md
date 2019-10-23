# Module 3 Lessons Learned

# arrays
- use `static const`
  - `static` is shared by all instances of a given class
  - `const` would warn you if any code would modify that
- changing `char` by adding an integer value
  - i.e. `char new_char = 'a' + 1;`
  - output: `b`

# functions
- creating a function declaration
  - syntax: `data_type function_name(data_type parameter_name);`
- creating a function with `return`

# numbers
- use of `srand((unsigned)time(NULL)` to achieve true randomness
- use of `rand()` to generate random values within a range

# pointers
- access the address of a variable using `&`
  - i.e. `&var1`
- access the value with `*`
  - i.e. `*ip`
```
int *ip;
ip = &var1;
cout << *ip;
```

# recursion
- function calling itself
- needs to have a base case to resolve
- functions are push to a stack when called
- functions are popped out of the stack when a function returns

# references
- declaring reference variables `int& r`
- access reference variables `cout << r`
