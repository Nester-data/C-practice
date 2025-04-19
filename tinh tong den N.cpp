#include<bits/stdc++.h>
using namespace std;

int tong(int n){
	int sum; 
	for(int i=1;i<=n;i++){
		 sum+=i; 
	} 
	return sum; 
} 

int main(){
	int n;
	cin>>n;
	int S=tong(n);
	cout<<S; 
	if(S%2==0){
		cout<<"yes"; 
	} else{
		cout<<"no"; 
	} 
	
} 
