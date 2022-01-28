//By Jacob Doney
//Generates a random word

#include "hiddenword.h"

int randomNum(void)
{
    
    int max = 11;
    int num;
    srand(time(0));
 
    num = rand() %max;
 
    return num;
}


void hiddenWord(char *hword)
{
    int num = randomNum();
    char word[10][5] =
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
	{'s','t','o','r','e'} //10
    };
	
    for(int i = 0; i < 5; i++){
        hword[i] = word[num][i];
    }
}
