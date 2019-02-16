Programming Assignment #1 CSE 215
1
Overview
For this assignment, you’re going to write a C program to operate on sets.
Our universe of elements consists of all (normal, printable, non-whitespace)
single characters that can be entered from the keyboard (a-z, A-Z, 0-9 and
punctuation).
Your program should prompt the user for the elements of the first set
(called A): the user enters the elements, followed by < EN T ER >. Do the
same for the second set (B). Then print the following information:
• The elements of A in the usual format: {e 1 , e 2 , ..., e n }
• The elements of B
• The cardinality of A and B
• A ∪ B
• A ∩ B
• A \ B
2
Details
• You should prompt the user for their two input strings
• Remember, a set cannot contain more than one copy of an element. If
the user enters an element twice, it should only appear in the
set once.
• Ignore whitespace (use ctype’s “isspace()” function), but treat other
characters as elements of the set. Remember to ignore any trailing
newlines in your input.
• the empty set is a valid set
• Submit your .c program via Canvas by the due date/time. If your code
includes multiple files, submit them as a tarball (.tgz).
13
Assumptions
You may assume input lines are no more than 120 characters each, and
include only “normal” characters (no ESCapes, odd CTRL chars, etc.)
4
Recommendations
Start this assignment early! Use structures to simplify your code, and make
things modular. If you define a membership-test function first, it will simplify
writing an insert function. With those two functions, building a set from the
input is very simple, as is calculating the union, intersection and complement.
2