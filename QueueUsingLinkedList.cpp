#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(){
			data=0;
			next= NULL;
		}
		
		Node(int d){
			data= d;
			next= NULL;
		}
};

class Queue{
	public:
		Node* front;
		Node* rear;
		
		Queue(){
			front= NULL;
			rear= NULL;
		}
		
		bool isEmpty();
		void enqueue(Node* n);
		void dequeue(); 
		void display();
};

bool Queue::isEmpty(){
	if(front==NULL && rear==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

void Queue::enqueue(Node* n){
	if(isEmpty()){
		front= n;
		rear= n;
		cout<<"Node Enqueued"<<endl;
	}
	else{
		rear->next=n;
		rear=n;
		cout<<"Node Enqueued"<<endl;
	}
}

void Queue::dequeue(){
	Node *temp=NULL;
	if(front==rear){
		temp=front;
		front= NULL;
		rear= NULL;
	}
	else{
		temp=front;
		front= front->next;
	}
}

void Queue::display(){
	if(isEmpty()){
		cout<<"Queue Empty"<<endl;
	}
	else{
		Node* temp=front;
		while(temp!=NULL){
			cout<<temp->data<<"";
			temp=temp->next;
		}
	}
}

int main(){
	Queue q;
	int option, data;
	
	do {
    cout << "1.Enqueue	2.Dequeue	3.isEmpty	4.display	5.Exit" << endl;
    cin >> option;

    Node * new_node = new Node();

    switch (option) {
    case 1:
      cout << "Enter the VALUE of NODE to Enque" <<endl;
      cin >> data;
      new_node -> data = data;
      q.enqueue(new_node);
      break;
    case 2:
      cout << "Dequeue: ";
      q.dequeue();
      cout << endl;

      break;
    case 3:
      if (q.isEmpty())
        cout << "Queue is Empty" << endl;
      else
        cout << "Queue is not Empty" << endl;
      break;

    case 4:
      cout << "The elements of Queue are: " << endl;
      q.display();
      cout << endl;
      break;
    
    case 5:
      exit(0);
      break;
}

  } while (option != 5);

  return 0;
}
