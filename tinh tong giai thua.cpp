#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

int main(){
	int N;
	long long S=0.0; 
	long long gt=1; 
	cin>>N; 
	for(int i=1;i<=N;i++){
		gt*=i; 
		S+=gt; 
	}
	cout << S << endl; 
	
	return 0; 
} 
