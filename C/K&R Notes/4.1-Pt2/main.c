/* Some additional tidbits about functions:

- The default return type is int (will throw a warning)
- You don't really need anything after the 'return' keyword.
- The data type of the return statement will be converted to the one that
  the function has.
- It is possible to have a multiple return statements.
- If you have an if-else branch, for example, and if you have two return
  statements, deleting one might return a garbage value if your function is
  non-void.
- Here's another thing: it is possible to compile multiple .c files using
  the cc (or gcc) command:

 	cc main.c getline.o strindex.o

  all of it will be loaded into a single executable file.
*/