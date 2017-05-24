#include <windows.h>
#include <iostream>
#include "resource.h"
using namespace std;

int main ()
{
    SetConsoleTitle("Cit Bar Smither");
    string choice;
    int x;
    int y;
    int run;
    int done = 0;
    int ore;

    start:
    cout << "Cit Bar Smither" ;
    cout << endl << "Version 2.0" << endl;
    Sleep(1000);

    cout << endl << "Which type of ore would you like to smith...";
    cout << endl << "1: regular" << endl << "2: precious";
    cout << endl << "Selection? ";
    cin >> ore;
    cout << endl << "Your choice was: " << (int)ore;

    cout << endl << "Insert number of trips to smith than press 'enter' to begin... ";
    cout << endl << "Note: Each trip is approx 60 ressources." << endl;
    Sleep(500);

    cout << endl << "Number of trips to do: ";
    cin >> run;

    cout << endl << "Starting in 3...";
    Sleep(1000);
    cout << endl << "Starting in 2...";
    Sleep(1000);
    cout << endl << "Starting in 1..." << endl;
    Sleep(1000);
    cout << endl << "In progress..." << endl;

    if(ore == 1)
    {
        while(done < run)
        {
            cout << endl << "you picked reg ore";
            SetCursorPos(629, 383);                              //empty bin west
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(40000);

            SetCursorPos(1075, 408);                              //empty bin east
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(47000);

            SetCursorPos(670, 567);                              //empty mould
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(48000);

            SetCursorPos(680, 457);                              //empty trough
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(45000);

            SetCursorPos(497, 278);                              //go to bin west
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(12000);

            done++;
        }
    }

    if(ore == 2)
    {
        while(done < run)
        {
            cout << endl << "you picked prec ore";
            SetCursorPos(622, 429);                              //empty bin west
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(40000);

            SetCursorPos(1054, 439);                              //empty bin east
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(45000);

            SetCursorPos(682, 332);                              //empty mould
            Sleep(150);
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(48000);

            SetCursorPos(677, 377);                              //empty trough
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(42000);

            SetCursorPos(238, 715);                              //go to bin west
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(12000);

            done++;
        }
    }

    cout << endl << "complete!";
    cout << endl << "(y/n) Again: ";
    cin >> choice;
    if (choice == "y")
    {
        system("cls");
        goto start;
    }
    return 0;
}
