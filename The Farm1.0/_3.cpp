#include"_1.h"

string getTime()    //��������grow
{
    time_t timep;
    time (&timep);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y%m%d%H%M%S",localtime(&timep) );
    return tmp;
}
//�������»��ߺ�׺�ĺ�����Ϊ�������� ʱ��
string grow::SeedTime_m()
{
string time = getTime();
string a,b,c,d,e,f;
 ofstream ate;
a=time.substr(0,4);
b=time.substr(4,2);
c=time.substr(6,2);
d=time.substr(8,2);
e=time.substr(10,2);
f=time.substr(12,2);
char filename[30]="D://TheFarm//seedtime.txt";
ate.open(filename,ostream::ate);/*�����ģʽ���ļ�*/ 
ate<<getTime(); /*д������*/ 
ate.close(); /*�ر��ļ�*/ 
ate.clear(); /*����*/
return b;
}


string grow::SeedTime_d()
{
string time = getTime();
string a,b,c,d,e,f;
ofstream ate;
a=time.substr(0,4);
b=time.substr(4,2);
c=time.substr(6,2);
d=time.substr(8,2);
e=time.substr(10,2);
f=time.substr(12,2);
char filename[30]="D://TheFarm//seedtime.txt";
ate.open(filename,ostream::ate);/*�����ģʽ���ļ�*/ 
ate<<getTime(); /*д������*/ 
ate.close(); /*�ر��ļ�*/ 
ate.clear(); /*����*/
return c;
}

string grow::SeedTime_h()
{
string time = getTime();
string a,b,c,d,e,f;
ofstream ate;
a=time.substr(0,4);
b=time.substr(4,2);
c=time.substr(6,2);
d=time.substr(8,2);
e=time.substr(10,2);
f=time.substr(12,2);
char filename[30]="D://TheFarm//seedtime.txt";
ate.open(filename,ostream::ate);/*�����ģʽ���ļ�*/ 
ate<<getTime(); /*д������*/ 
ate.close(); /*�ر��ļ�*/ 
ate.clear(); /*����*/
return d;
}

string grow::SeedTime_min()
{
string time = getTime();
string a,b,c,d,e,f;
ofstream ate;
a=time.substr(0,4);
b=time.substr(4,2);
c=time.substr(6,2);
d=time.substr(8,2);
e=time.substr(10,2);
f=time.substr(12,2);
char filename[30]="D://TheFarm//seedtime.txt";
ate.open(filename,ostream::ate);/*�����ģʽ���ļ�*/ 
ate<<getTime(); /*д������*/ 
ate.close(); /*�ر��ļ�*/ 
ate.clear(); /*����*/
return e;
}

string grow::SeedTime_s()
{
string time = getTime();
string a,b,c,d,e,f;
ofstream ate;
a=time.substr(0,4);
b=time.substr(4,2);
c=time.substr(6,2);
d=time.substr(8,2);
e=time.substr(10,2);
f=time.substr(12,2);
char filename[30]="D://TheFarm//seedtime.txt";
ate.open(filename,ostream::ate);/*�����ģʽ���ļ�*/ 
ate<<getTime(); /*д������*/ 
ate.close(); /*�ر��ļ�*/ 
ate.clear(); /*����*/
return f;
}


void grow::devide_m()
{
	ofstream ate;
	ofstream ofile("D://TheFarm//premonth.txt");
	char filename[30]="D://TheFarm//premonth.txt";   
ate.open(filename,ostream::ate);/*�����ģʽ���ļ�*/ 
ate<<SeedTime_m(); /*д������*/ 
ate.close(); /*�ر��ļ�*/ 
ate.clear(); /*����*/
}

void grow::devide_d()
{
	ofstream ate;
	ofstream ofile("D://TheFarm//preday.txt");
	char filename[30]="D://TheFarm//preday.txt";   
ate.open(filename,ostream::ate);/*�����ģʽ���ļ�*/ 
ate<<SeedTime_d(); /*д������*/ 
ate.close(); /*�ر��ļ�*/ 
ate.clear(); /*����*/
}

void grow::devide_h()
{
	ofstream ate;
	ofstream ofile("D://TheFarm//prehour.txt");
	char filename[30]="D://TheFarm//prehour.txt";   
ate.open(filename,ostream::ate);/*�����ģʽ���ļ�*/ 
ate<<SeedTime_h(); /*д������*/ 
ate.close(); /*�ر��ļ�*/ 
ate.clear(); /*����*/
}

void grow::devide_min()
{
	ofstream ate;
	ofstream ofile("D://TheFarm//premin.txt");
	char filename[30]="D://TheFarm//premin.txt";   
ate.open(filename,ostream::ate);/*�����ģʽ���ļ�*/ 
ate<<SeedTime_min(); /*д������*/ 
ate.close(); /*�ر��ļ�*/ 
ate.clear(); /*����*/
}

void grow::devide_s()
{
	ofstream ate;
	ofstream ofile("D://TheFarm//presecond.txt");
	char filename[30]="D://TheFarm//presecond.txt";   
ate.open(filename,ostream::ate);/*�����ģʽ���ļ�*/ 
ate<<SeedTime_s(); /*д������*/ 
ate.close(); /*�ر��ļ�*/ 
ate.clear(); /*����*/
}








