#include <iostream>
#include <time.h>
using namespace std;

int Guess(int);

int main() {

int num,Round;
srand(time(NULL));
num = rand()%10+1;

cout << "###Welcome to guessing number game###" <<endl;
cout << "Secret number has been chosen"<< endl;


Round = Guess(num);

cout << "Congratulation!!!" <<endl;
cout << "The secret number is "<< num <<endl;
cout << "You made "<< Round << " guesses" <<endl;

system("pause");
return 0;
}

int Guess(int num) {
	int input, Round = 0;

	do {
		cout << "Guess the number (1 to 10): ";
		cin  >> input;

		if (input < num) cout << "The secret number is lover" <<endl;
		else if (input > num) cout << "The secret number is hight" <<endl;

		Round++ ;

	} while (input != num);


	return Round;
	//Achirawich Sanjaikla 6306021621065 Sec B
}