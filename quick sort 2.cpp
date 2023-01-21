#include<iostream>
using namespace std;

int partition(int arr[], int lb, int ub)
{
	
	int povit= arr[lb];
	int start =lb;
	int end=ub;
	while(start< end)
	{
		while(arr[start]<=povit)
            start++;
	}
	while(arr[end]>povit)
	{
		end--;
	}
	if (start<end)
	{
		swap (arr[start],arr[end]);
	}

swap(arr[lb],arr[ub]);
return end;
}
void  quicksort(int arr[], int lb, int ub)
{
	int loc;
 loc= partition(  arr, lb,ub);
	quicksort(arr, lb, loc-1);
	quicksort(arr, loc+1, ub);
	
}
int main()
{
	int arr[5]={5, 34, 2, 8 , 11};
	
	quicksort( arr  ,  2,  11);
	for(int i=0; i<5; i++)
	{
		cout<<"array after sorting"<<arr[i]<<' ';
	}
}