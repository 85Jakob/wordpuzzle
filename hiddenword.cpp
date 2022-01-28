#include<iostream>
#include<ctime>
 
int main(void)
{
    // This program will create different sequence of
    // random numbers on every program run
 
    // Use current time as seed for random generator
    
    int max = 100;
    srand(time(0));
 
    std::cout << rand() %max << std::endl;
 
    return 0;
}
