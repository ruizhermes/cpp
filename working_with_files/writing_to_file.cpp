#include <iostream>
#include <fstream>


using namespace std;

int main (){

    ofstream outFile;
    string outFileName = "text.txt";

    outFile.open(outFileName);

    if(outFile.is_open()){
        outFile << "this is a line in file" <<endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else{
        cout << "Could not open file: " << outFileName << endl;
    }

    return 0;
}