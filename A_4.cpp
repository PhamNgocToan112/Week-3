#include <iostream>
using namespace std;
int main()
{
	string s = "abc";
	cout << s[-1] << " " << s[2] << " " << s[3] << endl;
	s[3] = 'a';
	cout << s;
	return 0;
}
