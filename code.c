#include<iostream>
#include<time.h>
using namespace std;
struct Node
{
 long int data;
 string name;
 string t;
 struct Node *next;


};


struct Node*front=NULL;
struct Node *rear=NULL;


void enqueue(string y,stringw,long int x)
{
 struct Node *temp;
 temp=new Node;


 if(temp==NULL)
cout<<"Queue is FUll\n";


 else
 {
 temp->data=x;
 temp->name=y;
 temp->t=w;
 temp->next=NULL;
 if(front==NULL)
 front=rear=temp;


 else
 {
 rear->next=temp;
 rear=temp;
 }
 }


}




void dequeue()
{
 int x=-1;
 struct Node* temp;


 if(front==NULL)
cout<<"NO Call Log";
 else
 {
 temp=front;
 front=front->next;
 free(temp);
 }


}




void display(Node *temp)  
{  
    if (temp == NULL)  
       return; 
    display(temp->next);    
cout<<temp->name<<"   "<<temp->data<<"   "<<temp->t<<endl;  
cout<<endl;
}


int main()
{


  int n,count =0;
    string x,w;
    long int y;
time_t now = time(0);
    do
{ cout<<"enter 1 for input"<<endl<<"enter 2 for output"<<endl<<"Enter 0 to exit"<<endl;
cin>>n;
      switch(n)
{  case 1:
cout<<"Enter Name: ";
cin>>x;
cout<<"Enter Phone NUmber :";
cin>>y; 
            w = ctime(&now);
           enqueue(x,w,y);
           count++;
           break;


           case 2:
if(count >=11)
dequeue();
             display(front);
             break;
      }   
}while(n!=0);


}
