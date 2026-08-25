MEMORY MODEL:
stack- forlocal variables and function call information
     - it is fast but limited in size

heap- for dynamically allocated memory,separate segments for global/static variables and the compiled code itself.
    - uses functions like malloc and free, offering more flexibility in size and lifetime at the cost of more responsibility.

choosing among them depends upon the data size known at compile time and how long it needs to live.
Local variables live only until the enclosing block exits in stack.
whereas the global variables lives until it is explicitly freed in heap.

asterisk, such as *p is used to holdthe memory address of a value rather than the value itself.
& operator is use to retrieve the variable's address, while the * operator, when applied to pointer, deferences it to access the value it points to.

Pointers used for passing large data efficiently, building dynamic data structures, and enabling functions to modify their caller's variables.

NULL is used for no valid memory location like *p = NULL

VOID pointer- can point to any data type but cannot be dereferenced directly, since the compiler has no type information about it point to. It is generally used in function like malloc.

malloc- is a function used to reserve a specific amount of memory during the execution of a program.When it is called, it allocates a block of memory of requested byte size on the heap and returns a pointer to the first byte of that block. If the system cannot provide the requested memory, the function returns a null pointer to indicate that the allocation failed.

calloc- is a function used to allocate specified number of blocks of memory, each of a set size, and initiates every bytein that memoryto zero.It takes two arguments:
- the number of elemets to allocate 
- size of each element in bytes

realloc- is a function used to change the size of a previously allocated memory block. 
- it takes pointer to existing memory block and a new size as arguments then attempt to resize the block whilepreserving its existing contents.
- if the current memor location cannot be expanded, it allocates a new block of the requested size, copies the data from the old memory to the new location, frees th old memory, and returnd aponter to the new block

free- every allocation must eventually be paired with exactly with free to deallocate a block of memory that was previously reserved on the ehap.