string grow::ReapTime()
{
string time = getTime();
string a2,b2,c2,d2,e2,f2;
 ofstream ate;
a2=time.substr(0,4);
b2=time.substr(4,2);
c2=time.substr(6,2);
d2=time.substr(8,2);
e2=time.substr(10,2);
f2=time.substr(12,2);
char filename2[30]="D://TheFarm//reaptime.txt";
ate.open(filename2,ostream::ate);/*�����ģʽ���ļ�*/
ate<<getTime();   /*д������*/
ate.close();   /*�ر��ļ�*/
ate.clear();   /*����*/

return a2,b2,c2,d2,e2,f2;
}


int grow::turn2()
{
	string m,d,h,min,s;
	m=SeedTime_m();
	d=SeedTime_d();
	h=SeedTime_h();
	min=SeedTime_min();
	s=SeedTime_s();
	int time=0,temp=0;
	stringstream ss;
	ss<<m;
	ss>>temp;
	time+=temp*=100000000;//�µ�������
	ss.clear();
	ss<<d;
	ss>>temp;
	time+=temp*1000000;//�յ�������
	ss.clear();

	ss<<h;
	ss>>temp;
	time+=temp*=10000;//ʱ��������
	ss.clear();

	ss<<min;
	ss>>temp;
	time+=temp*=100;//�ֵ�������
	ss.clear();

	ss<<s;
	ss>>temp;
	time+=temp;//���������
	return time;
}




//�����Ǵ��ı��ļ��л�ȡ����ʱ��Ĳ���
string grow::readFileIntoString(char * filename)
	{
ifstream ifile(filename);
//���ļ����뵽ostringstream����buf��
ostringstream buf;
char ch;
while(buf&&ifile.get(ch))
buf.put(ch);
//������������buf�������ַ���
return buf.str();
}
 
 
string grow::prem()
{
//�ļ���
char * fn="D://TheFarm//premonth.txt";
string str;
str=readFileIntoString(fn);
return str;
}

string grow::pred()
{
//�ļ���
char * fn="D://TheFarm/preday.txt";
string str;
str=readFileIntoString(fn);
return str;
}

string grow::preh()
{
//�ļ���
char * fn="D://TheFarm/prehour.txt";
string str;
str=readFileIntoString(fn);
return str;
}

string grow::premin()
{
//�ļ���
char * fn="D://TheFarm/premin.txt";
string str;
str=readFileIntoString(fn);
return str;
}

string grow::pres()
{
//�ļ���
char * fn="D://TheFarm/presecond.txt";
string str;
str=readFileIntoString(fn);
return str;
}

int grow::turn1()
{
	string m,d,h,min,s;
	m=prem();
	d=pred();
	h=preh();
	min=premin();
	s=pres();
	int time=0,temp=0;
	stringstream ss;
	ss<<m;
	ss>>temp;
	time+=temp*=100000000;//�µ�������
	ss.clear();
	ss<<d;
	ss>>temp;
	time+=temp*1000000;//�յ�������
	ss.clear();

	ss<<h;
	ss>>temp;
	time+=temp*=10000;//ʱ��������
	ss.clear();

	ss<<min;
	ss>>temp;
	time+=temp*=100;//�ֵ�������
	ss.clear();

	ss<<s;
	ss>>temp;
	time+=temp;//���������
	return time;
}

int grow::reap(int time1,int time2)
{
	int cost=1200;
	int k=0,add_gold=0,k1=0,k2=0,k3=0,k4=0;   //���У�add_gold ��Ϊ����������ֵ������Ϊreset_gold()�����ж��Ƿ��������
	time1=turn1();
	time2=turn2();
	k=cost-(time2-time1);  //k����������ȷ�������Ƿ����
	if((time2-time1)>=cost)
	{
		cout<<"�����ѳ��죬���ջ�ɣ�"<<endl;
		add_gold=1;
	}
	else
	{
	do
	{
	if(k>86400)
	{
		k1=k/86400;   //��
		k=k%86400;
	}
	else if(k>3600&&k<86400)
	{
		k2=k/3600;   //ʱ
		k=k%3600;
	}
	else if(k<3600&&k>60)
	{
		k3=k/60;    //��
		k=k%60;
	}
	else if(k<60)
	{
		k4=k;     //��
		k=0;
		
	}
	}while(k!=0);
		cout<<"����δ���죬�ٵȵȰɣ�"<<endl;
		cout<<"���ﻹ��Ҫ��";
		if(k1)
		{
			cout<<k1<<"��";
		}
		if(k2)
		{
			cout<<k2<<"Сʱ";
		}
		if(k3)
		{
			cout<<k3<<"��";
		}
		if(k4)
		{
			cout<<k4<<"��";
		}
		cout<<"����";
	}
	return add_gold;
}

void grow::setfile()  //��������ı����ļ���
{
	 string dirName = "D://TheFarm";
    _mkdir(dirName.c_str()); 
}
