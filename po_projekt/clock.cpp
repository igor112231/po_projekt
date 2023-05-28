#include "clock.h"
#include "Timer.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <conio.h>
#include <mmsystem.h>
#if defined(_MSC_VER)
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "shlwapi.lib")
#endif


void Clock::PlayMusic()     
{
    fstream fp;
    char c_song[100] = "alarm.wav";
    fp.open(c_song, ios::in);
    if (!fp)
    {
        cout << "\n Cannot find the file";
    }
    else
    {
        string input;
        cout << "\nDon't you dare to press anything to stop this song";

        PlaySound(TEXT("alarm.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

        //cin >> input;
        _getch();
        PlaySound(0, 0, 0);
        fp.close();
    }
}

