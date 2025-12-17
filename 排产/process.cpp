#include"paichan.h"

int First_batch = 8;
int First_batch_day = 3;
int Second_batch = 10;
int Second_batch_day = 6;
int Third_batch = 18;
int Third_batch_day = 8;
int Fourth_batch = 38;
int Fourth_batch_day = 11;
int Fifth_batch = 45;
int Fifth_batch_day = 29;
int MAX_WEIGHT = 2200;
int maxnum1 = 1;
int maxnum2 = 2;

void paichan::process(ofstream& outFile,ofstream& outFile1)
{
	
	for (int day = 1; day <= First_batch_day; day++)
	{
		clear(First_batch);
		outFile1 << "第" << day << "天" << endl;
		outFile1 << "开始进行编排..." << endl;
		outFile1 << endl;
		getprice(First_batch);
		backpack(First_batch, MAX_WEIGHT, maxnum1, outFile1);
		outFile1 << endl;
		printout(First_batch, outFile);
	}
	for (int day = First_batch_day+1; day <= Second_batch_day; day++)
	{
		clear(Second_batch);
		outFile1 << "第" << day << "天" << endl;
		outFile1 << "开始进行编排..." << endl;
		outFile1 << endl;
		getprice(Second_batch);
		backpack(Second_batch, MAX_WEIGHT, maxnum1, outFile1);
		outFile1 << endl;
		printout(Second_batch, outFile);
	}
	
	for (int day = Second_batch_day+1; day <= Third_batch_day; day++)
	{
		clear(Third_batch);
		outFile1 << "第" << day << "天" << endl;
		outFile1 << "开始进行编排..." << endl;
		outFile1 << endl;
		getprice(Third_batch);
		backpack(Third_batch, MAX_WEIGHT, maxnum1, outFile1);
		outFile1 << endl;
		printout(Third_batch, outFile);
	}
	
	for (int day = Third_batch_day + 1; day <= Fourth_batch_day; day++)
	{
		clear(Fourth_batch);
		outFile1 << "第" << day << "天" << endl;
		outFile1 << "开始进行编排..." << endl;
		outFile1 << endl;
		getprice(Fourth_batch);
		backpack(Fourth_batch, MAX_WEIGHT, maxnum1, outFile1);
		outFile1 << endl;
		printout(Fourth_batch, outFile);
	}
	
	//changenum(Fifth_batch);
	for (int day = Fourth_batch_day + 1; day <= Fifth_batch_day; day++)
	{
		clear(Fifth_batch);
		outFile1 << "第" << day << "天" << endl;
		outFile1 << "开始进行编排..." << endl;
		outFile1 << endl;
		getprice(Fifth_batch);
		backpack(Fifth_batch, MAX_WEIGHT, maxnum2, outFile1);
		outFile1 << endl;
		printout(Fifth_batch, outFile);
	}
	cout << "编排完成！" << endl;
	cout << endl;
}