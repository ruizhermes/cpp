#include <iostream>


using namespace std;


int main(){

    // Declaring and Using pointers 
    

    int x = 10;
    int *p;

    p = &x;


    cout << " x value : " << x  << endl;

    cout << "\n\n";
    cout << " x addr  : " << &x << endl;
    cout << " p value : " << p  << endl;

    cout << "\n";
    cout << " p ddr   : " << &p << endl;
    
    cout << "\n";
    cout << " *p value: " << *p << endl;
    cout << "\n";
    
    // Memory allocation and de-allocation 
    // in the "heap memory" area
    
    int *p2 = new int[5];

    p2[0] = 12;
    p2[1] = 13;

    cout << p2[1] << endl;
    
    delete []p2;
    p = nullptr;

    
    int iArray[5] = { 10, 20, 30, 40, 50};

    int *p3 = iArray;

    cout <<*p3 <<endl;

    p3++;

    cout <<*p3 << endl;
    cout <<p3[-1]<<endl;

    return 0;
}
