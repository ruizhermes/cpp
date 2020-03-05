#include <iostream>

using namespace std;

// console class - Parent class
class Console{
    private:
        string name;

    public:
        Console(){
            this->name = "unknown";
        }

        Console(string name){
            this->name = name;
        }

        string getConsoleName(){
            return this->name;
        }
};

// Video Game class - Inherents from Console 

class Game : public Console{
    private:
        string name;
    
    public:

        Game(){
            this->name = "unknown";
        }

        Game(string name){
            this->name = name;
        }

        // this constructor will also call the Console constructor 
        // by passing the parameter that matches one of the parameters in the 
        // Default Game constructor (e.g. console)
        Game(string name, string console) : Console(console){
            this->name = name;
        }

        string getGameName(){
            return this->name;
        }
};

// Specific video game (pokemon, street Fighter etc,,) class

class StreetFighter : public Game{
    private:
        int id;
        string name;

    public:

        StreetFighter(int id, string name){
            this->id   = id;
            this->name = name;
        }

        StreetFighter(int id, string name, string game): Game(game){
            this->id   = id;
            this->name = name;
        }

        StreetFighter(int id, string name, string game, string console):Game(game, console){
            this->id   = id;
            this->name = name;
        }


        string getCharacterName(){
            return this->name;
        }

        int getID(){
            return this->id;
        }

        void print(){
            cout << "character ID: " << this->id << endl;
            cout << "Character   : " << this->name << endl;
            cout << "Video Game  : " << this->getGameName() << endl;
            cout << "Console     : " << this->getConsoleName() << endl << endl;
 
        }
};



int main(){

    // Creating Console object (Parent Class)
    Console console_brand("Nintendo 64");
    //or create object like: (uncomment bolow line)
    //Console console_brand = Console("Nintendo 64");
    

    cout << console_brand.getConsoleName() << endl << endl;

    // Object with parent class inheritance
    // The object inherece the setConsoleName() and getConsoleName()
    Game game_name = Game("Stree Fighter 3"); 
   

    cout << "vided game   : " << game_name.getGameName()    << endl;
    cout << "console Name : " << game_name.getConsoleName() << endl<<endl; 


    // USING the overloaded constructor that calls the parent constructor 
    // Parent constructor : Console
    Game game_name2 = Game("Stree Fighter 3", "Play Station 4"); 

    cout << "vided game   : " << game_name2.getGameName()    << endl;
    cout << "console Name : " << game_name2.getConsoleName() << endl;
    
    
    // object for video game character: Inherence from Game class, which in turns
    // inherence from Console class
    StreetFighter blanka = StreetFighter(27, "Blanka Ultra", "Stree Fighter 3", "Play Station 4");
    StreetFighter ryo(12, "Ryo", "Street Figther 3", "XBox 2"); // object creation way 2

    cout << "\n";
    cout << "Character ID : " << blanka.getID() << endl;
    cout << "Character    : " << blanka.getCharacterName() << endl;
    cout << "video Game   : " << blanka.getGameName() << endl;
    cout << "Console      : " << blanka.getConsoleName() << endl;


    // Using the object print() method 
    cout << endl;
    blanka.print();

    cout << endl;
    ryo.print();

    return 0;

}