#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,delta,x1,x2;
	printf("nhap so a:"); scanf("%f", &a);
	printf("nhap so b:"); scanf("%f", &b);
	printf("nhap so c:"); scanf("%f", &c);
	if (a==0)
	{
		if (b==0)
	{
		if (c==0)
			printf("phuong trinh vo so nghiem!");
			else
				printf("phuowng trinh vo nghiem!");}
	else 
	printf("phuong trinh co mot nghiem la: %.2f\n", -c/b);
	}
	delta=(b*b-4*a*c);
	if (delta<0) printf("phuong trinh vo nghiem!");
	if (delta==0) {
		x1=-b/(2*a);
		printf ("phuong trinh co nghiem kep: %.2f.\n", x1);
	}
	if (delta>0) { 
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
	printf("phuong trinh co hai nghiem phan biet:");
	printf("\n%.2f", x1);
	printf("\n%.2f", x2);
	}
	return 0;
}

