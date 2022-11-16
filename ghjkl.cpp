#include<iostream>
using namespace std;

class sort{
private:
int j,i,n;
public:
void sor(int a[]);
void swap(int a,int b);
void print(int a[]);
};

void sort::sor(int a[])
{
	for(j=0;j<10;j++)
{
	if(a[j]>a[j+1]){
	swap (a[j],a[j+1]);
	print(a);}
}}
void sort::swap(int a,int b)
{
	n=a;
	a=b;
	b=n;
	}
void sort::print(int a[])
{
for(j=0;j<10;j++)
{
cout<<a[j]<<" ";}
cout<<endl;
	
}

int main()
{
int a[10]={9,3,5,6,1,7,2,0,8,4},b,c;
sort bubble;
bubble.sor(a);
return 0;
}
