#include <iostream>
using namespace std;
void bubble(int arr[],int size)
{
	for(int i = 0;i < 5;i++)
	{
		for(int j=0;j < 4;j++)
		if(arr[j] > arr[j+1])
		{
			swap(arr[j],arr[j+1]);
		}
	}
	
}

int main()
{
	int arr[5] ={1,6,4,8,2};
	bubble(arr,5);
	for(int i = 0; i<5; i++)
	{
		cout << arr[i] << endl;
	}
}