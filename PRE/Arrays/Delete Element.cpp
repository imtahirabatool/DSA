//Delete an element from array
//Deletion Operation
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int size,pos;
	cout<<"Enter size of array:";
	cin>>size;
	vector<int> arr(size);
	cout<<"Enter elements:"<<endl;
	for(int i=0;i<size;i++){
		cout<<i+1<<" element:";
		cin>>arr[i];
	}
	cout<<"----------Output---------"<<endl;
		for(int i=0;i<size;i++){
		cout<<arr[i]<<"  "<<endl;
	}
	cout<<"Enter the position from where you want to delete data:";
	cin>>pos;
	if(pos>size || pos<=0){
		cout<<"Invalid Output!";
	}
	else{
		for(int i=0;i<size-1;i++){		//for deleting from the beginning
		for(int i=pos-1;i<size-1;i++){
			arr[i]=arr[i+1];
		}}
		size--;              //coz size has been decremented by one now
		cout<<"----------Updated Array---------"<<endl;
			for(int i=0;i<size;i++){
		cout<<arr[i]<<"  "<<endl;
		}
	}
	return 0;
}
