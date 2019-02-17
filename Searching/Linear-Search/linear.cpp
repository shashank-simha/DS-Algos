#include <iostream> 

using namespace std; 
  
int Search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
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

    int result = Search(arr, n, e); 
   
    if (result == -1) 
    {
        cout<<"Element not found"<<endl;    
    }

    else
    {
        cout<<"Element found at the index "<<result<<endl;
    }
    
   return 0; 
} 