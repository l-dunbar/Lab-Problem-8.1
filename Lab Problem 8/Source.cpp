#include<iostream> //Inserting all libraries that will be used
#include<cstdlib>
#include<iomanip>
#include<ctime>
#include<string>

using namespace std;
int countVowels(string str);
int main()
{
	string str;
	cout << "enter string:" << endl;
	getline(cin, str);
	int x = countVowels(str);
	cout << "number of vowels = " << x << endl;
	return 0;
}
int countVowels(string str)
{
	int vowelCount = 0;
	for (int i = 0; str[i] > i;i++)
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' 
			|| str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			vowelCount++;
	return vowelCount;
}