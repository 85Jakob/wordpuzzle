//By Jacob Doney
//Generates a random word

#include "hiddenword.h"

int randomNum(void)
{
    
    int num;
    srand(time(0));
 
    num = rand() %MAX;
 
    return num;
}


void hiddenWord(char *hword)
{
    int num = randomNum();
    char word[WORDCOUNT][WORDLEN] =
    {
	    {'h','e','l','l','o'}, //1
	    {'t','a','c','o','s'}, //2
	    {'r','o','y','a','l'}, //3
	    {'p','l','a','n','t'}, //4
	    {'t','o','w','e','r'}, //5
	    {'l','i','g','h','t'}, //6
	    {'p','h','o','n','e'}, //7
	    {'f','l','o','u','r'}, //8
	    {'f','i','r','s','t'}, //9
	    {'s','t','o','r','e'}, //10
	    {'s','t','a','r','t'}, //11
	    {'p','e','r','k','y'}, //12
	    {'v','i','d','e','o'}, //13
	    {'s','t','a','n','d'}, //14
	    {'f','r','o','s','t'}, //15
	    {'s','u','p','e','r'}, //16
	    {'p','o','u','n','d'}, //17
	    {'w','r','i','t','e'}, //18
	    {'b','r','a','v','o'}, //19
	    {'p','a','r','t','y'} //20
    };
	
    for(int i = 0; i < 5; i++){
        hword[i] = word[num][i];
    }
}
