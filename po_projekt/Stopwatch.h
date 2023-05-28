#pragma once
#include <iostream>
#include <vector>
#include "clock.h"


class Stopwatch :Clock
{
public:
	explicit Stopwatch(int hh, int mm, int ss, int ms, vector<string> laps);		//passing time when it will call
	string SetTime() override;
private:
	int  hh, mm, ss, ms;
	vector<string> laps;
};