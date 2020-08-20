//good permutations
#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long int n,temp;
	vector<long long int> arr1,arr2;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0)arr1.push_back(i);
		else{arr2.push_back(i);}
	}
	if(n<=3&&n>1){
		cout<<"NO SOLUTION";
	}else{
	for(int i=0;i<arr1.size();i++){
		cout<<arr1[i]<<" ";
	}
	for(int i=0;i<arr2.size();i++){
		cout<<arr2[i]<<" ";
	}}
	return 0;
}