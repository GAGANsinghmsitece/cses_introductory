//repetitons
#include<iostream>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	long long int count=1,maxcount=0;
	for(int i=1;i<str.size();i++){
		if(str[i]==str[i-1])
			count++;
		else{
			if(count>maxcount)
				maxcount=count;
			count=1;
		}
	}
	if(count>maxcount)
		maxcount=count;
	cout<<maxcount;
	return 0;
}