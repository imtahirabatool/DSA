//Arrays and Pointers

#include<iostream>
using namespace std;
int main(){
	int size=4;
	int arr[size]={1,2,3,4};
	int *p=arr;
	cout<<"----------Address of elements of array:----------"<<endl;
	for(int i=0;i<size;i++){
		cout<<"Element "<<i+1<<" address:"<<p<<endl;
	}
	return 0;
}
