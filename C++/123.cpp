#include <stdio.h>
#include <math.h>

int main ()
{  
   int d=0, a=0;
   double sd=0, sa=0; 
   int i,A[10];
   printf("nhap day so:\n");

   for(i=0; i<10; i++)              
    {   printf("A[%d]=\t", i);
        scanf("%d", &A[i]);
    }
  
   for(i=0; i<=9; i++)
    {  if(A[i]>=0)
        { 
       	 
          sd+=A[i];
          d++;
        } 
       else 
      { 
	  	
     	sa+=A[i];
     	a++;
     	
      }      
   }

    double TBCD= (sd)/(d);
    double TBCA= (sa)/(a);
 	printf("Co %d so duong, tong so duong = %.2f, trung binh cong so duong=%.2lf\n", d, sd, TBCD);
 	printf("Co %d so am, tong so am = %.2f, trung binh cong so am=%.2lf", a, sa, TBCA);
 	return 0;
 } 
