#include<iostream>
#include<fstream>

using namespace std;



struct node{
	int value;
	node *next;
	
};

void Josephus(int n,int m)
{
	
	ofstream outfile;
	outfile.open("Output.txt", ios::out | ios::trunc);
	
	node *head = new node();
	head->value = 1;
	node* temp = head; //giu dia chi dau tien
	
	//tao vong tron
	 for(int i = 2; i<=n;i++)
	 {
	 	head->next = new node();
	 	head = head->next;
	 	head->value=i;
	 }
	 head->next=temp;
	 
	 while(head!=head->next)
	 {
	 	for(int i=1;i<m;i++)
	 	{
	 		head=head->next;
	 		
		}
		temp=head->next;
		cout<<head->next->value<<" ";
		outfile<<head->next->value<<" ";
		head->next=head->next->next;
		delete temp;
	 }
	 cout<<head->value;
	 	outfile<<head->value;
	 //delete head;
	 
}

int main()
{
//	ifstream infile; 
//    infile.open("input.txt", ios::in| ios::trunc);
    
    int n,m;
    cout<<"N = ";
	cin>>n;

	cout<<"M = ";
	cin>>m;
	
	
    Josephus(n,m);
    
    
    return 0;
    
}
