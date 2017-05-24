#include <windows.h>
#include <iostream>

using namespace std;

int main ()
{
    SetConsoleTitle("WC Magic Logs");
    string choice;

    int x;
    int y;
    int run;
    int done = 0;

    start:

    cout << "Edge Bank Magic Log Cutter" ;
    cout << endl << "Version 1.12" << endl;
    Sleep(500);
    cout << endl << "Note: do NOT move camera; stand infront of north western";
    cout << endl << "      deposite box before beginning" << endl;
    Sleep(500);
    cout << endl << "  Insert number of inventories you wish to complete than";
    cout << endl << "  press 'enter' to begin... ";
    cin >> run;

    cout << endl << "Starting in 3...";
    Sleep(1000);
    cout << endl << "Starting in 2...";
    Sleep(1000);
    cout << endl << "Starting in 1..." << endl;
    Sleep(1000);
    cout  << endl << "In Progress..." << endl;

    while(done < run)
    {
        SetCursorPos(688, 361);                                 //click bank box
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(1500);

        SetCursorPos(734, 517);                                 //deposite all
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(1500);

        SetCursorPos(640, 755);                                 //move south, to doors
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(3500);

        SetCursorPos(625, 735);                                 //move south, out of bank
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4500);

        SetCursorPos(908, 561);                                 //move south, under bank
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(3500);

        SetCursorPos(795, 716);                                 //move south, to pillar
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(3500);

        SetCursorPos(673, 738);                                 //move south, into ruins
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(3500);

        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move south, into ruin's room
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(3500);

        SetCursorPos(688, 738);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move south, ruin's room
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4500);

        SetCursorPos(805, 435);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //open trapdoor || climb down
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4000);

        POINT p;
        SetCursorPos(302, 405);
        Sleep(250);
        GetCursorPos(&p);
        x = p.x;
        y = p.y;

        HDC hDC = GetDC(NULL);
        COLORREF color = GetPixel(hDC, p.x, p.y);
        BYTE redValue, greenValue, blueValue;
        redValue = GetRValue(color);
        greenValue = GetGValue(color);
        blueValue = GetBValue(color);

        if(redValue >= 5 && greenValue >= 5 && blueValue >= 5)
        {
            SetCursorPos(743, 436);
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(2000);
        }

        SetCursorPos(765, 270);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move north of rock pile 1
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4000);

        SetCursorPos(703, 84);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move north of rock pile 2
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(8000);

        SetCursorPos(921, 127);                                 //move to the door
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(8500);

        SetCursorPos(691, 308);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //open || close metaldoor
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(3500);

        SetCursorPos(721, 370);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //open || close metaldoor
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(1500);

        SetCursorPos(1121, 200);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move east corridor
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4500);

        SetCursorPos(1121, 200);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move east corridor
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4500);

        SetCursorPos(1121, 200);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move east opening
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4500);

        SetCursorPos(1131, 300);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move east opening
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4500);

        SetCursorPos(1131, 300);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move east opening
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4500);

        SetCursorPos(775, 738);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move south opening
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(6500);

        SetCursorPos(692, 530);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move throu pipe
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(8500);

        SetCursorPos(815, 744);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move south to rock
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4500);

        SetCursorPos(594, 742);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move south throu corridor
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4500);

        SetCursorPos(995, 739);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move sout to lake
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(6500);

        SetCursorPos(986, 748);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move south to broken wall
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(6500);

        SetCursorPos(758, 734);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move sout to lil rock
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4500);

        SetCursorPos(597, 699);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //enter dung
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(5500);

        SetCursorPos(71, 376);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);          //move east to trees
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(3500);

        done++;
    }

    cout << endl << "Task Completed ~ Your Welcome";
    cout << endl << endl << "(y/n) Again: ";
    cin >> choice;
    if (choice == "y")
    {
        system("cls");
        goto start;
    }
    cin.get();
}
