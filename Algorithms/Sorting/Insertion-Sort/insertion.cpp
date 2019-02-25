#include<iostream>
#include<math.h>

using namespace std;

void Sort(int *arr, int n)
{
	int i,j,key;
	
	for(i=1;i<n;i++)
	{
		key = arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
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
