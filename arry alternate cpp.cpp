#include <iostream>
using namespace std;
void reverse(int arr[],int n){
	int start=0;
	int end=1;
	while((start<n-1)&(end<=n-1)){
		swap(arr[start],arr[end]);
	start+=2;
	end+=2;
	}}
/*for(int i=0;i<n;i++){
	int arr[i];
	for(int m=(i+1); m<n ; m++){
		if(arr[i]==arr[m]){
		cout<<"duplicate is present"<<endl;}
		else {
		cout<<"not present"<<endl;
		}}
	}
}
	}*/
void printingArry(int arr[],int n) {

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
//	arr[0]=9;
}
}


int main(){
	int arr[5]={1,2,3,4,5,};
	reverse(arr,5);
//	cout<<reverse(arr,6)<<endl;
	printingArry (arr,5);
		//arr[0]=9;
	return 0;
}
