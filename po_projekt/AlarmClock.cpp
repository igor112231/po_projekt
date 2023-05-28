#define _CRT_SECURE_NO_WARNINGS
#include"AlarmClock.h"
#include "clock.h"
#include "Timer.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

AlarmClock::AlarmClock(int ww, int hh, int mm, int ss, string message) : ww(ww), hh(hh),mm(mm),ss(ss), message(message){}

string AlarmClock::SetTime()												//add "add message
{ 
	string dow[7] = {"Sun", "Mon", "Tue","Wed","Thu","Fri","Sat" }; 

	while(1)
	{
		cout <<"write number of day of the week (\"SUN\", \"MON\", \"TUE\",\"WED\",\"THU\",\"FRI\",\"SAT\")"<<endl;
		cin >> ww;
		if (ww > 7 || ww < 1)
			cout << "incorect number";
		else
			break;
	}
	ww--;
	cout << "write hh" << endl;
	cin >> hh;
	cout << "write mm" << endl;
	cin >> mm;
	cout << "write message" << endl;
	cin >> message;


	time_t now = time(0);
	char dt[26];
	string acttime,day;
	string setted= to_string(ww) + to_string(hh) + to_string(mm);
	//cout << setted << endl;
	tm* ltm = localtime(&now);
	while (acttime != setted)
	{
		
		now = time(0);
		ltm = localtime(&now);
		cout <<"actual time: "<< ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
		acttime = to_string(ltm->tm_wday) + to_string(ltm->tm_hour) + to_string(ltm->tm_min);
		Sleep(1000);
		system("cls");
		//cout << acttime<<" "<<ltm->tm_sec << endl;
	}
	cout << "time's up" << endl<<message<<endl;
	PlayMusic();


	return ""; 
};