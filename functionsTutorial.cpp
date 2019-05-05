#include <iostream>
using namespace std;


// Declaring function Prototype 


int add_integers(int, int);

// Function Overloading examples

float add(float, float);
float add(float, float, float);
int   add(int, int);


// Function Template 

template<class myType>
myType GetMax( myType a, myType b)
{
    return (a > b)? a:b;
}
 
template<class T>
T maxValue(T x, T y)
{
    if(x > y)
        return x;
    else
        return y;
}

// functions return by Address
int * fun(int size);


// Function Return by Reference 
int & returnByReference(int &a)
{
    cout << a;
    return a;
}


int main()
{
    int x = 10; 
    int y = 20;
    int z = 0;

    // calling the function 
    
    z = add_integers(x, y);


    cout << "Adding x and y results in: " << z << endl;
    cout <<"\n";

    // Function overloading example 
    
    cout << "sum of 2 floats is: " << add(2.5f, 1.2f) << endl;
    cout << "sum of 3 floats is: " << add(2.5f, 1.2f, 1.1f) << endl;
    
    cout << "sum of 2 integer is: " << add(2, 2) << endl;

    // Function Template example how to use
    
    int i=5;
    int j=6;
    float l = 10.3, m = 2.3;
    int k, r;
    
    int   c = maxValue(i, j);
    float d = maxValue(10.5f, 4.3f);
    
    
    k = GetMax<int>(i,j);
    r = GetMax<float>(l,m);

    cout <<"\n";
    cout <<"Using template T with int  : " << c << endl;
    cout <<"Using template T with float: " << d << endl;
    cout <<"\n";
    cout <<"Using template myType with int  : " << k << endl;
    cout <<"Using template myType with float: " << r << endl;

    // Function Return by address example
    
    int *ptr = fun(5);
    cout << ptr << endl;

    for( int i = 0; i < 5; i++ )
    {
        cout << ptr[i] << " ";
    }
   
    cout << endl;

    // Function Return by Reference 
    int ibyReference = 10;
    cout << "value of ibyReference before:  " << ibyReference << endl;
    
    returnByReference(ibyReference) = 25;

    cout << "value of ibyReference after: " << ibyReference << endl;
    

    return 0;
}



// Declaring the functions below the main()


int add_integers(int x, int y)
{
    return x + y;
}

float add(float x, float y)
{
    return x + y;
}

float add(float x, float y, float z)
{
    return x + y + z;
}

int add(int x, int y)
{
    return x + y;
}

// Function return by address
int * fun(int size)
{
    int *p = new int[size];

    for(int i = 0; i < size; i++)
    {
        p[i] = 5 * i;
    }

    cout << p << endl;
    return p;
}


