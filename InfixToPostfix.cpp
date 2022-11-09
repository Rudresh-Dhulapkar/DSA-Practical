#include<iostream>
#include<cstring>
using namespace std;

class Stack{
    private:
        int top, x;
        char arr[25], inf[25], pos[25];
        
    public:
        Stack();
        void push(char h);
        void pop();
        int isempty();
        void convert();
        void evaluate();
};

Stack::Stack(){
    top=-1;
    x=0;
    convert();
    evaluate();
}

void Stack::convert(){
    int s;
    cout<<"Enter the infix expression"<<endl;
    cin>>inf;
    s=strlen(inf);
    for(int i=0;i<s;i++){
        if(inf[i]=='('||(inf[i]=='+')||(inf[i]=='-')||(inf[i]=='*')||(inf[i]=='/')||(inf[i]=='%')||(inf[i]=='^')){
            push(inf[i]);
        }
        else if(inf[i]==')'){
            while(arr[top]!='('){
                pos[x]=arr[top];
                top++;
                pop();
            }
            if(arr[top]=='('){
                pop();
            }
        }
        else{
            pos[x]=inf[i];;
            x++;
        }
    }
    
    if(!isempty()){
        while(top>=0){
            pos[x]=arr[top];
            pop();
            x++;
        }
    }
    
    cout<<"The postfix expression is: "<<endl;
    for(int j=0; j<x;j++){
        cout<<pos[j];
    }
}

void Stack::evaluate(){
    int y, evl[25], z, a=0;
    char c;
    
    for(z=0;z<x;z++){
        c=pos[z];
        if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%'||c=='^'){
            switch(c){
                case'+':
                    y=evl[z-2]+evl[a-1];
                    break;
                
                case '-':
                y=evl[z-2]-evl[a-1];
                break;
                    
                case '*':
                y=evl[z-2]*evl[a-1];
                break;
                    
                case '/':
                y=evl[z-2]/evl[a-1];
                break;
                
                case '%':
                y=evl[z-2]%evl[a-1];
                break;
                
                case '^':
                y=1;
                for(int k=0;k<evl[a-1];k++){
                    y=a*evl[a-2];
                }
                break;
        }
                
            a=a-2;
            evl[a]=y;
            a++;
            }
            else{
                if(c=='0')
                    evl[a]=0;
            else if(c=='1')
                    evl[a]=1;
            else if(c=='2')
                    evl[a]=2;
            else if(c=='3')
                    evl[a]=3;
            else if(c=='4')
                    evl[a]=4;
            else if(c=='5')
                    evl[a]=5;
            else if(c=='6')
                    evl[a]=6;
            else if(c=='7')
                    evl[a]=7;
            else if(c=='8')
                    evl[a]=8;
            else if(c=='9')
                    evl[a]=9;
                    
            a++;
            }
            
            
        }
        
        cout<<"after Evaluation:  "<<endl<<evl[0]<<endl;
}

int Stack::isempty(){
    if(top<0)
    return 1;
    else
    return 0;
}

void Stack::push(char h){
    top++;
    arr[top]=h;
}

void Stack::pop(){
    top--;
}

int main(){
    Stack a;
    
    return 0;
}
