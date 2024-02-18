### START COMILING 
there are steps and stage to comile a C file into an excutable file and those steps are : 
1. preprocessor : remove comments and include header file in the source code, Replace macros name with code
   * gcc -E file - o file_name.i
3. Compiler : generate asembely code
   * gcc -S file_name.i -o file_name.s
4. assembler : assembler convert assemble code into object code of 0 and 1
   * gcc -c file_name.c -o file_name.o
5. linker : link object files with libraries to generate an excutable file .exe
   * gcc file_name.o -o app.exe

  *** you could convert C file into excutable file directly using * gcc file_name.c -o app.exe

  ### WRITE C CODE
  1. puts : The puts() function is used to write a string to the console and it automatically adds a new line character ‘\n’ at the end.
  2. printf : The printf() function is also used to print data on the console, but it can also be used to print the formatted data to the console based on a specified format string.
  3. sizeof() :
     * int : 4 byte(s)
     * char : 1 byte(s)
     * long int : 8 byte(s)
     * long long int : 8 byte(s)
     * float : 4 byte(s)
  5. write() : use <unistd.h> library **write(int fd, const void *buf, size_t nbytes);** The write() function attempts to write nbyte bytes from the buffer pointed to by buf to the file associated with the open file descriptor, fildes.  
