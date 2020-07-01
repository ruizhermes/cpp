#include <iostream>
#include <fstream>
#include <string>


using namespace std;

#pragma(push, 1)
struct Person{
    char name[50];
    int age; 
    double height;
};
#pragma(pop)

int main(){

    Person someone = {"Frodo", 220, 1.8};

    string fileName = "test.bin";

    // writing to binary file 
    ofstream outFile;

    outFile.open(fileName, ios::binary);

    if(outFile.is_open()){

        outFile.write((char *)&someone, sizeof(Person));
        // outFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        outFile.close();
    }
    else{
        cout << "Could not open file: " << fileName << endl;
    }


    // reading binary file 

    Person someoneElse = {};
    ifstream inputFile;

    inputFile.open(fileName, ios::binary);

    if(inputFile.is_open()){
        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
        inputFile.close();
    }
    else{
        cout << "Could not read file: " + fileName << endl;
    }

    cout << someoneElse.name << " "  <<  someoneElse.age << " " << someoneElse.height << endl;


    return 0;
}