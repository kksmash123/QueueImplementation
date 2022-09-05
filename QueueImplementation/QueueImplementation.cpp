//queue implementation approach using single pointer with array

#include <iostream>

using namespace std;

int rear = -1;
int size1 = 10;
int* head = new int[size1];


//function declaration
void createQueue(int[], int);
void DisplayQueue(int*, int );
void Insert(int);
void Delete();





//function definition

//Insert an element into the queue
void Insert(int x)
{
	if (rear >=size1)
	{
		cout << "queue is full insertion not possible";
		return;
	}
	head[++rear] = x;

}




//Delete
void Delete()
{
	//deleting the front element only and moving to occupy that space
	int i = 0;
	
	//empty queue
	if (rear == -1)
	{
		return;
	}


	//non empty queue
	while (i < rear)
	{
		head[i] = head[i+1];
		i++;
	}
	rear--;
}




// Display
void DisplayQueue(int *head,int rear)
{
	//empty queue
	if (rear == -1)
	{
		cout << "Empty queue ";
		return;
	}

	//non empty queue
	for (int i = 0;i <=rear;i++)
	{
		cout << head[i] << " ";
	}
}

//create queue using array
void createQueue(int a[],int n)
{

	//empty
	if (n == 0)
	{
		return ;
	}

	while (rear < n-1 && rear<size1)
		head[rear] = a[++rear];
		
	rear--;

}





int main()
{

	int a[4] = { 5,10,2,0};

	createQueue(a, 4);
	DisplayQueue(head,rear);
	Delete();
	cout << endl << "after deletion" << endl;
	DisplayQueue(head, rear);
	Delete();
	cout << endl << "after deletion" << endl;
	DisplayQueue(head, rear);
	Delete();
	cout << endl << "after deletion" << endl;
	DisplayQueue(head, rear);
	Delete();
	cout << endl << "after deletion" << endl;
	DisplayQueue(head, rear);
	Delete();
	cout << endl << "after deletion" << endl;
	DisplayQueue(head, rear);
	Insert(30);
	cout << endl << "after insertion" << endl;
	DisplayQueue(head, rear);
	Insert(40);
	cout << endl << "after insertion" << endl;
	DisplayQueue(head, rear);
	Insert(50);
	cout << endl << "after insertion" << endl;
	DisplayQueue(head, rear);
	Insert(60);
	cout << endl << "after insertion" << endl;
	DisplayQueue(head, rear);

}
