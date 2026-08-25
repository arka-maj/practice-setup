An array in C is a fixed-size, contiguous block of memory holding multiple elements of the same type, accessed using an index starting at zero. The size of an array must be known at compile time unless it is allocated dynamically on the heap. 
Eg- int myNumbers[] = {25, 50, 75, 100};
int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

int size;

    // Ask user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare a Variable Length Array (VLA)
    int arr[size]; 

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

C represents strings as arrays of char terminated by a null character (\0), rather than as a distinct string type. Because of this, string handling relies on knowing exactly where the null terminator is, and functions like strlen, strcpy, and strcmp from <string.h> operate on this convention. Forgetting to account for the null terminator's extra byte, or copying a string into a buffer too small to hold it, are frequent sources of bugs.