/*
Difference Between Direct and Indirect Recursion
Recursion is a programming technique where a function calls itself. It can be classified into Direct Recursion and Indirect Recursion based on how the function calls occur.

Feature	                      Direct Recursion	                          Indirect Recursion
Definition	                  A function calls itself directly.	           A function calls another function, which in turn calls the original function.
Number of Functions Involved	Only one function is involved.	              Two or more functions call each other in a loop.
Example                        void funcA(int n) { if (n == 0) return; printf("%d ", n); funcA(n - 1); }	 void funcA(int n) { if (n <= 0) return; printf("%d ", n); funcB(n - 1); } void funcB(int n) { if (n <= 0) return; printf("%d ", n); funcA(n - 2); }
Call Structure	funcA → funcA → funcA ...	funcA → funcB → funcA → funcB ...
Complexity	                    Usually easier to analyze and debug.	          More complex due to multiple functions calling each other.
Use Cases	                      Factorial, Fibonacci, Binary Search, Tree Traversals.	  State Machines, Mutual Control Flow, Problem-Solving with Alternating Tasks.
Example Execution
Direct Recursion Example (funcA(3))

funcA(3) → prints 3 → calls funcA(2)
funcA(2) → prints 2 → calls funcA(1)
funcA(1) → prints 1 → calls funcA(0)
funcA(0) → returns (Base Case)
Output: 3 2 1

Indirect Recursion Example (funcA(3))

funcA(3) → prints 3 → calls funcB(2)
funcB(2) → prints 2 → calls funcA(0)
funcA(0) → returns (Base Case)
Output: 3 2
*/
