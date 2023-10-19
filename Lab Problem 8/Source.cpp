#include<iostream> //Inserting all libraries that will be used
#include<cstdlib>
#include<iomanip>
#include<ctime>
#include<string>

using namespace std;
int countCharacter(string str);
int main()
{
	string str;
	cout << "enter string:" << endl;
	getline(cin, str);
	int x = countCharacter(str);
	cout << "number of characters = " << x << endl;
	return 0;
}
int countCharacter(string str)
{
	int b = str.length();
	return b;
}