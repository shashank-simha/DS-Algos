#include <iostream>

using namespace std;

void Swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Sort(int *arr, int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			Swap(&arr[j], &arr[j+1]);
		}
	}
}

int main()
{
	int n,i;
	cout<<endl<<"Enter the number of elements to be sorted: ";
	cin>>n;
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
	
	Sort(arr, n);
	
	cout<<endl<<"Sorted element : ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
