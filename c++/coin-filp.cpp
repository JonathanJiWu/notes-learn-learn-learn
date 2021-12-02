#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int giveZeroOrOne() {
	srand(time(NULL));
	return rand() % 2;
}

void loopOfGuess() {
	for (int i = 0; i < 10; i++) {
		cout << "toss, y or n"<< endl;
		char input;
		cin >> input;
		if (input == 'y') {
			cout << giveZeroOrOne<< endl;
		}
	}
}

int main() {
	loopOfGuess();


}