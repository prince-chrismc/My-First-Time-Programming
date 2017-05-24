#include <windows.h>
#include <iostream>

using namespace std;

int main ()
{
    SetConsoleTitle("WC Magic Logs");
    string choice;

    int x;
    int y;
    int run = 1;
    int done = 0;

    start:

    cout << "Magic Log Cutter Tester" ;
    cout << endl << "Version 0.0" << endl;
    Sleep(500);
    cout << endl << "  press 'enter' to begin... ";
    cin.ignore();

    cout << endl << "Starting in 3...";
    Sleep(1000);
    cout << endl << "Starting in 2...";
    Sleep(1000);
    cout << endl << "Starting in 1..." << endl;
    Sleep(1000);
    cout  << endl << "In Progress..." << endl;

    while(done < run)
    {
        SetCursorPos(589, 437);     //first tree
        POINT p;
        GetCursorPos(&p);
        x = p.x;
        y = p.y;

        HDC hDC = GetDC(NULL);
        COLORREF color = GetPixel(hDC, p.x, p.y);
        BYTE redValue, greenValue, blueValue;
        redValue = GetRValue(color);
        greenValue = GetGValue(color);
        blueValue = GetBValue(color);

        if(redValue >= 115 && redValue <= 125 && greenValue >= 109 && greenValue <= 119 && blueValue >= 57 && blueValue <=67)
        {
            while(redValue >= 115 && redValue <= 125 && greenValue >= 109 && greenValue <= 119 && blueValue >= 57 && blueValue <=67)
            {
                mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                Sleep(120000);
                HDC hDC = GetDC(NULL);
                COLORREF color = GetPixel(hDC, p.x, p.y);
                BYTE redValue, greenValue, blueValue;
                redValue = GetRValue(color);
                greenValue = GetGValue(color);
                blueValue = GetBValue(color);
            }
        }
        else
        {
            SetCursorPos(527, 424);
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(3500);
        }

        done++;
    }
    return 0;
}
