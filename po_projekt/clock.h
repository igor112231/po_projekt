#pragma once
#include <string>

using namespace std;

class Clock
{
public:
	virtual ~Clock() = default;
	virtual string SetTime() = 0;
	void PlayMusic();
	void SetHour();
};