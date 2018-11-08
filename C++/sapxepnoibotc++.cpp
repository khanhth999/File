#include<iostream>

using namespace std;
int search(int B[], float x, int n)
{
	int mid, low = 0, hight=n-1;
	while(low<hight)
	{
		//cout<<mid<<" "<<low<<" "<<hight<<endl;
		mid=(low+hight)/2;
		//cout<<B[mid]<<endl;
		if(x>B[mid]) {
		low=mid+1; }
		else if(x<B[mid]){
			 hight=mid-1;
		}
		else return (mid);
	}
}
void nhap(int A[], int &n) {        
        cout<<"nhap so phan tu cua mang n:";
        cin>>n;
        for(int i=0; i<n; i++) {
               // cout<<"phan tu A["<<i<<"]"<<"=";
                cin>>A[i];
        } 
 }

void bubblesort(int A[], int &n) {
        for (int i=0; i<n; i++) {
        for (int j=n-1; j>i; j--)
                if(A[j - 1] > A[j]) {
                int temp = A[j-1];
                A[j-1] = A[j];
                A[j] = temp;
            } 
    } 
}

void inkq(int A[], int &n) { 
        for(int i = 0; i < n; i++) 
        { 
                cout<< A[i] <<" "; 
        } 
}

int main () 
{
		float B,x;
        int A[100], n, k;
        nhap(A, n);
        
        //inkq(A, n);
        bubblesort(A, n);
        cout<<"mang khi sap xep la:";
        inkq(A, n);
        cout<<"Nhapsocantim: ";
        cin>>x;
        k=search(A,x,n);
        if(k>=0)
        {
        	cout<<x;
        }
        else cout<<"khong thuoc mang";
        return 0;
} 
