#include <stdio.h>
#include <string.h>

/// Define a structure to hold student information
struct student {
    char name[20];  /// Array to hold student's name (up to 19 characters + null terminator)
    char id[10];    /// Array to hold student's ID (up to 9 characters + null terminator)
    double cgpa;    /// Variable to hold student's CGPA
};

int main() {
    int n, i, j;           /// Declare variables for number of students and loop counters
    struct student temp;   /// Temporary variable for swapping students during sorting

    /// Read the number of students from user input
    scanf("%d", &n);
    struct student arr[n]; /// Declare an array of 'student' structures to hold student data

    /// Loop to read student data
    for (i = 0; i < n; i++) {
        scanf("%s %s %lf", arr[i].name, arr[i].id, &arr[i].cgpa);  /// Read name, ID, and CGPA
    }

    /// Nested loop to sort students by CGPA in descending order using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i].cgpa < arr[j].cgpa) {  /// Compare CGPA of students
                temp = arr[i];    /// Swap students if they are out of order
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    /// Loop to print sorted student data
    for (i = 0; i < n; i++) {
        printf("%s %s %.2lf\n", arr[i].name, arr[i].id, arr[i].cgpa);  /// Print name, ID, and CGPA
    }

    return 0;  /// Return 0 to indicate successful execution
}

