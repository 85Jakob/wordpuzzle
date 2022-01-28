//By Jacob Doney
//11.09.2022

#include "wordpuzzle.h"

int main(){

	int const WORDLEN = 5;
	char guessedWord[WORDLEN];
	char myword[WORDLEN];
	
	hiddenWord(myword);

	bool allCorrect = false;
	int i = 1;

	std::vector<char> badLetters;

	// Instructions
	printInstructions();

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
			if(guessedWord[k] == myword[k]){
				char correct = toupper(myword[k]);
				cout << correct;
			}
			else{
				bool match = false;
				// checks to see if there is a match
				for (int p = 0; p < WORDLEN; p++){
					if(guessedWord[k] == myword[p])
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
					if(std::find(badLetters.begin(), badLetters.end(), guessedWord[k]) == badLetters.end()){
						badLetters.push_back(guessedWord[k]);
					}
				}
			}
		}
		cout << endl;
		// Checks to see if arrays match
		allCorrect = areEqual(guessedWord, myword, WORDLEN);
		if( allCorrect == true){
            printWinner();
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


