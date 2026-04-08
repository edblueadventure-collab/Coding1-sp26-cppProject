//Ethan Dingus Coding 1 spring 2026
// Using VS codium and its intergrated terminal
// to learn about variables and logic

//compile in the Developer Command Prompt with..
//"cl /EHsc main.cpp"


#include <iostream>
using namespace std;

int main(){
    //'\n' or 'backslah n'makes a new line
    cout << "All about variable and logic!\n";

    //declaring a variable means it exists!
    //Defining a variable means giving it a value
    int playerage = -1;             //integers are whole numbers
    string playername = "Sally";    //strings are words/letters
    float playerheight = 1.8f;      //height in meters
    bool playagain = true;           //booleans are true or false

    //on if statement is a branch in unreal engine
    //if(test is true) do this thing otherwise... skip it!
    if(playerage == -1){
        cout << "How old are you?\n";
        cin >> playerage;

        if(playerage < 13){
            cout <<"I'm sorry, this game si to grown up for you.\n";
        
        }
        else{
            cout << "Wow! that's old!\n";
        }
    }
    //Can you test to see if the player name is sally and if it is
    // ask the player what their names, and assgin their response
    //to playername
    if(playername == "sally") {
        cout << "is you name sally?\n(yes/no)";
        string input;
        cin >> input;
            
            if(input == "yes") {
                cout << "Well, that's convienent.\n";
            }
            else {
                cout << "What is your name?\n";
                cin >> playername;
            }
            cout << "Hello" << playername << ".\n";

    } //End of if(playername)

    bool godMode = false;
    //if their name and age matches the programmer of this program
    //unlock god mode
    if(playerage == 24 && playername == "Ethan") {
        cout << "Hello Sir Dingus, GOD Mode has been activated.\n";
        godMode = true;
    }
    if(playagain) {
        cout << "lets paly a game.\n";
        
        //next calss we'll build a guess number game.
    }
    return 0;

}