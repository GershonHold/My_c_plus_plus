#include"_1.h"

string getTime()    //不属于类grow
{
    time_t timep;
    time (&timep);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y%m%d%H%M%S",localtime(&timep) );
    return tmp;
}
//以下有下划线后缀的函数均为返回日期 时间
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
ate.open(filename,ostream::ate);/*以添加模式打开文件*/ 
ate<<getTime(); /*写入数据*/ 
ate.close(); /*关闭文件*/ 
ate.clear(); /*清理*/
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
ate.open(filename,ostream::ate);/*以添加模式打开文件*/ 
ate<<getTime(); /*写入数据*/ 
ate.close(); /*关闭文件*/ 
ate.clear(); /*清理*/
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
ate.open(filename,ostream::ate);/*以添加模式打开文件*/ 
ate<<getTime(); /*写入数据*/ 
ate.close(); /*关闭文件*/ 
ate.clear(); /*清理*/
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
ate.open(filename,ostream::ate);/*以添加模式打开文件*/ 
ate<<getTime(); /*写入数据*/ 
ate.close(); /*关闭文件*/ 
ate.clear(); /*清理*/
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
ate.open(filename,ostream::ate);/*以添加模式打开文件*/ 
ate<<getTime(); /*写入数据*/ 
ate.close(); /*关闭文件*/ 
ate.clear(); /*清理*/
return f;
}


void grow::devide_m()
{
	ofstream ate;
	ofstream ofile("D://TheFarm//premonth.txt");
	char filename[30]="D://TheFarm//premonth.txt";   
ate.open(filename,ostream::ate);/*以添加模式打开文件*/ 
ate<<SeedTime_m(); /*写入数据*/ 
ate.close(); /*关闭文件*/ 
ate.clear(); /*清理*/
}

void grow::devide_d()
{
	ofstream ate;
	ofstream ofile("D://TheFarm//preday.txt");
	char filename[30]="D://TheFarm//preday.txt";   
ate.open(filename,ostream::ate);/*以添加模式打开文件*/ 
ate<<SeedTime_d(); /*写入数据*/ 
ate.close(); /*关闭文件*/ 
ate.clear(); /*清理*/
}

void grow::devide_h()
{
	ofstream ate;
	ofstream ofile("D://TheFarm//prehour.txt");
	char filename[30]="D://TheFarm//prehour.txt";   
ate.open(filename,ostream::ate);/*以添加模式打开文件*/ 
ate<<SeedTime_h(); /*写入数据*/ 
ate.close(); /*关闭文件*/ 
ate.clear(); /*清理*/
}

void grow::devide_min()
{
	ofstream ate;
	ofstream ofile("D://TheFarm//premin.txt");
	char filename[30]="D://TheFarm//premin.txt";   
ate.open(filename,ostream::ate);/*以添加模式打开文件*/ 
ate<<SeedTime_min(); /*写入数据*/ 
ate.close(); /*关闭文件*/ 
ate.clear(); /*清理*/
}

void grow::devide_s()
{
	ofstream ate;
	ofstream ofile("D://TheFarm//presecond.txt");
	char filename[30]="D://TheFarm//presecond.txt";   
ate.open(filename,ostream::ate);/*以添加模式打开文件*/ 
ate<<SeedTime_s(); /*写入数据*/ 
ate.close(); /*关闭文件*/ 
ate.clear(); /*清理*/
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
ate.open(filename2,ostream::ate);/*以添加模式打开文件*/
ate<<getTime();   /*写入数据*/
ate.close();   /*关闭文件*/
ate.clear();   /*清理*/

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
	time+=temp*=100000000;//月的数量级
	ss.clear();
	ss<<d;
	ss>>temp;
	time+=temp*1000000;//日的数量级
	ss.clear();

	ss<<h;
	ss>>temp;
	time+=temp*=10000;//时的数量级
	ss.clear();

	ss<<min;
	ss>>temp;
	time+=temp*=100;//分的数量级
	ss.clear();

	ss<<s;
	ss>>temp;
	time+=temp;//秒的数量级
	return time;
}




//以下是从文本文件中获取播种时间的操作
string grow::readFileIntoString(char * filename)
	{
ifstream ifile(filename);
//将文件读入到ostringstream对象buf中
ostringstream buf;
char ch;
while(buf&&ifile.get(ch))
buf.put(ch);
//返回与流对象buf关联的字符串
return buf.str();
}
 
 
string grow::prem()
{
//文件名
char * fn="D://TheFarm//premonth.txt";
string str;
str=readFileIntoString(fn);
return str;
}

string grow::pred()
{
//文件名
char * fn="D://TheFarm/preday.txt";
string str;
str=readFileIntoString(fn);
return str;
}

string grow::preh()
{
//文件名
char * fn="D://TheFarm/prehour.txt";
string str;
str=readFileIntoString(fn);
return str;
}

string grow::premin()
{
//文件名
char * fn="D://TheFarm/premin.txt";
string str;
str=readFileIntoString(fn);
return str;
}

string grow::pres()
{
//文件名
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
	time+=temp*=100000000;//月的数量级
	ss.clear();
	ss<<d;
	ss>>temp;
	time+=temp*1000000;//日的数量级
	ss.clear();

	ss<<h;
	ss>>temp;
	time+=temp*=10000;//时的数量级
	ss.clear();

	ss<<min;
	ss>>temp;
	time+=temp*=100;//分的数量级
	ss.clear();

	ss<<s;
	ss>>temp;
	time+=temp;//秒的数量级
	return time;
}

int grow::reap(int time1,int time2)
{
	int cost=1200;
	int k=0,add_gold=0,k1=0,k2=0,k3=0,k4=0;   //其中，add_gold 作为本函数返回值，用来为reset_gold()函数判断是否增减金币
	time1=turn1();
	time2=turn2();
	k=cost-(time2-time1);  //k是用来计算确定作物是否成熟
	if((time2-time1)>=cost)
	{
		cout<<"作物已成熟，快收获吧！"<<endl;
		add_gold=1;
	}
	else
	{
	do
	{
	if(k>86400)
	{
		k1=k/86400;   //日
		k=k%86400;
	}
	else if(k>3600&&k<86400)
	{
		k2=k/3600;   //时
		k=k%3600;
	}
	else if(k<3600&&k>60)
	{
		k3=k/60;    //分
		k=k%60;
	}
	else if(k<60)
	{
		k4=k;     //秒
		k=0;
		
	}
	}while(k!=0);
		cout<<"作物未成熟，再等等吧！"<<endl;
		cout<<"作物还需要：";
		if(k1)
		{
			cout<<k1<<"天";
		}
		if(k2)
		{
			cout<<k2<<"小时";
		}
		if(k3)
		{
			cout<<k3<<"分";
		}
		if(k4)
		{
			cout<<k4<<"秒";
		}
		cout<<"成熟";
	}
	return add_gold;
}

void grow::setfile()  //建立存放文本的文件夹
{
	 string dirName = "D://TheFarm";
    _mkdir(dirName.c_str()); 
}
