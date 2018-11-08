#include <stdio.h>
int main()
{
	int a, b, i, j;
	printf("chieu dai:"); scanf("%d", &a);
	printf("chieu rong:"); scanf("%d", &b);
	for (i = 0; i < a ; i++)
	{
		for (j = 0; j < b; j++)
		{
			if ( i==0 || i==b-1 || j==0 || j==a-1)
		{
			printf(" * ");
		} else {
			printf("   ");
		}
		}
	printf("\n");
	}
	return 0;
}
