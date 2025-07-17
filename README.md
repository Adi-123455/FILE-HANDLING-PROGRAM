# FILE-HANDLING-PROGRAM
# MULTITHREADED-FILE-COMPRESSION-TOOL
*COMPANY*: CODTECH IT SOLUTIONS
*NAME*: ADI BAIS
*INTERN ID*: CT04DG2170
*DOMAIN*: C++ PROGRAMMING
*DURATION*: 4 WEEKS
*MENTOR*: NEELA SANTOSH

*DESCRIPTION*:

The given C program is a simple and interactive file management system that enables users to perform basic operations on files. These operations include creating a file, writing data to an existing file, appending data to a file, reading the contents of a file, and deleting a file. The program uses a menu-driven approach, where users can select an operation by entering a corresponding number from the menu. This kind of program is particularly useful for understanding the basics of file handling in the C programming language.

The program begins by including necessary header files: stdio.h for standard input/output functions, stdlib.h for general-purpose utilities, and string.h for handling string-related operations. It then defines five core functions, each responsible for a specific file operation.

The createFile() function is used to create a new file or truncate an existing file. It uses fopen() with the "w" mode, which either creates a new empty file or clears the contents of an existing one. If the file cannot be created, the program displays an error using perror().

The writeFile() function allows the user to overwrite the content of an existing file. It opens the file in "r+" mode, which allows both reading and writing but requires that the file already exists. The user is prompted to enter a line of text, which is then written to the file after clearing any existing content using fseek() to move the file pointer to the beginning.

The appendFile() function enables the user to add new data to the end of a file without altering the existing contents. It opens the file in "a" mode (append) and writes the user-provided data at the end of the file using fprintf().

The readFile() function reads and displays the content of the specified file. It opens the file in "r" mode and reads it character by character using fgetc() until it reaches the end of the file (EOF). Each character is printed using putchar() to display the file contents on the screen.

The deleteFile() function deletes a file from the system using the remove() function. If the file is deleted successfully, a confirmation message is displayed. Otherwise, an error message is printed using perror().

The main() function presents a menu to the user inside a loop that continues until the user chooses to exit (option 6). The menu includes all five operations plus the exit option. The user inputs a choice, and if it's a valid operation (1–5), they are prompted to enter a filename. The appropriate function is then called based on the user's selection.

Throughout the program, basic input validation and error handling are used to ensure the program behaves correctly. It also uses getchar() before fgets() to clear the newline character left in the input buffer, which is a common practice when mixing scanf() and fgets().

In conclusion, this file management program is a well-structured, beginner-friendly project that demonstrates essential file handling techniques in C. It’s an excellent foundation for learners to grasp how to interact with files using C and can be expanded with more features like renaming files, handling directories, and supporting multi-line input.

*OUTPUT*:

<img width="1920" height="1080" alt="Image" src="https://github.com/user-attachments/assets/5ba6bed2-3669-4806-b9bc-ad48d031911d" />
