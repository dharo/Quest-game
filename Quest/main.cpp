/* 
 * File:   main.cpp
 * Author: David Haro and Alex Ontiveros
 * 
 * Game of quest
 *
 * Created on February 9, 2016, 8:53 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
void gameplay();
void interrupt();

int main(int argc, char** argv) {
    int choice;
    
    do{
        cout<<"Quest\n";
        cout<<"1. Play Game\n";
        cout<<"2. Quit\n";
        cout<<"Select your option...\n";
        cin>>choice;
    }while(choice > 2 || choice < 1);
    if(choice==1){ 
        gameplay();
    }
    else if(choice==2){ 
        cout<<"Exiting game...\n";
    }
    return 0;
}

void gameplay(){
    //weapon is either a sword or a shield. 
    // if it is a sword the choice is 1
    // else if it is a shield, the choice is 2
    int weapon;
    string wep_name = "";
    
    cout<<"You wake up in the middle of the woods...\n";
    
    //Pause for input
    interrupt();
    
    cout<<"You found a sword and a shield by your feet. BTW you're missing an arm.\n";
    do{
        cout<<"Which one will you pick up?\n";
        cout<<"1. Sword      2. Shield";
        cin>>weapon;
    }while(weapon > 2 || weapon < 1);
    
    //pause for input
    interrupt();
    
    if (weapon == 1){
        wep_name = "sword";
    }
    else if (weapon == 2){
        wep_name = "shield";
    }
    cout<<"You have selected the "<<wep_name<<endl;
    
    if(wep_name == "sword"){
        cout<<"It's a plain iron sword, pretty heavy!\n";
        cout<<"Hope you can carry this thing you one-armed freak\n\n";
    }
    if(wep_name == "shield"){
        cout<<"The shield speaks!\n";
        cout<<" \"Wow you pretty much just won this game by choosing me\"\n\n";
    }
}


//used to pause for input
void interrupt(){
    do{
        cin.get();
    }while (cin.get() != '\n');
    
}