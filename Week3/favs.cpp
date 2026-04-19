// Ethan Dingus
// lets create a list of favorites

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> playerGames;
string game;


int main() {
    while(true) {
        //at the start of the code give player a choice..
        cout << "What would you like to do?\n";
        //.. and give them options to chose from edit, add, remove, show, and quit
        cout << "You have 5 options, \nadd\nedit\nremove\nshow\nquit\n";

        //get the player input
        string input;
        getline(cin, input);
        //create the quit function the player can end the loop
        if(input == "quit") {
            cout << "Thanks for playing.\n";
            //and create a break
            break;
        }//end of quit
        //player input to start the function add
        else if(input == "add") {
            
            //get players input to add games to the list
            cout << "Add a game to the list: \n";

            //use a getline to get that input
            getline(cin, game);

            //use push_back so we save the code
            playerGames.push_back(game);    
   
        }//end of add
        //create an else if input to start the edit function for the code
        else if(input == "edit") {
            // create new variable for this function a game that is on the list 
            // and a new variable to replace the old one
            string oldGame, newGame;

            //get player input
            cout << "Which game do you want to edit: ";
            getline(cin, oldGame);

            //then use an iterator to find and point to a game on the list.
            auto iter = find(playerGames.begin(), playerGames.end(), oldGame);

            //with the iter function point to the game then..
            if(iter != playerGames.end()) {

                //get player input then..
                cout << "Provide a new game title: ";
                getline(cin, newGame);
                //then use the iter to replace the game
                *iter = newGame;

            }
            //create an else statment, in case input does not match with the list 
            else {
                cout << "The game is not found.\n";
            }
        }//end of edit

        //create an else if so the player can remove something from the list
        else if(input == "remove") {
            //get player input
            cout << "Which game would you like to remove: ";
            getline(cin, game);

            //using iter to find the game within the list
            auto iter = find(playerGames.begin(), playerGames.end(), game);
            if(iter != playerGames.end()){

                //then erase that game
                playerGames.erase(iter);
                
                cout << "Game has been removed.\n";

            }
            else {
                //use an else statement if the game could not be found
                cout << "Game can't be found.\n";
            }

            
        }
        //using else if statement to create the show function
        else if(input == "show") {
            //then create code to sort the games the player added
            cout << "Here is the list you made!\n";
            sort(playerGames.begin(), playerGames.end());

            for(vector<string>:: iterator iter = playerGames.begin(); iter != playerGames.end(); iter++) {
                cout << *iter << endl;
            }
       }//end of show

        
        else {
            cout << "I don't recognize that input.\n";
        }
    }//end of while(true)
}//end of main
