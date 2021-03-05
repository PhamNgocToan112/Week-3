#include<iostream>
using namespace std;
int main()
{	
	int n;
	cin >> n;
	int a[20];
	int sum = 0;
	
	for(int i = 1; i <= n; i++){
		cin >> a[i] ;
		sum += a[i];
	}
	
	double TB = (double)sum/n ;
	cout << "gia tri TB " << TB << endl;
	
	double phuongsai = 0;
	for(int i = 1 ; i <= n; i++){
		phuongsai += (a[i] - TB )*(a[i] - TB)/ (n - 1);
	}
	
	cout << "phuong sai:" << phuongsai;

	
	
	
	return 0;
}
