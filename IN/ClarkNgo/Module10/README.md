# Module 10 Lessons Learned

# binary_search
- algorithm:
  - while left pointer is less than or equal to right pointer
    - check if target is in middle pointer
    - if target greater, ignore left half
    - if target less, ignore right half

# binary_search_tree
- utility function to create a new BST node
  - allocate size for `node`
  - a `node` has:
    - `key`
    - `*left` and `*right`
- utility function to insert a new node with a given key
  - flow:
    - if tree is empty, return a new node
    - else recur down the tree
      - if `key` less than `node->key`, insert at `left`
      - if `key` greater than `node->key`, insert at `right`

# depth_first_search
- uses graph data structure
- components
  - Graph class
    - `int V` - no of vertices
    - `list<int> *adj` - pointer to an array containing adjacency lists
    - `DFSUtil(int v, bool visited[])` - recursive function for DFS
    - `addEdge` - add edge to graph
    - `DFS` - traversal

# hash_table
- components
  - template for generate type
    - `template<typename K>, typename V>`
    - Hashnode
      - Hashnode class
        - `V value`
        - `K key`
        - constructor
          - `this->value = value`
          - `this->key = key`
    - Hashmap
      - HashMap class
        - hash element array: `HashNode<K,V> **arr`
        - dummy node:  `HashNode<K,V> *dummy`
        - functions:
          - `insertNode`
          - `deleteNode`
          - `get` - search value for a given key
          - `sizeofMap`
          - `isEmpty`
          - `display`

# heap_grap_ds
components:
- `swap(int *x, int *y)` - swap two integers
- MinHeap class
	- `int *harr` - pointer to array of elements in heap
	- `int capacity` - maximum possible size of min heap
	- `int heap_size` - current number of elements in min heap
  - `void MinHeapify(int)` - to heapify a subtree with the root at given index
  -  `int parent(int i) { return (i-1)/2; }`
	- `int left(int i) { return (2*i + 1); }` - to get index of left child of node at index i
- `int right(int i) { return (2*i + 2); }` - to get index of right child of node at index i
- `int extractMin();` - to extract the root which is the minimum element
- `void decreaseKey(int i, int new_val);` -D ecreases key value of key at index i to new_val
-	`int getMin() { return harr[0]; }` - Returns the minimum key (key at root) from min heap
- `void deleteKey(int i);` - Deletes a key stored at index i
- `void insertKey(int k);` - Inserts a new key 'k'

# quick_sort
components:
- `swap(int *x, int *y)` - swap two integers
- `int partition (int arr[], int low, int high)`
    - This function takes last element as pivot, places the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot) to left of pivot and all greater elements to right of pivot
- `void quickSort(int arr[], int low, int high)` - low --> starting index, high --> ending index

# tree_data_structure
components:
  - `struct node`
    - `data`
    - `node *left`
    - `node *right`
  - `struct node* newNode(int data)` - allocate new node with data
# tree_traversal
- postorder - left, right, root
- inorder - left, root, right
- preorder - root, left, right
