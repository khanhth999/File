# include<stdio.h>
# include<conio.h>
int F(int n)
{
	if(n=1)
	return 1;
	if (n=2)
	return 1;
	if (n>=3)
	return F(n-1)+F(n-2);
}
int main()
{
	int n;
	printf("Nhap vao so nguyen can tinh:");
	scanf("%d",&n);
	getch();
	printf("so hang thu %d = %d",n,F(n));
}
