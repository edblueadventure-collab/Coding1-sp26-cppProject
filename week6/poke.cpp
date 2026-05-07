//Ethan Dingus coding 1
//creating a pokemon inspired tomagatchi

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <fstream>

using namespace std;


//create a class of variables titled poke

vector<string> pokeNames = {"Charmander", "Squritle", "Bulbasaur", "Pikachu", "Oshawott"};
class poke {
public:
    string name;
    int health;
    int damage;
    int hunger;
    bool alive;

    poke(){
        name = pokeNames[rand() % pokeNames.size()];
        health = rand() % 5 + 5;
        damage = rand() % 6 + 6;
    }
};
//for class variable.. 
// name
// health
// damage
// hunger
// is it alive



//once i have the critter create a constructor

//set it name 
//set health, damage, hunger for starting values
//mark the poke as alive

//set name variable
//get name variable

//set health variable
//get health variable

//set damage variable 
//get damage variable

//set hunger variable
//get hunger variable

//set alive variable
//get alive variable

int main() {
    string input;

    while(true) {
        cout << "what do you want to do\n";

        getline(cin, input);

        //create a 'feed' function
            
        if(input == "feed") {
            cout << "NOM NOM NOM!\n";
            //if you feed, it lowers the number
            //then mention that the critter ate
        }
        //create a 'training' function
        else if(input == "train") {
            cout << "You're gonna eat thunder,\nand crap lighting!\n";

            //if hunger is above 10...
            //say that the poke is starving
            //if hunger is above 5 warn the player
            //add 1 to the hunger level
            //flip a coin
                //heads = increase health
                //talis = increase damage
            //tell the player what has improved
        }
        //create a 'battle' function
        else if(input == "battle") {
            cout << "lets Get REady TO RUMMMMBBBLLEE!!\n";

            //if hunger is above 10 stop and say its hungry
            //if hunger is above 5, warn the player but continue add 1 to the hunger
            //keep going back and fourth in the battle
            //until someone wins or the player runs
                //ask the player
                    //attack
                    //heal
                    //or run 
                //if attack - subtract damage from enemy health
                //if heal - add some health back 
                //if run - end battle
                //if the enemy is alive, it fights back
                //check to see if either side has fallen in battle
                //end the battle
        }
        //create a 'listen' function
        else if(input == "listen"){
            //show name, health, damage, and hunger
            //if hunger goes above 5
            //have the program mention it
            cout << "I'm feeling good\n";
            cout << "I'm a bit hungry\n";
            cout << "FEED ME NOW!!\n";
        }
        else if(input == "quit") {
            cout << "Thanks for playing\n";
            break;
        }
        else{
            cout << "I don't know that command\n";
        }

        
    }

    return 0;
}






//Write out the different functions for the poke













//main 

//start
    //open the names file
    //read the name in the list
    //then close the file


//name critter function
    //ask the player for input if they wish to name the poke
    //if random every, pick one in the list
    //create poke with that name


//create a while loop (repeat this until player is done)
    //show the options to the player
        //feed
        //train
        //listen
        //battle
        //quit
    //do what the player asked
    //if battle choose a poke at random from the names on the list

