#include<iostream>
#define MAX 10
using namespace std;
template<class T>
class SelectionSort
{
	T arr[MAX],temp;
	int n;
	public: SelectionSort()
			{
				insert();
				display();
			}
			void swap(T *a,T *b){ 
			temp=*a;
			*a=*b;
			*b=temp;}
			void insert();
			void sort();
			void display();
};
template<class T> void SelectionSort<T>::insert()
{
	cout<<"Enter the number of terms"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<=n-1;i++)
	cin>>arr[i];
	cout<<"Before sorting"<<endl;
	for(int i=0;i<=n-1;i++)
	cout<<arr[i]<<"	";
	sort();
}
template<class T> void SelectionSort<T>::sort()
{
	int ch,var;
	for(int i=0;i<=n-1;i++)
	{
		var=i;
		for(int j=i+1;j<=n-1;j++)
		{
				if(arr[j]<arr[var])
				var=j; 
		}
		swap(&arr[i],&arr[var]);
	}
}
template<class T> void SelectionSort<T>::display()
{
	cout<<"After sorting:"<<endl;
	for(int i=0;i<=n-1;i++)
	cout<<arr[i]<<"	";
}
int main()
{
	int ch;
	cout<<"Enter 1: Sorting"<<endl;
	cin>>ch;
	if(ch==1){
		SelectionSort<float> a;
	}
	else
	cout<<"INVALID INPUT";
	return 0;
}
