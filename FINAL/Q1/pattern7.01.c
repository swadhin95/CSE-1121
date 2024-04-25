#include <stdio.h>

int main() {

    ///Sample Input             Sample Output
    ///          4                                  *
    ///                                            * * *
    ///                                          * * * * *
    ///                                        * * * * * * *
    ///                                          * * * * *
    ///                                            * * *
    ///                                              *
	int n ;
	scanf("%d",&n);

	// Print the top pyramid
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	// Print the inverted pyramid
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

