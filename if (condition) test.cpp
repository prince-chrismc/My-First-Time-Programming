#include <windows.h>
#include <iostream>

using namespace std;

int main ()
{
    int choice;

    start:
        SetConsoleTitle("Mini-game");
        cout << "108 false; 109 to 119 true.";
        cout << endl << "enter the # of ur choice: ";
        cin >> choice;
        if(choice >= 109 && choice <= 119)
        {
            cout << endl << endl << "correct";
            Sleep(1500);
            system("cls");
            goto start;
        }
        else
        {
            cout << endl << endl << "false";
            Sleep(1500);
            system("cls");
            goto start;
        }
        return 0;
}
