#include <iostream>

using namespace std;

// console class - Parent class
class Console{
    private:
        string name;

    public:
        void setConsoleName(string name){
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
        void setGameName(string name){
            this->name = name;
        }

        string getGameName(){
            return this->name;
        }
};

// Specific video game (pokemon, street Fighter etc,,) class
// Inherit from Game, which in turn inherits from Console (Parent Class)
class StreetFighter : public Game{
    private:
        int id;
        string name;

    public:
        void setCharacterName(string name){
            this->name = name;
        }

        string getCharacterName(){
            return this->name;
        }
};



int main(){

    // Creating Console object (Parent Class)
    Console console_brand;
    console_brand.setConsoleName("Nintendo 64");

    cout << console_brand.getConsoleName() << endl << endl;

    // Object with parent class inheritance
    // The object inherece the setConsoleName() and getConsoleName()
    Game game_name;
    game_name.setGameName("Street Fighter 3");
    game_name.setConsoleName("Play Station 4");

    cout << "vided game   : " << game_name.getGameName()    << endl;
    cout << "console Name : " << game_name.getConsoleName() << endl; 


    // object for video game character: Inherence from Game class, which in turns
    // inherence from Console class

    StreetFighter blanka;
    blanka.setCharacterName("blanka");
    blanka.setGameName("Street Fighter 3");
    blanka.setConsoleName("Play Station 4");

    cout << "\n";
    cout << "Character : " << blanka.getCharacterName() << endl;
    cout << "video Game: " << blanka.getGameName() << endl;
    cout << "Console   : " << blanka.getConsoleName() << endl;

    return 0;

}
