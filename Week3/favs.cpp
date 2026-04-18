// Ethan Dingus
// lets create a list of favorites

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> playerGames;

int main() {
    while(true) {
        cout << "What would you like to do?\n";
        cout << "You have 5 options, \nadd\nedit\nremove\nshow\nquit\n";

        string input;
        getline(cin, input);

        if(input == "quit") {
            cout << "Thanks for playing.\n";
            break;
        }//end of quit

        else if(input == "add") {

            while(playerGames.size() < 5) {
                cout << "Add 5 of your favorite games to the list.\n";
                getline(cin, input);

                playerGames.push_back(input);

                
            }
            
        }//end of add
        else if(input == "edit") {
            string oldGame, newGame;

            cout << "Which game do you want to edit: ";
            cin >> oldGame;

            auto iter = find(playerGames.begin(), playerGames.end(), oldGame);

            if(iter != playerGames.end()) {
                cout << "Provide a new game title: ";
                cin >> newGame;
                *iter = newGame;

            } else {
                cout << "The game is not found.\n";
            }
        }//end of edit

        else if(input == "remove") {
            cout << "Which game would you like to remove: ";
            string game;
            getline(cin, game);

            auto iter = find(playerGames.begin(), playerGames.end(), game);
            if(iter != playerGames.end()){

                playerGames.erase(iter);
                
                cout << "Game has been removed.\n";

            }
            else {
                "Game can't be found.\n";
            }

            
        }


        

        else if(input == "show") {
            cout << "Here is the list you made!\n";

            for(vector<string>:: iterator iter = playerGames.begin(); iter != playerGames.end(); iter++) {
                cout << *iter << endl;
            }
       }//end of show

        
        else {
            cout << "I don't recognize that input.\n";
        }
    }//end of while(true)
}//end of main
