#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
    int x;
    int y;
    int done = 0;

    cout << "ta dum." << endl << endl  << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << endl << "bottom";
    while(done < 10){
    cout << "yippy";
    Sleep(500);
    COORD c;
    c.X = 0;
    c.Y = 10;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, c);
    done++;
}
}
