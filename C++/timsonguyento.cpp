#include<stdio.h>
int nguyento(int n)
{
	if(n<2) return 0;
	if(n==2) return 1;
	int i=2;
	while ((i<=n/2) && (n%i!=0)) i++;
	if(n%i!=0) return 1;
	else return 0;
}
int main()
{ 
	int i,n,a[100];
	printf("n= "); scanf("%d",&n);
	if (nguyento(n)) printf("%d la snt\n",n);
	else printf("%d ko la snt\n",n);
	
	return 0;
}
