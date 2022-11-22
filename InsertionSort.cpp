#include<iostream>
#define MAX 10
using namespace std;
template<class T>
class InsertionSort
{
	T arr[MAX];
	T temp;	//for exchaning the terms in the arrya
	int n;	//The number of terms in the array
	public: InsertionSort()
			{
				insert();
				display();
			}
			void insert();
			void sort();
			void display();
};
template<class T> void InsertionSort<T>::insert()
{
	cout<<"Enter the number of terms"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<=n-1;i++)
	cin>>arr[i];
	cout<<"Before sorting"<<endl;
	for(int i=0;i<=n-1;i++)
	cout<<arr[i]<<"	"<<endl;
	sort();		//call the sort function to sort the items
}
template<class T> void InsertionSort<T>::sort()
{
	int i,j,k;
	for(i=1;i<=n-1;i++)
	{
		k=arr[i];
		j=i-1;
			while(j>=0 &&(k<arr[j]))
			{
				arr[j+1]=arr[j];
				j--;
			}
		
		arr[j+1]=k;
	}
	if(n==0)
	cout<<"Entered wrong choice"<<endl;
}
template<class T> void InsertionSort<T>::display()
{
	cout<<"After sorting:"<<endl;
	for(int i=0;i<=n-1;i++)
	cout<<arr[i]<<"\t";
}
int main()
{
	int ch;	//choosing the option
	cout<<"Enter 1: Sorting"<<endl;
	cin>>ch;
	if(ch==1){
	InsertionSort<float> a;
}
	else {
		cout<<"INVALID INPUT"<<endl;
	}
	return 0;
}
			

