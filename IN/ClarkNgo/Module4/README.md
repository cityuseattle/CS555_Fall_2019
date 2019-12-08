# Module 4 Lessons Learned

# date_time
- use `ctime` library
  - get current time with `time(0)`
```
// current date/time based on current system
time_t now = time(0);

// convert now to string form
char* dt = ctime(&now);
```
# object_oriented
- use of scope resolution operator `::` to access global variable
- use of `static_cast<type>` to convert a data type

# stl_tutorial
- use of `vector` library`
- vector is a dynamic type of array
- vector methods:
  - `size()`
  - `push_back()`
  - `end()`

# strings
- use of `cstring` library`
- concetanate strings with `strcat(str1, str2)`

# templates
- use of `template class<T>`
- templates are expanded at compile time
- compiler checks data type before template expansion
