#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create an empty file (or truncate existing one)
void createFile(const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error creating file");
        return;
    }
    fclose(fp);
    printf("File '%s' created successfully.\n", filename);
}

// Write user input to an existing file (overwrite)
void writeFile(const char *filename) {
    FILE *fp = fopen(filename, "r+"); // Must exist
    if (fp == NULL) {
        perror("Error: File does not exist or cannot be opened");
        return;
    }

    char data[1000];
    getchar(); // clear leftover newline
    printf("Enter the data to write (single line):\n");
    fgets(data, sizeof(data), stdin);

    // Clear the file and write new content
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "%s", data);
    fclose(fp);
    printf("Data written to '%s'.\n", filename);
}

// Append user input to an existing file
void appendFile(const char *filename) {
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        perror("Error: File does not exist or cannot be opened");
        return;
    }

    char data[1000];
    getchar(); // clear leftover newline
    printf("Enter the data to append (single line):\n");
    fgets(data, sizeof(data), stdin);

    fprintf(fp, "%s", data);
    fclose(fp);
    printf("Data appended to '%s'.\n", filename);
}

// Read and display file contents
void readFile(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error reading file");
        return;
    }

    char ch;
    printf("Contents of '%s':\n", filename);
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
}

// Delete a file
void deleteFile(const char *filename) {
    if (remove(filename) == 0) {
        printf("File '%s' deleted successfully.\n", filename);
    } else {
        perror("Error deleting file");
    }
}

int main() {
    int choice;
    char filename[100];

    do {
        // Display menu
        printf("\nFile Operation Menu:\n");
        printf("1. Create File (empty)\n");
        printf("2. Write to Existing File\n");
        printf("3. Append to Existing File\n");
        printf("4. Read File\n");
        printf("5. Delete File\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter the filename: ");
            scanf("%s", filename);
        }

        switch (choice) {
            case 1:
                createFile(filename);
                break;
            case 2:
                writeFile(filename);
                break;
            case 3:
                appendFile(filename);
                break;
            case 4:
                readFile(filename);
                break;
            case 5:
                deleteFile(filename);
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please select a number between 1 and 6.\n");
        }

    } while (choice != 6);

    return 0;
}
