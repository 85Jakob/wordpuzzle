//By Jacob Doney
//Prints info for wordpuzzle

#include "wordPuzzlePrinter.h"

void printInstructions(){
    std::cout << "Try to guess a five letter word.\n";
    std::cout << "A green letter means the letter is in the word and in the correct spot.\n";
    std::cout << "A yellow letter means the letter is in the word but in the wrong spot.\n";
}

void printWinner(){
    std::cout << " __     ______  _    _  __          _______ _   _   _\n";
	std::cout << " \\ \\   / / __ \\| |  | | \\ \\        / /_   _| \\ | | | |\n";
	std::cout << "  \\ \\_/ / |  | | |  | |  \\ \\  /\\  / /  | | |  \\| | | |\n";
	std::cout << "   \\   /| |  | | |  | |   \\ \\/  \\/ /   | | | . ` | | |\n";
	std::cout << "    | | | |__| | |__| |    \\  /\\  /   _| |_| |\\  | |_|\n";
	std::cout << "    |_|  \\____/ \\____/      \\/  \\/   |_____|_| \\_| (_)\n\n\n";
    
}

