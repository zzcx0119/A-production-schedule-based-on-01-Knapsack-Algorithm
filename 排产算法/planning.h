#pragma once
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<fstream>
using namespace std;


struct product
{
	string type = "D";
	string rl = "R";
	int order;
	int num;
	int left_number = 0;
	int weight = 0;
	int price = 0;
	int chosen_time = 0;
	bool flag = 1;//Õë¶ÔR,L½áÎ²µÄ×©
};

class paichan
{
public:
	void input();
	void getprice(int);
	void initialize();
	void clear(int);
	void backpack(int, int, ofstream&);
	void process(ofstream&, ofstream&);
	void printout(int, int, ofstream&);
	bool is_success();
	string project;
	int dnum;
	int bnum;
	int fnum;
	int sum;
	int MAX_WEIGHT;
	int day;
private:
	product bricks[50];
};