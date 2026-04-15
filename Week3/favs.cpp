// Ethan Dingus
// lets create a list of favorites

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    while(true) {
        cout << "What would you like to do?\n";
        cout << "You have 5 options, 'add', 'edit', 'remove', 'show', 'quit'.\n";

        string input;
        getline(cin, input);

        if(input == "quit") {
            cout << "Thanks for playing.\n";
            break;
        }
        else if(input == "add") {
            vector<string> playerGames;

            while(playerGames.size() == 5) {
                cout << "Add 5 of your favorite games to the list.\n";
                string inupt;
                cin >> input;

                playerGames.push_back(input);
            }
        }
        else {
            cout << "I don't recognize that input.\n";
        }
    }
}
