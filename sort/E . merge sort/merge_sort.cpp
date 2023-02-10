#include<iostream>
#include<cstdlib>
using namespace std;

void merge(int arr[], int start,int mid,int end)
{   int temp[end-start+1];
    int i=start,j= mid+1,k=0;
	while(i <= mid && j <= end)
	{ if(arr[i] <= arr[j])
      { temp[k]=arr[i];
        k++; i++;
      }
      else
      { temp[k]=arr[j];
        k++;j++;
      }
	}
	while(i <= mid)
	{ temp[k]=arr[i];
	  k++;i++;
    }
	while(j <= end)
	{ temp[k]=arr[j];
	  k++;j++;
    }
	for(i=start;i <= end;i++)
	  arr[i]=temp[i-start];
}

void mergeSort(int arr[], int start, int end)
{
    if(start < end)
    {	int mid=(start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}

void print(int arr[],int size)
{  cout<<"\n merge sorting algorithm: "<<endl;
   for(int i=0;i<size;i++)
     cout<<arr[i]<<" ";
}
main()
{   int size=100000;int arr[100000];
	for(int i=0;i<size;i++) arr[i] = rand()%1000;
	mergeSort(arr,0,size-1);
    print(arr,size);
}
