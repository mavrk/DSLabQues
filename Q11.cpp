/*
	@author Sanatt Abrol
*/

#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 5

using namespace std;

int queue[MAX];
int front,rear;
void add(int queue[],int,int&,int &);
int del(int queue[],int&,int&);
void show(int queue[],int,int);
int main()
{
	int ch=1,val;
	rear=-1;
	front=-1;
	    cout<<"\n\t Main Menu\n\t _________\n";
	    cout<<"\n 1.Add in queue -----> 1";
	    cout<<"\n 2.Delele from queue -----> 2";
	    cout<<"\n 3.Show the queue -----> 3";
	    cout<<"\n 4.Exit from menu -----> 4";
	
	while(ch!=4)
	{
	    cout<<"\n Enter your choice(1-4) :";
	    cin>>ch;
	    if(ch==1)
	    {
		 cout<<"Enter the value to be added in the queue: ";
		 cin>>val;
		 add(queue,val,front,rear);
	     }
	     if(ch==2)
	     {
		  val=del(queue,front,rear);
		  if(val!=-1)
		  {
			cout<<"Value deleted from queue is: "<<val;
		  }
		 }
	     if(ch==3)
			 show(queue,front,rear);
	}
}
void add(int queue[],int val,int &front,int &rear)
{
	if((rear==MAX-1 && front==0) || (rear+1==front))
		cout<<"\nCircular Queue is full.";
	if(rear==MAX-1)
		rear=0;
	else
		rear++;
	queue[rear]=val;
	if(front==-1)
		front=0;
}

int del(int queue[],int &front,int &rear)
{
	int value;
	value=queue[front];
	if(front==-1)
	{
		cout<<"\n Circular Queue empty.\n";
		value=-1;
	}
	if(front==rear)
		front=rear=-1;
	else
	{
		if(front==MAX-1)
			front=0;
		else
			front++;
	}

	return(value);
}

void show(int queue[],int front,int rear)
{
	int i;
	if(front==-1)
	{
		cout<<"Circular Queue empty";
	}
	cout<<"the values are";
	if(front<=rear)
		for(i=front;i<=rear;i++)
			cout<<"\n"<<queue[i];
	else
	{
		for(i=front;i<MAX;i++)
			cout<<"\n"<<queue[i];
		for(i=0;i<=rear;i++)
			cout<<"\n"<<queue[i];
	}
}









