  
#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for (int i = 0;i < s.length()/2;i++)
	 if (s[i] != s[s.length() - i - 1]) 
	  {
	  	cout << "no";
	  	return 1;
	  }
	cout << "yes";
	return 0;
}
