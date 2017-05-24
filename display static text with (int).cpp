#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
    int done = 0;
    int bars = 0;
    const int items = 28;
    const int twnyfour = 24;
    int digits1;
    int digits2;
    int num;
    string choice;

    start:
    while(done < 100)
    {
        Sleep(50);
        done++;
        bars++;

        bars = (int)done * items;
        if(done >= 0)
        {
            cout << "trips: " << (int)done << ".";
            cout << endl << "barss: " << (int)bars << ".";
        }
        if(done >= 0){digits1 = 1;
            if(done >= 10){ digits1 = 2;
                if(done >= 100) {digits1 = 3;
                    if(done >= 1000) {digits1 = 4;
                        if(done >= 10000) {digits1 = 5;
                        } if (done > 10000) { cout << " maxium reached... please restart.";
                        goto start;}}}}}
        if(bars >= 0){digits2 = 1;
            if(bars >= 10){ digits2 = 2;
                if(bars >= 100) {digits2 = 3;
                    if(bars >= 1000) {digits2 = 4;
                        if(bars >= 10000) {digits2 = 5;
                        } if (bars > 10000) { cout << " maxium reached... please restart.";
                        goto start;}}}}}
        num = digits1 + digits2 + twnyfour;
        while(num > 0)
        {
            cout << '\b';
            num--;
        }
    }
}

