#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void winnerCheck(string input , string cpu){
    if((input == "Rock" && cpu == "Scissor" ) || (input == "Scissor" && cpu == "Paper" || (input == "Paper" && cpu == "Rock"))){
        cout<< "\nYou have won";
    }
    else if(input == cpu){
    cout<<"\nThe result is Draw ;)";
    }
    else {
        cout<<"\nCPU won";
    }
}


int main()
{
  srand(time(0));
  string userInput;
  cin>>userInput;
  string choices[3] = {"Rock" , "Paper" , "Scissor" } ;
  int random = rand()%3;
  string cpuInput = choices[random];
  cout<<cpuInput;
  winnerCheck(userInput,cpuInput);
    
return 0;
}