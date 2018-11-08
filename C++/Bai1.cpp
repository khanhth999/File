#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
typedef struct{
	int mnv;
	char ten[50];
	int so;
}nhanvien;
void input(nhanvien a[],int n);
void output(nhanvien a[],int n);
void sortAZ(nhanvien a[],int n);
void sortChildren(nhanvien a[],int n);
int main(){
	nhanvien a[20];
	int n;
	printf("Moi ban nhap so nhan vien: ");
	scanf("%d",&n);
	fflush(stdin);
	input(a,n);
	sortChildren(a,n);
	printf("Danh sach nhan vien sap xep theo ten tu A-Z la: \n");
	output(a,n);
	sortAZ(a,n);
	printf("Danh sach nhan vien sap xep theo so nguoi phu thuoc giam dan: \n");
	output(a,n);
	return 0;
}
void input(nhanvien a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Moi nhap thong tin nhan vien thu %d: \n",i+1);
		printf("MNV: ");
		scanf("%d",&a[i].mnv);
		fflush(stdin);
		printf("Ho va Ten: ");
		gets(a[i].ten);
		printf("So nguoi phu thuoc: ");
		scanf("%d",&a[i].so);
	}
}
void output(nhanvien a[],int n){
	int i;
	printf("MNV\tHo va Ten\tSo nguoi phu thuoc\n");
	for(i=0;i<n;i++){
		printf("%d\t%s\t\t%d\n",a[i].mnv,a[i].ten,a[i].so);
	}	
}
void sortAZ(nhanvien a[],int n){
	int i,j;
	nhanvien k;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(a[i].ten,a[j].ten)>0){
				k=a[i];
				a[i]=a[j];
				a[j]=k;	
			}
		}
	}
}
void sortChildren(nhanvien a[],int n){
	int i,j;
	nhanvien k;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i].so<a[j].so){
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
}
