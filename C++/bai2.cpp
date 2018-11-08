#include <stdio.h>
#include <conio.h>
#include <string.h>
#define nguon "lab1102.i"
typedef struct{
	int ngay,thang,nam;
}sinh;

typedef struct{
	char ten[30],gt;
	sinh ngsinh;
}thongtin;

sinh dateofbirth(){
	sinh a;
	scanf("%d/%d/%d",&a.ngay,&a.thang,&a.nam);
	return a;
}

thongtin newemp(){
	thongtin a;
	printf("Ho ten:");fflush(stdin);gets(a.ten);
	printf("Ngay sinh:");a.ngsinh=dateofbirth();
	printf("Gioi tinh:");fflush(stdin);scanf("%s",&a.gt);
	return a;
}
 void input(char a[],int n){
 	FILE *fp;thongtin b;int i;
 	fp=fopen(a,"wb");
 	for(i=0;i<n;i++){
 		printf("Nhan vien thu %d\n",i+1);
 		b=newemp();
	  	fwrite(&b,sizeof(thongtin),1,fp);}
	fclose(fp);
}

void output(char a[],int n){
	FILE *fp;thongtin b;int i,c;
	fp=fopen(a,"rb");
	for (i=0;i<n;i++){
		fread(&b,sizeof(thongtin),1,fp);
		c=2017-b.ngsinh.nam;
		if ((b.gt=='f')&&(c>=50)) 
			printf("%s\t%d\t%c\n",b.ten,c,b.gt);
	}	
 	fclose(fp);
 }
 int main(){
 	int n=4;
	input(nguon,n);
	printf("\nDANH SACH NHAN VIEN NU>=50\nHO TEN\t\tTUOI\tGIOI TINH\n");
 	output(nguon,n); 	
 	return 0;
 }
