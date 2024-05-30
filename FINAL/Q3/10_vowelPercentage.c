#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char vowelString[5] = { 'a' , 'e' , 'i' , 'o' , 'u' };
    int vowels[5] = {0}; // Array to store the occurrences of each vowel (a, e, i, o, u)
    int totalVowels = 0; // Total number of vowels in the string

    // Input the string
    printf("Enter a string (containing only lowercase alphabets and white spaces): ");
    fgets(str, sizeof(str), stdin);

    // Iterate through the string character by character
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the current character is a vowel
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            // Increment the count of the corresponding vowel in the array
            switch (str[i]) {
                case 'a':
                    vowels[0]++;
                    break;
                case 'e':
                    vowels[1]++;
                    break;
                case 'i':
                    vowels[2]++;
                    break;
                case 'o':
                    vowels[3]++;
                    break;
                case 'u':
                    vowels[4]++;
                    break;
            }
            totalVowels++; // Increment the total count of vowels
        }
    }

    // Print the occurrences and percentages of each vowel
    printf("\nOccurrences of vowels:\n");
    printf("-----------------------\n");
    printf("Vowel   Occurrences   Percentage\n");
    printf("--------------------------------\n");
    for (int i = 0; i < 5; i++) {
        double percentage = (double)vowels[i] / totalVowels * 100;
        printf("%-10c %-12d %.2f%%\n", vowelString[i], vowels[i], percentage);
    }

    return 0;
}

