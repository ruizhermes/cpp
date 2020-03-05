#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

const int SIZE = 10;

struct inv_type{
    char item[40];
    double cost;
    double retail;
    int on_hand;
    int lead_time;
}invtry[SIZE];


void init_list();
int menu();
void enter();
void input(int i);
void update();
void display();

int main(){

    char choice;

    init_list();
   
    for(;;){
        choice = menu();
        
        switch (choice)
        {
        case 'e': enter();
            break;
        
        case 'd': display();
            break;

        case 'u': update();
            break;

        case 'q': return 0;
        }
    }

    return 0;
}


void init_list(){
    int t;

    for(t=0; t<SIZE; t++){
        *invtry[t].item = '\0';
    }
}

int menu(){
    char ch;

    cout << '\n';

    do {
        cout << "(E)nter\n";
        cout << "(D)isplay\n";
        cout << "(U)pdate\n";
        cout << "(Q)uit\n\n";
        cout << "choose one: ";
        cin >> ch;
    
    } while(!strchr("eduq", tolower(ch)));
    
    return tolower(ch);

}

void enter()
{
    int i;
    // find the first free structure
    for(i=0; i<SIZE; i++)
    if(!*invtry[i].item) break;
    // i will equal SIZE if the list is full
    if(i==SIZE) {
    cout << "List full.\n";
    return;
    }
    input(i);

}

// Input the information.
void input(int i)
{
    // enter the information
    cout << "Item: ";
    cin >> invtry[i].item;
    cout << "Cost: ";
    cin >> invtry[i].cost;
    cout << "Retail price: ";
    cin >> invtry[i].retail;
    cout << "On hand: ";
    cin >> invtry[i].on_hand;
    cout << "Lead time to resupply (in days): ";
    cin >> invtry[i].lead_time;
}

// Modify an existing item.
void update()
{
    int i;
    char name[80];
    cout << "Enter item: ";
    cin >> name;

    for(i=0; i<SIZE; i++)
        if(!strcmp(name, invtry[i].item)) break;
    
    if(i==SIZE) {
        cout << "Item not found.\n";
        return;
    }

    cout << "Enter new information.\n";
    input(i);
}

// Display the list.
void display()
{
    int t;
    for(t=0; t<SIZE; t++) {
        if(*invtry[t].item) {
        cout << invtry[t].item << '\n';
        cout << "Cost: $" << invtry[t].cost;
        cout << "\nRetail: $";
        cout << invtry[t].retail << '\n';
        cout << "On hand: " << invtry[t].on_hand;
        cout << "\nResupply time: ";
        cout << invtry[t].lead_time << " days\n\n";
        }
    }
}