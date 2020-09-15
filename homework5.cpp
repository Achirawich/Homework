#include <iostream>
#include <string>
using namespace std;
int main ()
{
	char str[40];
	int lenstr;
	
	cout <<"Input String\t: ";
	cin  >>str;
	lenstr = strlen(str);

	cout <<"Reverse String\t: ";
	for (int i = lenstr-1 ; i >= 0 ; i--){
		cout << (char)toupper(str[i]);
	}
	cout << endl;

	system("pause");
	return 0;
	//Achirawich Sanjaikla 636021621065 sce B
}