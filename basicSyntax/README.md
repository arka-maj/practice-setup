Basic Types: 
Int- store whole numbers without a fractional part. "int" is commonly 4 bytes on modern systems. 
float- stores single-precision floating-point numbers, meaning it acan represent fractional values but with limited precision, typically around 6 to 7 significantdecimal digits. It takes up 4 bytes of memory.
double- stores double-precision floating-point numbers, offering roughly twice the precision of float, around 15 to 17 significant decimal digits, and typically occupying 8 bytes of memory. It is preferred over float when precision matters more than memory savings.
char- stores a singl byte, most often used to represent a character encoded as its numeric value, such as ASCII. It can be signed or unsigned.

const- it marks a variable as read-only after initialization, so nay attempt to modify it later triggers a compile- time error. 

Volatile- tells the compiler that a variable's value can change unexpectedly,outside the normal flow of the program, such as through hardware resgisters or signal handlers. It is used in memeory management to avoid register caching.

restrict- is a hint tothe compilerthat a pointer is the only way to access the memory it points to during its lifetime.

OPERATORS:
arithmetic op- +,-,*,/
comparison op- ==, !=, <,>, <= and >=
Logical op- && (AND), || (OR), ! (NOT)
Ternary op- condition ? value_if_true : value_if_false ; is a compact way to write a simple if-else expression that returns a value. Overusing it for complex conitions can hurt readability, so it works best for short, simple choice.
Bitwise op- it manipulates bits within a value, including AND(&), OR(|), XOR(^), NOT(~), and the shift operators (<<, >>). They are used in low-level programming for tasks like setting flags, masking bits, or optimizing certain calculations. 

CONTROL FLOW: 
if else/ switch 
for/while/ do while loops
break/continue

FUNCTIONS:
main function- the function serves as the designated entry point where the execution of the every C program begins. When a program is run, the operating system calls this specific function to start the sequence of instructions defined within the code. Upon completion it returns an integer value.

recursive functions- function that calls itself, either directly or indireclty, to solve a problem by breaking it into smaller instances of the same problem. Kepp in mind that every recursive function needs a base case that stops the recursion, otherwise it will call itself indefinitely until it exhausts the call stack.
It use more memory than an equivalent loop due to accumulating function calls on the stack.
 IT IS SUITABLE FOR TREE TRAVERSAL. 

 Variable Scopes: local (read and executed inside the function), global (read and executed even outside the function)

 command-line arguments: it lets a program receive input when it starts, passed through main's parameters: argc (the count of arguments), with argv[0] typically being the program's own name.
 Parsing argv manually or with a library like getopt is a common early step in building any command-line utility.
 #MUST DO

 basicSyntax floder carries small basic programs to understand the concepts.