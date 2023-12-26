#include "automobile.h"
#include <iostream>
using namespace std;

void swimming_pool::setlength(float len)
{
	length = len;
}
void swimming_pool::setwidth(float wid)
{
	width = wid;
}
void swimming_pool::setdepth(float dep)
{
	depth = dep;
}
void swimming_pool::setrate(float rat)
{
	rate = rat;
}
void swimming_pool::setvolume(float len, float wid, float dep)
{
	vol1 = len * wid * dep;
}
float swimming_pool::getlength()
{
	return length;
}
float swimming_pool::getwidth()
{
	return width;
}
float swimming_pool::getdepth()
{
	return depth;
}
float swimming_pool::getrate()
{
	return rate;
}
float swimming_pool::getvolume1()
{
	return vol1;
}
float swimming_pool::amountofwater(float volu)
{
	return volu * 7.48;
}
