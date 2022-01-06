#pragma once
#ifndef PET_H
#define PET_H
#include <iostream>

using namespace std;

class pet
{
public:
	pet(int hunger=0, int boredom=0)  {}
	~pet() {}
	virtual void talk() {}
	void feed(int food=4) {}
	void play(int fun=4) {}
private:
	int m_hunger = 0;
	int m_boredom = 0;
protected:
	inline const int GetMood() { return m_hunger; return m_boredom; }
	void passingTime(int time = 0) {}
};

#endif // !PET_H

