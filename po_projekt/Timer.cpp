#include "Timer.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <mmsystem.h>
#if defined(_MSC_VER)
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "shlwapi.lib")
#endif

using namespace std;

Timer::Timer(int hh, int mm, int ss) : hh(hh), mm(mm), ss(ss) {}

string Timer::SetTime()
{
    cout << "write hh" << endl;
    cin >> hh;
    cout << "write mm" << endl;
    cin >> mm;
    cout << "write ss" << endl;
    cin >> ss;
    cin.clear();
    system("cls");

    for (hh; hh >= 0; hh--) 
    {
        for (mm; mm >= 0; mm--) 
        {
            for (ss; ss >= 0; ss--) 
            {
                system("cls");
                cout << "\n" << hh << ":" << mm << ":" << ss;
                Sleep(1000);
            }
            ss = 60;
        }
        mm = 60;
    }
    PlayMusic();
    /*for (int i = 0; i < 5; i++)         //wyszlo lepiej niz sie spodziewalem xD
    {
        system("cls");
        Beep(523, 1000);
        cout << "Time's up";
        Sleep(400);
        system("cls");
        Sleep(100);
        cout << "Time's up";
        Sleep(400);
        system("cls");
        Sleep(100);
        cout << "Time's up";
    }*/
    return "";
}

