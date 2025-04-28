Q1: Differentiate while() loop from do...while() loop.
Answer:

Feature	              while() Loop	                                      do...while() Loop
Condition             check	At the beginning	                            At the end
Execution guarantee	  May not execute even once if condition is false	    Executes at least once
Syntax	              while(condition) { code }	                          do { //code } while(condition);
Use Case	            When pre-check is needed before execution	          When at least one execution is needed
