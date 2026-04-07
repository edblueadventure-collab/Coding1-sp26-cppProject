//Ethan Dingus
//Always, Loops, and Vectors
//Algorithms

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));


    cout << "Lets learn about arrays!\n";
    //arrays in C++ have a defined size
    //arrays don't have a way to count how many things are in them.
    cout <<"Creating a array of high scores.\n";

    //Declaring a new integer array with a size of 5
    int highScores [5];

    highScores [0] = 4650;      // the first high score is at index 0
    highScores [1] = 2225;
    highScores [4] = 43;        // the last high score is at the index 4

    cout <<"The first score is " << highScores[0] << "\n";

    cout << "Here are all of the scores the high scores:\n";

    int index = 0; 
    while(index < 5){
        cout << highScores [index] << "\n";
        index++;
    }
    cout <<"Lets learn about for loops to show the scores again.\n";
    
    //for (initialiazation; test; action)
    //for (create the cariable; how lond do we loop for; how are we counting)
    for(int i = 0; i < 5; i++){
        cout << i << ". " << highScores[i] << "\n";
    }

    // lets create a list of names and the user choose the name
    // we'll create the string array
    string names[10];
    // we'll creathe the input string variable
    string input;
    index = 0;
    // we'll start a while loop (or a do while)
    while(index < 10){

    
    //ask the player for a name (or to type 'done')
    cout << " what name would you like to add, or type 'done' to stop.\n";
    cin >> input;

    if(input == "done"){
        cout << "We are done enter names.\n";
        break;
    }
    //check to see if the array is full
    names[index++] = input;
        //is so, break out of the loop
    }
    cout <<"Here are your names:\n";
    for(int i = 0; i < 10; i++){
        if (names[i] == ""){
            continue;
        }
        cout << i + 1 << names[i] << "\n";
    }

    // Pick a random name and save
    
    string name = names[rand() %  index];

    cout <<"let's talk about " << name << ".\n";

    //use a switch statement to pick one random response

    switch(rand() % 4) {
        case 0:
            cout << "I love " << name << ".\n";
            break;
        case 1:
            cout << "I like " << name << ".\n";
            break;
        case 2:
            cout << "I don't like " << name << ".\n";
            break;
        case 3:
            cout << "I despise " << name << ".\n";
            break;    
            

    }

    return 0;
}