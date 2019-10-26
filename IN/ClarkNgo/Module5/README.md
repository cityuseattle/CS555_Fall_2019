# Module 5 Lessons Learned

# dynamic_memory
- use of constructor and destructor (to free up memory)
  - destructor: `~Box()`

# namespaces
- namespace is a declarative region that provides scope to identifiers inside it.
- you can have multiple namespaces with the same name
- you'll use this for example if you want to call a function from a specific namespace

# overloading
- function overloading allows multiple functions having the same name but different signatures
```
void print(int i);
void print(double  f);
```
