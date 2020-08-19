//wrong answer
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	long long int sum=0,sum1=0,temp;
	cin>>n;
	long long int arr[n-1];
	for(int i=1;i<n;i++){
		cin>>temp;
		sum1+=temp;
		sum+=i;
	}
	sum+=n;
	cout<<sum-sum1;
	return 0;
}