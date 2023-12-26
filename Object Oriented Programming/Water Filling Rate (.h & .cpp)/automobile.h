#pragma once
#pragma once
#include <iostream>
using namespace std;

class swimming_pool
{
private:
	float length;
	float width;
	float depth;
	float rate;
	float vol1;
public:


	void setlength(float len);
	void setwidth(float wid);
	void setdepth(float dep);
	void setrate(float rat);
	void setvolume(float len, float wid, float dep);

	float getlength();
	float getwidth();
	float getdepth();
	float getrate();
	float amountofwater(float volu);
	float getvolume1();
};
