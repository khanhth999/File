#include<stdio.h>
int main()
{
	int i,j,a,b;
	printf("BANG MA ASCII\n====NDK====\n");
	printf("STT\t");
	printf("ky tu\n");
	for(i=0;i<26;i++)
	{
		for(j=0;j<2;j++)
		{
			a=65+i;
			if(j==0)
			printf("%d\t", a);
			else printf("%c\n", a);
		}
	}
}
