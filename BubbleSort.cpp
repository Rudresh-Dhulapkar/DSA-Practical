#include<iostream>
#define MAX 10
using namespace std;
template<class T>
class BubbleSort
{
	T arr[MAX],temp;
	int n;
	public: BubbleSort()
			{
				insert();
				display();
			}
			void swap(T *a,T *b){ 
			temp=*a;
			*a=*b;
			*b=temp;
			}
			void insert();
			void sort();
			void display();
};
template<class T> void BubbleSort<T>::insert()
{
	cout<<"Enter the number of terms"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<=n-1;i++)
	cin>>arr[i];
	cout<<"Before sorting"<<endl;
	for(int i=0;i<=n-1;i++)
	cout<<arr[i]<<" ";
	sort();
}
template<class T>void BubbleSort<T>::sort()
{
	int ch;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>=arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
template<class T>void BubbleSort<T>::display()
{
	cout<<endl<<"After sorting:"<<endl;
	for(int i=0;i<=n-1;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int ch;
	cout<<"Enter 1: Sorting"<<endl;
	cin>>ch;
	if(ch==1){
		BubbleSort<int> a;
	}

	else{
		cout<<"INVALID INPUT"<<endl;
	}
	return 0;
}
			
