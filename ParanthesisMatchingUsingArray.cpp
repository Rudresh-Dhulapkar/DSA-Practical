#include<iostream>
using namespace std;

class paren{
	int top, x, y, z;
	char e[25], s[25];
	
	public:
		paren();
		void input();
		void check();
		void push(char);
		void pop();
};

paren::paren(){
	top=x=y=z=0;
	input();
	check();
}

void paren::input(){
	cout<<"Enter the equation"<<endl;
	cin>>e;
}

void paren::pop(){
	s[top-1]='0';
	top--;
}

void paren::push(char c){
	s[top]=c;
	top++;
}

void paren::check() {
	for(int i=0;e[i]!=0;i++){
		if(e[i]=='('||e[i]=='{'||e[i]=='['){
			push(e[i]);
			x++;
		}
		
			if(e[i]==')'||e[i]=='}'||e[i]==']'){
			if(top>0){
				if(e[i]==')'&&s[top-1]=='('||e[i]=='}'&&s[top-1]=='{'||e[i]==']'&&s[top-1]=='['){
					pop();
				}
				else{
				z=1;
				}
			}
			
			y++;
		}
	}
	
	if(x>y&&z==0){
		cout<<"There are more left paranthesis that right "<<endl;
	}
	else if(x<y&&z==0&&top==0){
		cout<<"There are more right paranthesis than left "<<endl;
	}
	else if(x==y&z==0){
		cout<<"Paranthesis Match "<<endl;
	}
	else
	cout<<"Paranthesis Mismatch"<<endl;
}

int main(){
	paren p;
	return 0;
}


