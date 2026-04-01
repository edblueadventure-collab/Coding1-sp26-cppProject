//Ethan Dingus Coding1 spring 2026
// Our First C++ Program
//to compile, open the developer command prompt for VS 2022
//Navigate to this folder with 'cd' for 'changed directory'
//use teh command 'cL/EHsc filename.cpp' (in this case, it's 'main.cpp')
//and then'filename' to run the .exe (in this case, it's 'main')

#include <iostream>    // in-out stream, for sending text out to the console
using namespace std;   // so we don't have to type "std::" all the time
//This is where our program starts running code




int main(){
       //Variables at the top is the best practice
       string playerName;   // vvariables names use camelCase
       //ask the player what their name is
       cout <<"what is your name, player?";

    //get input from the player using c in
    cin >> playerName;

    cout << "Hello " << playerName << "." << endl;

cout << "Hello World!" << endl; // C out for "Console out"
                                //End L for "end line"
    
    return 0 ;                  // the program finished succsesfully
}