#include<iostream>

using namespace std;

int main(){
	int N,t;
	long long S; 
	cin>>t; 
	while(t--){
	cin >> N;
	S=((long long)N*(N+1))/2; 
	cout << S << endl;
	}
	return 0; 
} 
