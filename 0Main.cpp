//Func10MainMenu.cpp
#include <iostream>
#include <conio.h>
#include <ctime>
#include<iomanip>

using namespace std;

#include"1MainMenu.class"

#include"2freeTyping.class"

#include"3StringTyping.class" 

int main()
{
     MainMenu Y;
     FreeTyping FT;
     RandomString RD;

    MainMenu:
    Y.Tec = Y.Menu();
    //cout << Y.Tec;
    switch (Y.Tec)
    {
    case 0:
    {
        FT.TypingFree();

        goto MainMenu;
    }

    case 1:
    {
        RD.StringTyping();
        goto MainMenu;
    }
        
    
    default:
    {
        system("CLS");

        break;
    }
    }
    return 0;
}