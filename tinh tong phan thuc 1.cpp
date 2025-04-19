#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

int main(){
	int N;
	double S=0.0; 
	cin>>N; 
	for(int i=1;i<=N;i++){
		S+=1.0/i; 
	}
	cout << fixed << setprecision(4) << S << endl; 
	
	return 0; 
} 
