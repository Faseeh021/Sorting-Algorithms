#include<iostream>
using namespace std;
void insertion(int arr[], int size)
{
	int i,j,temp;
	for(i=1; i<size; i++)
	{
	temp = arr[i];

      j=i-1;

	
	while(temp < arr[j] && j>=0)
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=temp;
}
	
}
int main()
{
	int arr[5]={4, 5, 1 , 6 , 8};
	insertion(arr , 5);
	for(int i=0; i<5; i++)
	{
		cout<<arr[i];
	}
}