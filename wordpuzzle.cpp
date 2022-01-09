//By Jacob Doney
//11.09.2022

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Checks to see if two arrays are equal
bool areEqual(char arr1[], char arr2[], int size){
	for(int i=0; i < size; i++){
		if(arr1[i] != arr2[i])
			return false;
	}
	return true;
}


int main(){

	int const WORDLEN = 5;
	char guessedWord[WORDLEN];
	char hiddenWord[WORDLEN] = {'b', 'e', 'a', 'n', 's'};
	bool allCorrect = false;
	int i = 1;
	vector<char> badLetters;

	// Instructions
	cout << "Try to guess a five letter word." << endl;
	cout << "An uppercase letter means the letter is in the word and in the correct spot." << endl;
	cout << "A lowercase letter means the letter is in the word but in the wrong spot." << endl;
	cout << "Good luck!" << endl << endl;

	while( allCorrect == false ){
		cout << "Guess " << i <<": _____\b\b\b\b\b";
		// Takes users input.
		for (int j = 0; j < WORDLEN; j++){
            char tempChar;
			cin >> tempChar;
			guessedWord[j] = tolower(tempChar);
			}
        //
		for (int k = 0; k < WORDLEN; k++){
            // checks for match in same spot
			if(guessedWord[k] == hiddenWord[k]){
				char correct = toupper(hiddenWord[k]);
				cout << correct;
			}
			else{
				bool match = false;
				// checks to see if there is a match
				for (int p = 0; p < WORDLEN; p++){
					if(guessedWord[k] == hiddenWord[p])
						match = true;
				}
				// if match returns lowercase letter
				if( match ){
					cout << guessedWord[k];
				}
				else{
					cout << "_";
					// Will add incorrect letters to vector. Check to see if letter is already in vector
					// and does not add if found.
					if(find(badLetters.begin(), badLetters.end(), guessedWord[k]) == badLetters.end()){
						badLetters.push_back(guessedWord[k]);
					}
				}
			}
		}
		cout << endl;
		// Checks to see if arrays match
		allCorrect = areEqual(guessedWord, hiddenWord, WORDLEN);
		if( allCorrect == true){
			cout << " __     ______  _    _  __          _______ _   _   _" << endl;
			cout << " \\ \\   / / __ \\| |  | | \\ \\        / /_   _| \\ | | | |" << endl;
			cout << "  \\ \\_/ / |  | | |  | |  \\ \\  /\\  / /  | | |  \\| | | |" << endl;
			cout << "   \\   /| |  | | |  | |   \\ \\/  \\/ /   | | | . ` | | |" << endl;
			cout << "    | | | |__| | |__| |    \\  /\\  /   _| |_| |\\  | |_|" << endl;
			cout << "    |_|  \\____/ \\____/      \\/  \\/   |_____|_| \\_| (_)" << endl << endl << endl;
		}
		// If not a match display list of letters not in array
		else{
			cout << "Not in word: ";
                 	for(auto x = badLetters.begin(); x != badLetters.end(); ++x)
                        cout << *x << " ";
                 	cout << endl;
                 	i++;
		}
	}
	return 0;
}


