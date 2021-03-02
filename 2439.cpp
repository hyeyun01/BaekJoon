#include<stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		for (int j = n - i;j > 1;j--) {
			printf(" ");	
		}
		for (int k = n - i;k < n+1;k++) {
			printf("*");
		}
		printf("\n");
	}
}