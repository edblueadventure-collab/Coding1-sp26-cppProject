//Ethan Dingus coding 1 spring 2026
//Switch, random #, and while loops
//Your task.... create the rest of the code to say "Random Numbers!"
//Then run your code


#include <iostream>
#include <random>     //for random number
#include <ctime>    //for seeding the random numbers
using namespace std;

int main(){
    srand(time(0));      //seed the random number generator with the current time.
    cout << "Random Numbers\n";
    cout <<"Our first random number is " << rand() << ".\n";


    int counter = 0; 
    while(counter++ < 10){
        cout << (rand() % 10) + 1 << endl;
    }
   
        //guess the number game
        //the computer picks a random number between 1/10 (inclusive)
        int theNumber = (rand() % 10) + 1;
        //the computer ask the player to get the number
        int guess = -1;
     do{    
        // the payer guessess
        cin >> guess;
        //the computer evalulates whether the guess is..
        if(theNumber == guess){
            cout << "you guessed it\n";
            return 0;
        }

        //Too high
        else if(guess > theNumber){
            cout << "that guess is to high!\n";
        }
        //Too low
        else if(guess < theNumber){
            cout << "that guess is to low!\n";
        }
        // let the player guess again if the guess was to low
        
        


        

        return 0;

    } while(guess != theNumber)
}