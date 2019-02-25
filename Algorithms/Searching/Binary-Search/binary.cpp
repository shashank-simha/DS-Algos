#include <iostream> 

using namespace std; 
  
int Search(int arr[], int first, int last, int x) 
{ 
    if (last >= first) 
    { 
        int mid = first + (last - first) / 2; 
  
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return Search(arr, first, mid - 1, x); 
  
        return Search(arr, mid + 1, last, x); 
    } 
    return -1; 
} 

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

int main(void) 
{ 
    int n,e,i;
	
    cout<<endl<<"Enter the number of elements in the list: ";
	cin>>n;
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}

    cout<<endl<<"Enter the number to be searched: ";
	cin>>e;

    Sort(arr, n);

    int result = Search(arr, 0, n-1, e); 
   
    if (result == -1) 
    {
        cout<<"Element not found"<<endl;    
    }

    else
    {
        cout<<"Element found at the index "<<result<<" (after sorting)"<<endl;
    }
    
   return 0; 
} 