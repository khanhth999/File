#include<stdio.h>
#include<math.h> 
int main()  
{  
	int n,i,dem=0;
	scanf("%d", &n);
	if (n<2){
		printf("%d is not a prime number",n);
	}else{
		for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
		dem++;
	}if(dem==0) printf("%d is a prime number",n);
	else printf ("%d is not a prime number", n);
	}
	return 0;
}
