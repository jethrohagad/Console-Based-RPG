#include <iostream>
#include <windows.h>
#include <vector>
#include "mainMenu.cpp"

int move_1d;
std::vector<int> menuSelection;

void selecting(){
    while(true){
        if(GetAsyncKeyState(VK_UP) & 0x8001) move_1d = 0;
        if(GetAsyncKeyState(VK_DOWN) & 0x8001) move_1d = 1;
        switch(move_1d){
            case 0:
        }
        mainMenu(move_1d);
    }
}