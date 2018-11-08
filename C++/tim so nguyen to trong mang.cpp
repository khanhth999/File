//Nguyen Duy Khanh
#include<stdio.h>
int main(){
	int n,i,j,count=0;
	int mang[100];
	printf("Nhap so pt: ");
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		printf("mang[%d]= ",i);
		scanf("%d", &mang[i]);
	}
	printf("\nSo nguyen to trong mang la: ");
	for (i=0;i<n;i++)
	{
		for (j=2;j<=mang[i]/2;j++)
		{
			if (mang[i]%j==0)
			{
				count++;
			}
		}
		if (count==0)
				printf("%5d",mang[i]);
	}
	return 0;
}
