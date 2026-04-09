//Ethan Dingus in Coding 1
//We are going to cover vectors, iterator, algorithms

//cl /EHsc vec.cpp
//vec

//cl /EHsc vec.cpp && vec

#include <iostream>
#include <string>
#include <vector>   //for the vector!
#include <algorithm>
 
using namespace std;

int main() {
    cout << "Lets learn about vectors\n";

    int chapter = 0;
    cout << "what program would you like to run?\n";
    cout << "Press 1 for Vector.\n Press 2 for iterator\n";

    cin >> chapter;

    if(chapter == 1) {
        //Collection intializer
        vector<string>names = {"Finn",
                                "Jake",
                                "Bubblegum",
                                "Marceline",
                                "Shelby"};

        cout << "There are" << names.size() << "int the vector.\n";
        cout << "Here are your names:\n";

        for(int i = 0; i < names.size(); i++){
            cout << i + 1 << "." << names[i] << "\n";
        }

        cout  << "the first name in the vector is " << *(names.begin()) << ".\n";
        
        //Creating our first iterator. it's a pointer to an element in a vector
        vector<string>::iterator iter;

        iter = names.begin() + 2;

        //Dereference the iter with an asterisk at the beginnning.
        //what's with that word "dereference"?. a pointer can be though of as a nickname
        //a "reference" to something else. when we de-refernce it, we get the value
        //that is at that point
        cout << "iter is pointing at " << *iter << ".\n";

    } //End of chapter 1
    if(chapter == 2) {
        cout << "let's use push_back() and pop_back().\n";

        vector<string> favMovies;

        while(favMovies.size()< 3){
            cout << "please add a favorite movie: ";
            string input;
            cin >> input;
            // cin.ignore(INT_MAX);
            // getline(cin, input);

            favMovies.push_back(input);
        }

        cout << "Here are your favorite movies:\n";

        //this time, use a for look with an iterat or to move through the vector
        for(vector<string>::iterator iter = favMovies.begin(); iter != favMovies.end(); iter++) {
            cout << *iter << endl;
        }

    }//end of chapter 2

    if(chapter == 3) {
        vector<string> friends;

        friends.push_back("Joey");
        friends.push_back("Pheobe");
        friends.push_back("Rachel");
        friends.push_back("Chandler");
        friends.push_back("Monica");
        friends.push_back("Ross");

        cout << "here are your friends:\n";
        for(int i = 0; i < friends.size(); i++) {
            cout << friends[i] << ".\n";
        }

        cout << "Please choose a friend to go visit:\n";
        vector<string>::iterator chosenFriend = friends.begin();
        string input;
        cin >> input;

        chosenFriend = find(friends.begin(), friends.end(), input);

        if(chosenFriend != friends.end()){
            //displays the name of chosenFriend... if we found one...
            cout <<"Lets talk to " << *chosenFriend << "today!\n";
        }
        else{
            cout << "I couldn't find " << input << "in your friends.\n";
        }

        //use an algorithm to find a friend
        //chosenFriend = find(friends.begin(), friend.end(), "Ross");
    }
    else {
        cout << chapter << "isn't one of the options.\n";
    } 



}
//End of int main
