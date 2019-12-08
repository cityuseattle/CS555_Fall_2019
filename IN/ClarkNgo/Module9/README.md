# Module 9 Lessons Learned

# array
- create 2d array
```
int person [HEIGHT][WIDTH]
```
- nested for loop to iterate over nested array
```
for (n=0; n<HEIGHT; n++)
{
  for (m=0; m<WIDTH; m++)
  {
  }
}
```
# linked_list
- components
  - `class Node`
  - data members
    - value: `int data`
    - pointer: `Node* next`

- creating a linked list
  - `head = new Node()`
  - `second = new Node()`
- assign data
  - `head->data = 1`
- link first node to second
  - `head->next  = second`
# queue
- FIFO
- use c++ library `queue`
- queue methods
  - `empty` - Test whether container is empty
  - `size` - Return size
  - `front` - Access next element
  - `back` - Access last element
  - `push` - Insert element
  - `pop` - Remove next element

# stack
- LIFO
- use c++ library `stack`
- stack methods
  - `empty` - Test whether container is empty
  - `size` - Return size
  - `top` - Access top element
  - `push` - Insert element
  - `pop` - Remove top element
