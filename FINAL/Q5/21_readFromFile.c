#include <stdio.h>

int main()
{
    int n, i, arr[100];
    FILE *fp; ///File Pointer: Used to handle file operations.

    // Open the file in write mode
    fp = fopen("CSE-1121.txt", "w"); ///Opens the file in write mode. If the file does not exist, it is created.
    if (fp == 0)
    {
        printf("File doesn't exist!!\n"); ///If fopen returns 0 (or NULL), the file could not be opened.
    }
    else
    {
        printf("Enter the number of students: ");
        scanf("%d", &n);

        // Read the marks and write to the file
        for (i = 0; i < n; i++)
        {
            printf("Enter the final mark of student %d: ", i + 1);
            scanf("%d", &arr[i]);
            fprintf(fp, "%d ", arr[i]); ///This writes the formatted data (the marks in this case) to the file pointed to by fp.
        }
        fprintf(fp, "\n");
        fclose(fp);  // Close the file after writing
    }

    // Open the file in read mode
    fp = fopen("CSE-1121.txt", "r");
    if (fp == 0)
    {
        printf("File can't be opened\n");
    }
    else
    {
        char str[100];
        fgets(str, 100, fp);  /// Reads the content of the file into the str array.
        printf("%s ", str);  // Print the content to the console
        fclose(fp);  ///Always close the file after completing file operations to avoid resource leaks.
    }

    return 0;
}

