#pragma once
#include "clock.h"

class Timer:Clock
{
public:
	explicit Timer(int hh, int mm, int ss);
	~Timer() {};
	string SetTime() override;
private:
	int hh, mm, ss;
};