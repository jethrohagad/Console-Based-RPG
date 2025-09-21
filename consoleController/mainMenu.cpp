#include <iostream>
#include <windows.h>
using namespace std;


void showMenu(int cycle){
    system("CLS");
    cout << "Play\n"
         << "New\n"
         << "Setting\n"
         << "Exit\n";

    switch(cycle){
        case 1: //line 1
            cout << "\033[3A <";
            break;
        case 2: //line 2
            cout << "\033[2A <";
            break;
        case 3: //line 3
            cout << "\033[1A <";
            break;
        case 4: //line 4
            cout << " <";
            break;
    }
}