//increasing array
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long int prev,current,temp=0,turn=0;
	vector<long long int>arr;
	for(int i=0;i<n;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	for(int i=1;i<arr.size();i++){
		if(arr[i]<arr[i-1]){
			turn+=arr[i-1]-arr[i];
			arr[i]=arr[i-1];
		}
	}
	cout<<turn;
	return 0;
}