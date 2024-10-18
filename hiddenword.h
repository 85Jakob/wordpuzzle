//By Jacob
//directives for hiddenword.cpp

#include <cstdlib>
#include <ctime>
#include <array>
#include <string>

class RandomWordGenerator {
private:
    static const int WORDCOUNT = 20;
    static const int WORDLEN = 5;
    std::array<std::array<char, WORDLEN>, WORDCOUNT> words = {{
            {'h','e','l','l','o'}, {'t','a','c','o','s'}, {'r','o','y','a','l'},
            {'p','l','a','n','t'}, {'t','o','w','e','r'}, {'l','i','g','h','t'},
            {'p','h','o','n','e'}, {'f','l','o','u','r'}, {'f','i','r','s','t'},
            {'s','t','o','r','e'}, {'s','t','a','r','t'}, {'p','e','r','k','y'},
            {'v','i','d','e','o'}, {'s','t','a','n','d'}, {'f','r','o','s','t'},
            {'s','u','p','e','r'}, {'p','o','u','n','d'}, {'w','r','i','t','e'},
            {'b','r','a','v','o'}, {'p','a','r','t','y'} }};

public:
    RandomWordGenerator(){};
    std::string getHiddenWord() {
        int num = rand() % WORDCOUNT;
        return std::string(words[num].begin(), words[num].end());
    }
};
