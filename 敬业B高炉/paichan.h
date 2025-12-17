#pragma once
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<fstream>
using namespace std;


struct product
{
	string type;
	int left_number = 0;
	int weight = 0;
	int price = 0;
	int chosen_time = 0;
	//int everytime_num_max = 1;
	bool flag = 1;//Õë¶ÔR,L½áÎ²µÄ×©
};

class paichan
{
public:
	//void input();
	void getprice(int);
	//void changenum(int);
	void initialize();
	void clear(int);
	void backpack(int, int, int, ofstream&);
	void process(ofstream&, ofstream&);
	void printout(int, int, ofstream&);
	bool is_success();
private:
	product bricks[50];
};