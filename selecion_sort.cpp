//selection sort is same as bubble but swap takesplace with minimum value
#include<bits/stdc++.h>
using namespace std;
void selection(int arr[],int n){
	int min_ind;
	for(int i=0;i<n;i++){
		min_ind=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_ind]){
				min_ind=j;
			}
		}
		swap(arr[min_ind],arr[i]);
	}
}
int main(){
	int arr[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selection(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}