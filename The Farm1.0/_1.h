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
	char Farmer();   //ũ�����ǳƣ����޸�

	string readFileIntoString(char * filename);
    int Gold();      //���
	int reset_gold();
	char rename();   //����/��������
	char welcome();
private:
	char farmer;   //ũ�����ǳ�
	int g;   //�������
};

class grow
{

public:

	friend farm;
	void setfile();

	string SeedTime_m();
	string SeedTime_d();
	string SeedTime_h();
	string SeedTime_min();
	string SeedTime_s();
	
	void devide_m();
	void devide_d();
	void devide_h();
	void devide_min();
	void devide_s();
	
	int reap(int time1,int time2);
	string ReapTime();
	int turn1();//turn1��ת���õ���ֲ����ʱ���Ӧ�Ƚ�ֵ�ĺ���
	int turn2();//turn2��ת���õ��鿴�����Ƿ����ʱ���Ӧ�Ƚ�ֵ�ĺ���
	string readFileIntoString(char * filename);
	string prem();
	string pred();
	string preh();
	string premin();
	string pres();
private:
	int xuhao;     //�������
	char name;
	int time;
	int price;
	int income;
}; 
