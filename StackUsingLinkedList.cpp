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
			data ;
			next= NULL;
		}
};

class Stack{
	public:
		Node *top;
		
		Stack(){
			top= NULL;
		}
		
		bool isEmpty(){
			if(top == NULL){
				return 1;
			}
			else
				return 0;
		}
		
		void push(Node *n){
			 if(top == NULL){
			 	top=n;
			 	cout<<"Node pushed: "<<n -> data<<endl;
			 }
			 else{
			 	Node *temp= top;
			 	top= n;
			 	n -> next=temp;
			 	cout<<"Node pushed: "<<endl;
			 }
		}
		
		Node *pop(){
			Node * temp= NULL;
			if(isEmpty()){
				cout<<"Stack Empty"<<endl;
				return top;
			}
			else{
				temp=top;
				top=top -> next;
				return temp;
			}
		}
		
		void display() {
		    cout << "Satck Elements:	" << endl;
		    Node * temp = top;
		    while (temp != NULL) {
		      cout<<temp -> data<<endl;
		      temp = temp -> next;
		    }
		  }
};

int main() {
  Stack s1;
  int option, data;

  do {
    cout << "1.Push		2.Pop	3.isEmpty	4.display	5.Exit" << endl;
    cin >> option;

    Node * new_node = new Node();

    switch (option) {
    case 1:
      cout << "Enter the VALUE of NODE to push in the stack" <<endl;
      cin >> data;
      new_node -> data = data;
      s1.push(new_node);
      break;
    case 2:
      cout << "Poped Value: ";
      new_node = s1.pop();
      cout <<new_node -> data;
      delete new_node;
      cout << endl;

      break;
    case 3:
      if (s1.isEmpty())
        cout << "Stack is Empty" << endl;
      else
        cout << "Stack is not Empty" << endl;
      break;

    case 4:
      cout << "Display Function Called - " << endl;
      s1.display();
      cout << endl;
      break;
    
    case 5:
      exit(0);
      break;
}

  } while (option != 5);

  return 0;
}

