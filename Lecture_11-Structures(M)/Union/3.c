Aspect	            Structure (struct)	                                    Union (union)
Memory Allocation	Separate memory for each member	                        Shared memory for all members
Size	            Sum of sizes of all members (plus possible padding)	    Size of the largest member only
Member Validity	    All members hold valid values simultaneously	        Only one member holds a valid value at a time
Usage	            Used when all data members are needed independently	    Used to save memory when only one value is used at a time
Performance	        Slightly slower if many members (more memory accessed)	Faster if used carefully (less memory accessed)
Example Scenario	Student info: roll no, marks, name	                    Different types of data sharing same memory
Memory Example	    int a; float b; char c; → 9+ bytes	                    int a; float b; char c; → 4 bytes (largest)
Data Storage	    No overlap between members                              Overlap between members
                    It is declared using the struct keyword.                It is declared using the union keyword.
                    The size of the structure is equal to or                The size of the union is the size of its
                                                                            largest member.
                    greater than the total size of all of its
                    members.

                    The structure can contain data in                       Only one member can contain data at
                                                                            the same time.
                    multiple members at the same time.
