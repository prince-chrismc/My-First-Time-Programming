#include <windows.h>
#include <iostream>
#include "resource.h"
using namespace std;

int main ()
{
    SetConsoleTitle("Cit Woodchip Shovel");
    string choice;
    int x;
    int y;
    int run;
    int done = 0;
    string division;

    start:

    cout << "Cit Woodchip Shovel" ;
    cout << endl << "Version 1.0" << endl;

    cout << endl << "Stand on the inside of North-west bucket and North Kiln.";
    cout << endl << "Insert number of woodchips to shovel than press 'enter' to begin... ";
    cout << endl << "Note: Each bucket is approx 8 ressources." << endl;
    Sleep(500);

    cout << endl << "Number of buckets to shovel: ";
    cin >> run;

    cout << endl << "If there are multiple clannies, select division method...";
    cout << endl << "a: alone, all four buckets";
    cout << endl << "b: north kiln";
    cout << endl << "c: south kiln";
    cout << endl << "d: west buckets";
    cout << endl << "e: east buckets";
    cin >> division;

    cout << endl << "Starting in 3...";
    Sleep(1000);
    cout << endl << "Starting in 2...";
    Sleep(1000);
    cout << endl << "Starting in 1...";
    Sleep(1000);
    cout << endl << "In progress..." << endl;

    while(done <= run)
    {
      SetCursorPos(602, 404);
    }





