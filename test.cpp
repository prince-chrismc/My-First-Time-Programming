#include <windows.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int x;
    int y;
    int done = 0;
    cout << endl << "Starting in 3...";
    Sleep(1000);
    cout << endl << "Starting in 2...";
    Sleep(1000);
    cout << endl << "Starting in 1...";
    Sleep(1000);
    cout << endl << "In Progress...";

    while (done < 11)
    {
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        done++;
        Sleep(100);
    }
return 0;
}
