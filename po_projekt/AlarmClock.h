#pragma once
#include "clock.h"
#include <ctime>
#include <string>
class AlarmClock :Clock
{
public:
	explicit AlarmClock(int ww, int hh, int mm, int ss, string message);		//passing time when it will call
	string SetTime() override;
private:
	int ww, hh, mm, ss;
	string message;
};