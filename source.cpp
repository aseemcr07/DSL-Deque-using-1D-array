#include<iostream>
using namespace std;

class dequeue
{

	int q[10],front,rear,count;
    int size = 5;

public:
	dequeue();
	void add_at_beg();
	void add_at_end();
	void delete_fr_front();
	void delete_fr_rear();
	void display();
};

dequeue::dequeue()
{
	front=-1;
	rear=-1;
	count=0;
}

void dequeue::add_at_beg()
{
	int val;
	if(front==-1)
	{
		front++;
		rear++;
        cout<<"Insert the element in queue : ";
        cin>>val;
		q[rear]=val;
		count++;
	}
	else if(count == size)
	{
		cout<<"Queue Overflow"<<endl;
	}
	else
	{   
        /*int i;
		for(i=count-1;i>0;i--)
		{
			q[i]=q[i-1];
		}*/
        cout<<"Insert the element in queue : ";
        cin>>val;
        front--;
		q[front]=val;
		count++;
		//rear++;
	}
}

void dequeue::add_at_end()
{
    int val;
    if (count == size)
    cout<<"Queue Overflow"<<endl;
    else {
        if (front == - 1){
            front++;
            cout<<"Insert the element in queue : ";
            cin>>val;
            rear++;
            q[rear] = val;
            count++;
        }
        
        else{
            cout<<"Insert the element in queue : ";
            cin>>val;
            rear++;
            q[rear] = val;
            count++;
        }
        
   }
}

void dequeue::display()
{
    if(count == 0){
        cout<<"Deque empty!"<<endl;
        return;
    }
	for(int i=front;i<=rear;i++)
	{
		cout<<q[i]<<" ";	}
}

void dequeue::delete_fr_front()
{
	if(count == 0)
	{
		cout<<"Deque underflow!\n";
		return;
	}
	else
	{
		if(front==rear)
		{
			front=rear=-1;
			return;
		}
		cout<<"The deleted element is "<<q[front];
		front++;
        count--;
	}
}

void dequeue::delete_fr_rear()
{
	if(front==-1)
	{
		cout<<"Deque underflow!\n";
		return;
	}
	else
	{
		if(front==rear)
		{
			front=rear=-1;
		}
		cout<<"The deleted element is "<< q[rear];
		rear--;
        count--;
	}


}

int main()
{
	int c,item;
	dequeue d1;

	do
	{
		cout<<"\n\n****DEQUEUE OPERATION****\n";
		cout<<"\n1-Insert at beginning";
		cout<<"\n2-Insert at end";
		cout<<"\n3_Display";
		cout<<"\n4_Deletion from front";
		cout<<"\n5-Deletion from rear";
		cout<<"\n6_Exit";
		cout<<"\nEnter your choice<1-4>:";
		cin>>c;

		switch(c)
		{
		case 1:
			d1.add_at_beg();
			break;

		case 2:
			d1.add_at_end();
			break;

		case 3:
			d1.display();
			break;

		case 4:
			d1.delete_fr_front();
			break;
		case 5:
			d1.delete_fr_rear();
			break;

		case 6:
			exit(1);
			break;

		default:
			cout<<"Invalid choice";
			break;
		}

	}while(c!=7);
	return 0;

}
