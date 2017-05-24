#include <windows.h>
#include <iostream>
using namespace std;

int main ()
{

    SetConsoleTitle ("Cosmic Rune Crafter");
    int x;
    int y;
    int times;
    int StartPos;
    int done = 0;
    int south = 0;
    int east = 0;
    int west = 0;
    int north = 0;
    int fails = 0;
    string last;
    string choice;

    start:

    cout << "Zanris Bank Runecrafter";
    cout << endl << "Version 2.4" << endl;
    Sleep(500);

    cout << endl << "Which location would you like to start at?";
    cout << endl << "For Bank (1); For Trouch_Bank (2); For Trough_RC (3)";
    cout << endl << "Your Selection? ";
    cin >> StartPos;

    cout << endl << "Note: Before beginning you MUST: click compass to reset camera;";
    cout << endl << "      Stand 1 square north of bank booth and have you pin entered." << endl;
    Sleep(750);

    if(StartPos == 1)
    {
        //Creative.Solution
    }
    if(StartPos == 2)
    {
        goto trough_Bank;
    }
    if(StartPos == 3)
    {
        goto trough_RC;
    }

    cout << endl << "How Many Trips Would You Like To Make: ";
    cin >> times;

    cout << endl << "Starting in 3...";
    Sleep(1000);
    cout << endl << "Starting in 2...";
    Sleep(1000);
    cout << endl << "Starting in 1..." ;
    Sleep(1000);
    cout << endl << "In Progress..." << endl;

    while (done < times)
    {
        SetCursorPos(622, 443);                                 //click bank
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(2500);

        SetCursorPos(697, 679);                                 //deposite all
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(1500);

        SetCursorPos(691, 256);                                 //pure ess
        Sleep(500);
        mouse_event(MOUSEEVENTF_RIGHTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_RIGHTUP, x, y, 0, 0);
        Sleep(750);

        SetCursorPos(681, 368);                                 //withdrawl
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(1500);

        SetCursorPos(973, 748);                                 //move south in bank
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(4500);

        SetCursorPos(760, 529);                                 //move south out of bank
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(8500);

        SetCursorPos(1315, 294);                                 //move south-west to fairy ring
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(19000);

        trough_RC:
        SetCursorPos(1313, 298);                                 //move south to agility 1
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(16500);

        SetCursorPos(722, 438);                                 //move throu agility 1
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(5000);

        SetCursorPos(1217, 227);                                 //move south to agility 2
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(5500);

        SetCursorPos(705, 475);                                 //move south thou agility 2
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(5500);

        SetCursorPos(693, 750);                                 //move south of agility 1
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(3500);

        SetCursorPos(601, 758);                                 //move south of large rock
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(5500);

        SetCursorPos(825, 625);                                 //move south to ruin pillar
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(3500);

{       SetCursorPos(592, 727);
        POINT g;
        Sleep(250);
        GetCursorPos(&g);
        x = g.x;
        y = g.y;

        HDC hDc = GetDC(NULL);
        COLORREF color = GetPixel(hDc, g.x, g.y);
        BYTE redValue3, greenValue3, blueValue3;
        redValue3 = GetRValue(color);
        greenValue3 = GetGValue(color);
        blueValue3 = GetBValue(color);

        if(redValue3 <= 215 && redValue3 >= 195 &&  greenValue3 <= 160 && greenValue3 >= 140 && blueValue3 <= 245 && blueValue3 >= 224)
        {
            //dream.in.code
        }
        else
        {
            last = "entering altar";
            goto yanille;
        }

        SetCursorPos(601, 758);                                 //enter cosmic altar
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(10500);

        POINT p;
        SetCursorPos(692, 75);
        Sleep(250);
        GetCursorPos(&p);
        x = p.x;
        y = p.y;

        HDC hDC = GetDC(NULL);
        color = GetPixel(hDC, p.x, p.y);
        BYTE redValue, greenValue, blueValue;
        redValue = GetRValue(color);
        greenValue = GetGValue(color);
        blueValue = GetBValue(color);

        if(redValue >= 5 && greenValue >= 5 && blueValue >= 5)   // if south portal
        {
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //runecraft
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(8500);
            SetCursorPos(733, 281);
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move north of altar
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(4500);
            SetCursorPos(676, 483);
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //exit position
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            Sleep(3500);

            last = "south";

            south++;
        }
        else
        {
            POINT p;
            SetCursorPos(241, 499);
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

            if(redValue >= 5 && greenValue >= 5 && blueValue >= 5)   // if east portal
            {
                mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move east
                mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                Sleep(5000);
                mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move east
                mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                Sleep(5000);
                SetCursorPos(236, 430);
                mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //runecraft
                mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                Sleep(6000);
                SetCursorPos(632, 365);
                mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //exit position
                mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                Sleep(3500);

                last = "east";

                east++;
            }
            else
            {
                POINT p;
                SetCursorPos(871, 483);
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

                if(redValue >= 5 && greenValue >= 5 && blueValue >= 5)   // if west portal
                {
                    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move east
                    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                    Sleep(2500);
                    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move east
                    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                    Sleep(2500);
                    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move east
                    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                    Sleep(2500);
                    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move east
                    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                    Sleep(2500);
                    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move east
                    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                    Sleep(2500);
                    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move east
                    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                    Sleep(2500);
                    SetCursorPos(802, 332);
                    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //runecraft
                    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                    Sleep(4500);
                    SetCursorPos(781, 280);
                    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move above altar
                    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                    Sleep(4500);
                    SetCursorPos(685, 483);
                    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //exit position
                    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                    Sleep(4500);

                    last = "west";

                    west++;
                }
                else
                {
                    POINT p;
                    SetCursorPos(750, 598);
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

                    if(redValue >= 5 && greenValue >= 5 && blueValue >= 5)   // if north portal
                    {
                        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move south
                        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                        Sleep(2500);
                        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move south
                        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                        Sleep(2500);
                        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move south
                        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                        Sleep(2500);
                        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move south
                        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                        Sleep(2500);
                        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move south
                        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                        Sleep(2500);
                        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //move south
                        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                        Sleep(2500);
                        SetCursorPos(559, 495);
                        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);      //runecraft
                        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
                        Sleep(4500);

                        last = "north";

                        north++;
           }}}}

        SetCursorPos(665, 68);                                          //exit altar north
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(12500);

        SetCursorPos(807, 99);
        POINT q;
        Sleep(250);
        GetCursorPos(&q);
        x = q.x;
        y = q.y;

        HDC hdc = GetDC(NULL);
        color = GetPixel(hdc, q.x, q.y);
        BYTE redValue2, greenValue2, blueValue2;
        redValue2 = GetRValue(color);
        greenValue2 = GetGValue(color);
        blueValue2 = GetBValue(color);

        if(redValue2 <= 255 && redValue2 >= 246 && greenValue2 <= 251 && greenValue2 >= 234 && blueValue2 <= 209 && blueValue2 >= 191)
        {
            //dream.in.code
        }
        else
        {
            last = "exiting altar";
            goto yanille;
        }}

        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);                 //north throu agility 2
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(10500);

        SetCursorPos(1073, 189);                                        //north throu agility 1
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(9000);

        SetCursorPos(1193, 87);                                        //north of lil lake
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(18500);

        trough_Bank:
        SetCursorPos(758, 90);                                        //north to point renew
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(9500);

        SetCursorPos(29, 123);                                        //north-west to bank
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(16000);

        SetCursorPos(472, 421);                                      //to bank spot
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(3500);

        SetCursorPos(592, 651);
        POINT a;
        Sleep(250);
        GetCursorPos(&a);
        x = a.x;
        y = a.y;

        HDC hdC = GetDC(NULL);
        COLORREF color = GetPixel(hdC, a.x, a.y);
        BYTE redValue4, greenValue4, blueValue4;
        redValue4 = GetRValue(color);
        greenValue4 = GetGValue(color);
        blueValue4 = GetBValue(color);

        if(redValue4 <= 257 && redValue4 >= 245 && greenValue4 <= 244 && greenValue4 >= 226 && blueValue4 <= 167 && blueValue4 >= 154)
        {
            //dream.in.code
        }
        else
        {
            last = "banking";
            goto yanille;
        }

        done++;
    }

    cout << endl << endl << "Runecrafter Finished.";
    cout << endl << endl << "(y/n) Again: ";
    cin >> choice;
    if (choice == "y")
    {
        system("cls");
        goto start;
    }

    end:
        if(done == times)
        {
            cout << endl << "Runecrafter Complete!" << endl;

        }
        else
        {
            cout << endl << "Runecrafter Failed." << endl;
            cout << endl << "Fail Point was: " << (string)last;
            cout << endl << "Total Trip Complete: " << (int)done;
            cout << endl << "   North Portal Trips: " << (int)north;
            cout << endl << "   South Portal Trips: " << (int)south;
            cout << endl << "    East Portal Trips: " << (int)east;
            cout << endl << "    West Portal Trips: " << (int)west << endl;
        }

    cout << endl << "(y/n) Again: ";
    cin >> choice;
    if (choice == "y")
    {
        system("cls");
        goto start;
    }
    return 0;

        yanille:
        if (fails == 5)
        {
            goto end;
        }

        cout << endl << "trip: " << (int)done;
        cout << endl << "error at: " << (string)last;

        SetCursorPos(1162, 291);                                      //home teles
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(1500);

        SetCursorPos(581,490);                                      //tele to yanille
        Sleep(250);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(18000);

        SetCursorPos(694, 65);                                      //to oak tree
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(8500);

        SetCursorPos(643, 360);
        POINT z;
        Sleep(250);
        GetCursorPos(&z);
        x = z.x;
        y = z.y;

        HDC hDc = GetDC(NULL);
        COLORREF color = GetPixel(hDc, z.x, z.y);
        BYTE redValue5, greenValue5, blueValue5;
        redValue5 = GetRValue(color);
        greenValue5 = GetGValue(color);
        blueValue5 = GetBValue(color);

        if(redValue5 <= 116 && redValue5 >= 96 &&  greenValue5 <= 102 && greenValue5 >= 78 && blueValue5 <= 64 && blueValue5 >= 41)
        {
            //dream.in.code
        }
        else
        {
            cout << endl << endl << "red: " << (int)redValue5;
            cout << endl << "green: " << (int)greenValue5;
            cout << endl << "blue: " << (int)blueValue5;
            last = "yanille";
            fails++;
            goto yanille;
        }



        SetCursorPos(610, 74);                                      //to fairy ring
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(13500);

        SetCursorPos(692, 713);
        POINT j;
        Sleep(250);
        GetCursorPos(&j);
        x = j.x;
        y = j.y;

        HDC hDC = GetDC(NULL);
        COLORREF colOr = GetPixel(hDC, j.x, j.y);
        BYTE redValue6, greenValue6, blueValue6;
        redValue6 = GetRValue(colOr);
        greenValue6 = GetGValue(colOr);
        blueValue6 = GetBValue(colOr);

        if(redValue6 <= 265 && redValue6 >= 245 &&  greenValue6 <= 258 && greenValue6 >= 236 && blueValue6 <= 218 && blueValue6 >= 195)
        {
            //dream.in.code
        }
        else
        {
            cout << endl << endl << "red: " << (int)redValue6;
            cout << endl << "green: " << (int)greenValue6;
            cout << endl << "blue: " << (int)blueValue6;
            last = "fairy ring";
            fails++;
            goto yanille;
        }

        SetCursorPos(1209, 216);                                      //to return spot spot
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        Sleep(5500);

        fails = 0;

        if(last == "entering altar")
        {
            goto trough_RC;
        }
        else
        {
            goto trough_Bank;
        }

}
