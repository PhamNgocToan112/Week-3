#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	int a[30];
	for (int i = 0;i < 30;i++) {a[i] = rand()%100 + 1; cout << a[i] << " ";}
	cout << endl;
	for (int i = 0;i < 29;i++)
	 for (int j = i + 1;j < 30;j++)
	  if (a[i] > a[j])
	   {
	   		int sw = a[i];
	   		a[i] = a[j];
	   		a[j] = sw;
	   }
	for (int i = 0;i < 30;i++) cout << a[i] << " ";
	return 0;
}
