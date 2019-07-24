#include <iostream>
#include <string>
#include <time.h>
#include <fstream>
#include <sstream>
#include<stdlib.h>
#include<direct.h>
using namespace std;

class farm
{
public:
	char Farmer();   //农场主昵称，可修改
	string readFileIntoString(char * filename);
        int Gold();      //金币
	int reset_gold();
	char rename();   //设置/重置姓名
	char welcome();
	
private:
	char farmer;   //农场主昵称
	int g;   //金币数量
};

class grow
{
	public:
	friend farm;
	
	string SeedTime_m();
	string SeedTime_d();
	string SeedTime_h();
	string SeedTime_min();
	string SeedTime_s();
	void setfile();
	void devide_m();
	void devide_d();
	void devide_h();
	void devide_min();
	void devide_s();
	
	int reap(int time1,int time2);
	string ReapTime();
	int turn1();//turn1是转化得到种植作物时间对应比较值的函数
	int turn2();//turn2是转化得到查看作物是否成熟时间对应比较值的函数
	string readFileIntoString(char * filename);
	string prem();
	string pred();
	string preh();
	string premin();
	string pres();
	
private:
	int xuhao;     //作物序号
	int time;
	int price;
	int income;
	char name;
	
}; 
