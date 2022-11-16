#include<iostream>
#include<cstring>
using namespace std;
#define MAX 50

class stack{
	private:
		char arr[MAX], exp[MAX], pre[MAX];
		int top, t;
		
	public:
		stack();
		void push( char x);
		void pop();
		void convert();
		void evaluate();
		int isempty();
};

stack::stack(){
	top=-1;		//keeps track of top of stack
	t=0;
	convert();
	evaluate();
}

void stack::convert(){
	int n, t1=0;
	char test[MAX];
	cout<<"Enter the Expression:"<<endl;
	cin>>exp;
	n=strlen(exp);
	for(int i=n-1;i>=0;i--){
		if((exp[i]==')')||(exp[i]=='+')||(exp[i]=='-')||(exp[i]=='*')||(exp[i]=='/')||(exp[i]=='%')||(exp[i]=='^')){	
			push(exp[i]);
		}
		else if(exp[i]=='('){																						
			while(arr[top]!=')'){			
				test[t1]=arr[top];
				t1++;
				pop();
			}
			if(arr[top]==')')
			pop();
		}
		else{
			test[t1]=exp[i];
			t1++;
		}
	}
	
	if(!isempty()){
		while(top>=0){
			test[t1]=arr[top];
			pop();
			t++;
		}
	}
	t=t1;
	cout<<"The posfix expresion is: "<<endl;
	for(int j=0;j<t;j++){
		pre[j]=test[t1-1];
		cout<<pre[j];
		t1--;
	}
}

void stack::evaluate(){
	int i, ans, eval[MAX], j=0;
	char ch;
	for(i=t-1;i>=0;i--){
		ch=pre[i];
		if((ch=='+')||(ch=='-')||(ch=='*')||(ch=='/')||(ch=='%')||(ch=='^')){
			switch(ch){
				case'+':
					ans=eval[j-1]+eval[j-2];
					break;
				case'-':
					ans=eval[j-1]-eval[j-2];
					break;	
				case'*':
					ans=eval[j-1]*eval[j-2];
					break;
				case'/':
					ans=eval[j-1]/eval[j-2];
					break;
				case'%':
					ans=eval[j-1]%eval[j-2];
					break;
				case'^':
					ans=1;
					for(int k=0;k<eval[j-2];k++){
						ans=ans*eval[j-1];
					}
					break;
			}
			j=j-2;
			eval[j]=ans;
			j++;
		}
		else{
			if(ch=='0'){
				eval[j]=0;
			}
			else if(ch=='1'){
				eval[j]=1;
			}
			else if(ch=='2'){
				eval[j]=2;
			}
			else if(ch=='3'){
				eval[j]=3;
			}
			else if(ch=='4'){
				eval[j]=4;
			}
			else if(ch=='5'){
				eval[j]=5;
			}
			else if(ch=='6'){
				eval[j]=6;
			}
			else if(ch=='7'){
				eval[j]=7;
			}
			else if(ch=='8'){
				eval[j]=8;
			}
			else if(ch=='9'){
				eval[j]=9;
			}
			j++;
		}
	}
	
	cout<<endl<<"The answer of the expression is:"<<eval[0]<<endl;
}

int stack::isempty(){
	if(top<0)
		return 1;
	else
		return 0;
}

void stack::push(char x){
	top++;
	arr[top]=x;
}

void stack::pop(){
	top--;
}

int main(){
	stack s;
	return 0;
}
