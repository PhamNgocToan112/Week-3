#include<iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	
	char a[N];
	
	for(int i = 0; i < N; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < N; i++){
		for(int j = i + 1; j < N; j++){
			if(a[i] == a[j]){
				cout << "Yes";
				return 0;	
			}
		}
	}
	
	cout << "No";
	
	return 0;
}
