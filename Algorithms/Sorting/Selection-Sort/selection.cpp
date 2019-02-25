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
	int i,j,index;
	
	for(i=0;i<n-1;i++)
	{
		index = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[index])
			{
				index = j;
			}
		}
		Swap(&arr[index], &arr[j]);
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
