#include<iostream>
using namespace std;
#define MAX 20

class stack{
	int top, arr[MAX];
	
	public:
		stack(){
			top=-1;
		}
		
		void push(int);
		void pop(int);
		void display();
};

void stack::push(int s){
	if(top>=MAX-1){
		cout<<"Stack is full"<<endl;
	}
	else{
	top++;
	arr[top]=s;
	}
}

void stack::pop(int s){
	if(top<=-1){
		cout<<"Stack is empty:"<<endl;
	}
	else{
		cout<<"POP Element :"<<arr[top]<<endl;
		top--;
	}
}

void stack::display(){
	if(top>=0){
		cout<<"Stack contains:"<<endl;
		for(int i=top;i>=0;i--){
			cout<<arr[i]<<endl;
		}
	}
	else
	cout<<"Stack is empty"<<endl;
}

int main(){
	stack Y;
	int x, s;
	
	do{
		cout<<"Select the function your want to prform on the stack:"<<endl<<"1]POP:	2]PUSH:	3]Display:	4]Exit:"<<endl;
		cin>>x;
		
		switch(x){
			
			case 1:
				{
					Y.pop(s);
					break;
				}
			case 2:
				{
					cout<<"Enter the element: "<<endl;
					cin>>s;
					Y.push(s);
					break;
				}
			case 3:
			{
				Y.display();
				break;
			}	
			case 4:
				exit(0);
				break;
			default:
			{
				cout<<"INVALID"<<endl;
				break;	
			}	
		}
	}while(x!=4);
	return 0;	
}
