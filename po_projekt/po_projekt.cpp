#include "AlarmClock.h"
#include "Timer.h"
#include "Stopwatch.h"
#include <iostream>
#include <conio.h> 


using namespace std;

int main()
{
    char whattl;
    Timer timer(0, 0, 0);
    //timer.SetTime();
    AlarmClock alarmclock(1,0, 0, 0, "");
    //alarmclock.SetTime();
    //while (!_kbhit())
    //{
    //    cout << "nope";
    //}
    vector<string> vect;
    Stopwatch stopwatch(0, 0, 0, 0, vect);
    //stopwatch.SetTime();
    int lol = 0;
    while (lol==0)
    {
        cout << "What do you want to launch?\n1: timer\n2: alarmclock\n3: stopwatch\nx: exit"<<endl;   
        cin >> whattl;

        switch (whattl)
        {
        case '1':
            timer.SetTime();
            break;
        case '2':
            alarmclock.SetTime();
            break;
        case '3':
            stopwatch.SetTime();
            break;
        /*case '4':
            cout << "nr 4 sw" << endl;
            system("po_projekt1.exe");
            break;*/
        case'x':
            lol = 1;
            break;
        }
   
    }
}
