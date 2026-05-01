//Ethan Dingus coding 1 2026
//class inheritance and header files if we can


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

//can we build a vector of slimes
// can we get the slimes the fight each other
//can we build a boss

vector<string> slimeNames = {"Tombow", "Cheryl", "Excobar", "Indigo", "Franz"};

class baseSlime {
public:
    string name;
    int health;
    int damage;

    baseSlime(){
        name = slimeNames[rand() % slimeNames.size()] + " Slime";
        health = rand() % 5 + 5;
        damage = rand() % 6 + 3;
    }

    void hello(){ 
        cout << "My name is " << name << ".\nI have " << health;
        cout << " health and " << damage << " damage.\n";

    }
    bool attack(baseSlime& opponent){
        opponent.health -= damage;
        cout << name << " attacks " << opponent.name << "!\n";
         
        if(opponent.health <= 0) {
            return true;
        }
        else {
            return false;
        }
        
    }

    //step1 = who attacks first
    //step2 = fighter a fights b 
    //step3 = (if fighter b is still alive) fighter b attacks fighter a

};

int main() {
    srand(time(0));
    cout << "lets make some slimes fight.\n";

    baseSlime ricky;
    ricky.name = "Richard Slime";
    ricky.health = 10;
    ricky.damage = 4;

    baseSlime beth;
    beth.name = "Elizabeth slime";
    beth.health = 8;
    beth.damage = 6;

    ricky.hello();
    ricky.hello();

    cout << "Creating our Glob of Slimes...\n";
    vector<baseSlime> glob(6);

    for(int i = 0; i < glob.size(); i++) {
        glob[i].hello();
        cout << "\n\n";
    }

    cout << "lets have ricky and beth fight.\n";

    baseSlime temp, temp2;
    baseSlime& fighterA = temp;
    baseSlime& fighterB =  temp2;
    
    if(rand() % 2 == 0) {
        cout << "Ricky goes first!\n";
        fighterA = ricky;
        fighterB = beth;
    }
    else {
        cout << "Beth goes first!\n";
        fighterA = beth;
        fighterB = ricky;
    }

    //thunderdome
    while(fighterA.health > 0 && fighterB.health > 0) {
        if(fighterA.attack(fighterB)) {
            cout << fighterB.name << " has been defeated!\n";
        
        }
        else {
            if(fighterB.attack(fighterA))
            cout << fighterA.name << " has been defeated!\n";
        }

       
    }
     

    return 0;
}