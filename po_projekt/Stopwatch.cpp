#include"Stopwatch.h"
#include <conio.h>
#include <Windows.h>
#include <string>


Stopwatch::Stopwatch(int hh, int mm, int ss, int ms, vector<string> laps) :hh(hh), mm(mm), ss(ss), ms(ms), laps(laps) { hh = 0; mm = 0; ss = 0; ms = 0; }

string Stopwatch::SetTime()
{
	string time;
	bool cont = true;
	char letter;
	system("cls");
	cout << "press any key to start stopwatch" << endl;
	_getch();
	while (cont)
	{
		
		while (!_kbhit())
		{
			cout << "1: make new lap\n2: stop\n3: reset laps\n4:exit" << endl << endl ;
			Sleep(500);
			system("cls");
			ms += 500;
			if (ms == 1000)
			{
				ss++;
				ms = 0;
			}
			if (ss > 59)
			{
				mm++;
				ss = 0;
			}
			if (mm > 59)
			{
				hh++;
				mm = 0;
			}
			cout <<"time: " << hh << ":" << mm << ":" << ss << ":" << ms << endl;
			if (!laps.empty())
			{
				cout << endl << endl << "lap no.\t time" << endl;
				for (int i = 0; i < laps.size(); i++)
				{
					cout << i + 1 << "\t" << laps[i] << endl;
				}
			}
			cout << endl << endl;;
		}
		letter = _getch();



		
		switch (letter)
		{
		case '1':
			time = to_string(hh) +":"+ to_string(mm) + ":" + to_string(ss) + ":" + to_string(ms);
			laps.push_back(time);
			break;
		case '2':
			while (cont) {
				_getch();
				cont = false;
			}
			cont = true;
			break;
		case '3':
			laps.clear();	
			break;
		case '4':
			cont = false;
		default:
			continue;
		}

		//time = to_string(hh) + to_string(mm) + to_string(ss) + to_string(ms);
	}
	return "";
}