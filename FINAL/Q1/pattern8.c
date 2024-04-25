#include <stdio.h>

int main()
{
	int n ;
	scanf("%d",&n);
	// Printing upper part
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	// printing lower part
	for (int i = n - 1; i > 0; i--) {
		for (int j = i; j > 0; j--)
			printf("*");
		printf("\n");
	}

	return 0;
}
