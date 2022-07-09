//Bubble sort, can be done by swapping
#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[],int n){
	int c=0,temp;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
			c+=1;
		}
	}

	if(c!=0){
		bubble(arr,n);
	}
	//return vt;
}
int main()
{
	int arr[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubble(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}