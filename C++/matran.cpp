#include <stdio.h>
int main()
{
	float a[8][6];
	int i, j;
	printf("\n %20c MA TRAN A \n\n\n", 32);
	for (i=0; i < 8; i++)
	{
		for (j=0; j < 8; j++);
			printf("%10.2f", a[i][j]);
			printf( "\n");
	}
	return 0;
}
