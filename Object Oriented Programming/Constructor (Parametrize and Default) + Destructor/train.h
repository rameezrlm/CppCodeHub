#pragma once
class Train
{
private:
	int numbersofseats;
	int numberofdoors;
	char* color;
public:
	void setNumberofseat(int s);
	void setnumberofdoors(int d);
	void setcolor(char* clr);

	int getNumberofseat();
	int getnumberofdoors();
	char* getcolor();
	Train(int, int, char*,int);
	Train();

	~Train();
};