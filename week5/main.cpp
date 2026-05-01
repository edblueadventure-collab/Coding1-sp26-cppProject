//Ethan Dingus main.cpp
//Coding 1 2026 / 


#include <iostream>
#include <string>
using namespace std;

//classes are custom variables types that have their own 
//variable and functions

//construters
//getters and setters (privacy)
//instances
//inheritance(not today though)
class robot {
private:
//data memebers
    string name;
    int charge;
    int boredom;
public:

    //constructers accepts cariables and sets up the robot when it is created.
    // a constructer function needs no return type, and must be named same as class
    robot(string givenName, int givenCharge, int givenBoredom) {
        name = givenName;
        charge = givenCharge;
        boredom =  givenBoredom;
    }
    //overload
    robot() {
        status();
    }


    void status () {
        cout << "My name is " << name << ", my charge is " << charge << ".\n";
        if(boredom < 5) {
            cout << "Happy!";
        }
        else if(boredom < 10) {
            cout << "bored";
        }
        else if(boredom < 15) {
            cout << "frustrated";
        }
        else {
            cout << "ENRAGED";
        }
        cout << ".\n";
    }
    void newDay() {
        boredom += 2;
    }
    void play() {
        boredom -= 5;
    }
    void setName(string givenName) {
        if(givenName.size() < 5) {
            name = givenName;
        }
        else{
            cout << "error: name is to long.\n";
        }

    }
    void setCharge(int givenCharge) { 
        if(givenCharge > 0) {
            charge = 0;
        }
        else if(givenCharge > 100) {
            charge = 100;
        }
        else {
            charge = givenCharge;
        }
    }

    void changeCharge(int amount) {
        setCharge(charge += amount);
    }

    string getName(){
        return name;
    }
    int getCharge(){
        return charge;
    }
    int getBoredom() {
        return boredom;
    }
};  //don't forget the semi colon at the end of class definition

int main() {
    cout << "My name is what..\nMy name is what..\nSlim shady.\n";

    //creating two new variable of the type 'robot'
    robot artoo("R2-D2", 45, 10);
    //artoo.name = "R2-D2";
    //artoo.charge = 45;
    //artoo.boredom = 10;

    robot threepio;
    threepio.setName("C-3PO");
    threepio.setCharge(2);

    cout << "here's artoo: " << artoo.getName() << ".\n";  

    cout << artoo.getName() << " notices that " << threepio.getName();
    cout << " doesn't have much battery left. Lets fix that!\n";

    while(threepio.getCharge() < 15) {
        artoo.changeCharge(-1);
        threepio.changeCharge(1);
    }

    cout << " threepio's charge is now " << threepio.getCharage() << ".\n";
    cout << " artoo's charge is now " << artoo.getCharge() << ".\n";

    artoo.status();
    threepio.status();
    string input = "";
    int turns = 0;


    while(true) {
        while(turns < 3) {
            cout << "what would to do?\n";
            getline(cin, input);

            if(input == "play") {
                cout << "lets play with " << artoo.name << "!\n";
                artoo.play();

            }
            else if(input == "status"){
                artoo.status();
            }
            turns++;
        }
        turns = 0;
        cout << "Do you want to keep playing?\n";
        getline(cin, input);

        if(input == "no") {
            break;
        }
        artoo.newDay();

    }


    return 0;
}