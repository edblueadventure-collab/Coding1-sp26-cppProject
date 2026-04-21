//Ethan Dingus coding1
//week 14a, writing and reading from files


#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

//build a new function
//return type = void, name = writeFile(input, path)
void writeFile(string input, string path = "save.txt") {
    ofstream file(path);    //open the file at the specified path
    file << input;
    file.close();
}//end of writeFile for save.txt

//vor vector
void writeFile(vector<string>& vec, string path = "vector.txt") {
    ofstream file(path);
    for(int i = 0; i < vec.size(); i++) {
        file << vec[i] << endl;
    }
    file.close();
}//end of writeFile for vextor.txt/names.txt

void readFile(string path = "save.txt") {
    string line;
    ifstream file(path);
    if(file.is_open()) {
        while(getline(file, line)) {
            cout << line << endl;
        }
    }
    else {
        cout << "file not found.\n";
    }
    file.close();
}//end of readFile for save.txt

void readFile(vector<string>& vec, string path = "vector.txt") {
    vec.clear();
    string line;
    ifstream file(path);
    if(file.is_open()) {
        while(getline(file, line)) {
            vec.push_back(line);
        }
    }
    file.close();
}

int main() {
   // cout << "let's do some file operations!\n";
    //create a file
   // ofstream file;      //output file stream
   // file.open("save.txt");
    //give a name to the file
    //add some text
   // file << "Here is some text.\n";
   // file << "here is some more text.\n";
    //close the file
   // file.close();
    //run the program
    //see if it exists

    writeFile("here is some text.\nhere is another line of text\nhere is a thrid line of text\n");

    readFile();

    //create the vector of names
    vector<string> names = {"Harry", "Hermonie", "Ron"};
    //"load" the names from the file ( with readFile())
    readFile(names, "names.txt");
    //displaying the names in the vector
    for(int i = 0; i < names.size(); i++) {
        cout << names[i] << endl;
    }

    //add more names to the vector
    //"save" the vectors to a file
    writeFile(names, "names.txt");



   // string line;
    //ifstream readFile("save.txt");     //create a variable to hold each line of text
    //if(readFile.is_open()){         //open the save.txt
       // while(getline(readFile, line)) {    //if the file could be opened
           // cout << line << endl; //as lond as there are lines /display the lines
       // }

  //  }

    return 0;
}//End of int main