#include <iostream>
#include <cstdlib>
#include <ctime>

void guessing(int num, int guess,int tries){
     std::cout<<"guess the random number : ";

    do{std::cin>>guess;
       tries++;
       if(guess<num){std::cout<<"too low, guess again : ";}
       else if(guess>num){std::cout<<"too high, guess again : ";}
       else{std::cout<<"YOU WIN!!!!!!!, the number was "<<num<<"\nyou got it in "<<tries<<" tries\n";}
    }
    while(guess!=num);
}

int main() { int num; int guess; int tries=0;
    
    srand(time(NULL));
     num=(rand()%100)+1;

    std::cout<<"******WELCOME TO THE NUMBER GUESSING GAME******\n";
    

    int answer;

    do{
        guessing(num,guess,tries);
        std::cout<<"wanna play again? enter 1, if you wanna exit enter 2 : ";
        std::cin>>answer;

    }
    while(answer==1);
    std::cout<<"******alright, see you later******";

    return 0;}