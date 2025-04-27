Q3: Describe pointer arithmetic in C
Answer:
• Pointer arithmetic refers to the application of some arithmetic operations on pointers. The operators that can be used in pointer arithmetic are ++, −−, +, and −.
Allowed operations are adding an integer to a pointer, subtracting an integer from a pointer, and subtraction of pointers, which point to the same type of data.

• The addition of an integer n to a pointer variable in a statement like:
ptr = ptr + n; . The statement above increases its value by n x size of the pointer’s data type. 
For example, if ptr is declared as a pointer to - 
• char: ptr is increased by n since the size of char is one byte.
• int or float : ptr is increased by nx4 since the size of both int and float is four
bytes.
• double: ptr is increased by nx8 since the size of double is eight bytes.
• Similar to the addition, subtracting an integer n from a pointer variable decreases
its value by n x size of the pointer’s data type. The subtraction of two pointers is allowed only if both point to the same data
type.
• The result of their subtraction is an integer number, which indicates the number
of data items between them.
• For example, suppose that the ptr1 and ptr2 are pointers to two integer variables
stored in the addresses 1000 and 1040, respectively.
• The result of ptr2−ptr1 is not equal to 40 (i.e., 1040−1000), but equal to
(1040−1000)/sizeof(int) = 40/4 = 10.
• This number indicates the number of integers between the two pointers.
• If the type of both pointers and variables was char, the result of ptr2−ptr1 would
be 40 because the size of the char type is one byte.
  
Comparing Pointers
• The comparison of two pointers makes sense only if both point to members of the
same data structure (such as an array).
• The operators ==, !=, >, <, >= and <= can be used to compare the pointers.
• For example, to check if ptr1 and ptr2 point to the same address or not, we can
write if (ptr1 == ptr2) or if (ptr1 != ptr2), respectively.
Besides subtracting and adding integers to a pointer, comparing and subtracting
pointers of the same type, no other arithmetic operation is allowed.
For example, the statements ptr ∗= 2, ptr += 7.5, ptr1+ptr2; are not allowed.



