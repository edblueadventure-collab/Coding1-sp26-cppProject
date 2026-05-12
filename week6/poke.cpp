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
//craete a class of variables
class poke {
private:
    // name
    string name;
    // health
    int health;
    // damage
    int damage;
    // hunger
    int hunger;
    //defense
    int defense;
    // is it alive
    bool alive;
    

public:
    poke(string givenName, int givenHealth, int givenDamage, int givenDefense) {
        name = givenName;
        health = givenHealth;
        damage = givenDamage;
        defense = givenDefense;
        hunger = 0;
        alive = true;
    }
    poke(vector<string>& names) {
        name = names[rand() % names.size()];
        health = rand() % 10 + 10;
        damage = rand() % 5 + 3;
        defense = rand() % 5 + 3;
        hunger = 0;
        alive = true;
    }

    void setName(string givenName) {
        name = givenName;
    }
    string getName(){
        return name;
    }

    void setHealth(int givenHealth) {
        health = givenHealth;
    }
    int getHealth() {
        return health;
    }

    void setDamage(int givenDamage) {
        damage = givenDamage;
    }
    int getDamage() {
        return damage;
    }
    
    void setDefense(int givenDefense) {
        defense = givenDefense;
    }
    int getDefense() {
        return defense;
    }

    void setHunger(int givenHunger) {
        hunger = givenHunger;
    }
    int getHunger() {
        return hunger;
    }

    void setAlive(bool givenAlive) {
        alive = givenAlive;
    }
    bool getAlive() {
        return alive;
    }

    void feed() {
        hunger -= 1;
        cout << "NOM NOM NOM!\n";
    }

    void listen() {
        //show name, health, damage, and hunger
        cout << "Name: " << name << "\n";
        cout << "Health: " << health << "\n";
        cout << "Damage: " << damage << "\n";
        cout << "Hunger: " << hunger << "\n";
    
        if(hunger <= 5) {
                cout << "I'm feeling good.\n";
            }   
            //if hunger goes above 5
            else if(hunger <= 10) {
                cout << "I'm a bit hungry.\n";
            }
            else {
                cout << "FEED ME NOW!\n";
            }       
                
    }
    void train() {
        if(hunger > 10) {
            cout << "STOP your Poke needs food.\n";
        }
        else {
            if(hunger > 5) {
            cout << "Hey you can train,\nbut you need to feed your Poke.";
            }
            hunger += 1;
            if(rand() % 2 == 0) {
                health += 1;
                cout << "Increase to Health";
            }
            else {
                damage += 1;
                cout << "Increase to Damage";
            }
        }    
    }
    void battle(vector<string>& names) {
        string input;
        if(hunger > 10) {
            cout << "STOP! You can't battle with your Poke in that condition.\n";
        }
        else {
            if(hunger > 5) {
                    cout << "You can fight, but feed your poke after.\n";
            }
            hunger += 1;
            poke enemy(names);
            cout << "A wild " << enemy.getName() << " approaches!\n";
            cout << "Enemy health: " << enemy.getHealth() << "\n";
            cout << "Enemy damage: " << enemy.getDamage() << "\n";
            if(rand() % 2 == 0) {
                cout << "You go first!";
            }    
            else {
                cout << "The wild pokemon goes first!";
            }
                
        
            //create a while loop to make battle
            while(enemy.getHealth() > 0 && health > 0) {
                cout << "What do you do?\n";
                cout << "attack\nheal\nrun\n";
                //get the player input
                getline(cin, input);
                //if attack
                if(input == "attack") {
                    enemy.setHealth(enemy.getHealth() - (damage - enemy.getDefense()));
                    cout << "You attacked for " << (damage - enemy.getDefense()) << " damage!\n";
                }
                else if(input == "heal") {
                    health += rand() % 6 + 5;
                    cout << "You healed!\n";
                }
                else if(input == "run") {
                    cout << "You ran away!\n";
                    break;
                }
                else {
                    cout << "That is not an option.\n";
                }
                if(enemy.getHealth() > 0) {
                    health -= (enemy.getDamage() - defense);
                    cout << "That wild pokemon attacked you for " << (enemy.getDamage() - defense) << "damage!\n";
                }

            }  
            if(health <= 0) {
                cout << "Your pokemon fainted!\n";
            }  
            else if(enemy.getHealth() <= 0) {
                cout << "You Won!!\n";
            }
            health = 20;
            
        }
    }
};

int main() {
    srand(time(0));

    vector<string> pokeNames;
    ifstream namesFile("names.txt");
    string line;
    while(getline(namesFile, line)) {
        pokeNames.push_back(line);
    }
    namesFile.close();
    //create a default variable for the poke variables
    poke myPoke("Charmander", 15, 10, 3);
    string input;
    //Then create code that lets the player which pokemon they want
    cout << "Hello I'm Professor Oak!\nLets chose your first Pokemon!\n";
    cout << "Charmander!\n";
    cout << "Bulbasaur!\n";
    cout << "Squirtle!\n";
    //get their input
    getline(cin, input);
    
    //create an if and if/else statements where it states their health, offense, and defense
    if(input == "Charmander") {
        myPoke = poke("Charmander", 15, 10, 3);
    }
    else if(input == "Bulbasaur") {
        myPoke = poke("Bulbasaur", 25, 5, 5);
    }
    else if(input == "Squirtle") {
        myPoke = poke("Squirtle", 20, 7, 8);
    }
    else {
        cout << "Sorry but we don't have that Pokemon.\n";
    }
    while(true) {
        cout << "what do you want to do\n";

        getline(cin, input);

        //create a 'feed' function
            
        if(input == "feed") {
            myPoke.feed();
        }
        //create a 'training' function
        else if(input == "train") {
            cout << "You're gonna eat thunder,\nand crap lighting!\n";
            myPoke.train();
        }
        //create a 'battle' function
        else if(input == "battle") {
            cout << "lets Get REady TO RUMMMMBBBLLEE!!\n";
            myPoke.battle(pokeNames);

        }
        //create a 'listen' function
        else if(input == "listen"){
           myPoke.listen();
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