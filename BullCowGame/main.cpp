#include <iostream>
#include <string>

using namespace std;

int main()
{
	// introduce the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter word I'm thinking of?\n\n";
	 
	// get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	cin >> Guess;

	cout << "your guess was: " << Guess << endl;



	cout << endl;
	return 0;
}
