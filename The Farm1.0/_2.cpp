//farm类的函数定义

#include"_1.h"
using namespace std;

char farm::welcome()//
{
	FILE *fp;                                                       
	char ch1;
	fp = fopen( "D://TheFarm/farmer.txt", "r" );
	if( fp == 0 )             
	{
		cout<<"请设置你的昵称" ;
		rename();
		exit(1);
	}
	while( ( ch1 = fgetc(fp) ) != EOF )	    /* 读文件操作 */               
	{
		cout<<ch1;
	}
	cout<<",";
	fclose(fp);
}

char farm::Farmer()
{
	FILE *fp;                                                       
	char ch1;
	fp = fopen( "D://TheFarm/farmer.txt", "r" );		
	if( fp == 0 )
	{
		cout<<"请设置你的昵称" ;
		rename();
		exit(1);
	}
    cout<<endl<<"****Farmer:";
	while( ( ch1 = fgetc(fp) ) != EOF )              
	{
		cout<<ch1;
	}
	cout<<endl<<endl;
	fclose(fp);
}

char farm::rename()//修改昵称函数
{
	FILE *fp;
	char ch;
	fp = fopen( "D://TheFarm/farmer.txt", "w" );		 
	if( fp == 0 )                           
	{
		cout<<"file error\n" ;
		exit(1);
	}
	while( ( ch = fgetc(fp) ) != EOF )	    /* 读文件操作 */               
	{
		cout<<ch;         /*屏幕输出刚刚读出的字符内容*/ 
	}
	cout<<"请输入昵称并以#结尾，若你是第一次设置昵称，然后你将退出，请重新进入"<<endl;
	ch = getchar();
	while( ch != '#' )				  /* 写文件操作 */                   
	{
			fputc(ch, fp);               /* 调用fputc将刚读的字符写到文件*/  
			ch = getchar();
	}
	fclose(fp);
}




string farm::readFileIntoString(char * filename)
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

int farm::Gold()
{
//文件名
char * fn="D://TheFarm//gold.txt";
string g;
g=readFileIntoString(fn);

int time=0,temp=0;
stringstream ss;
ss<<g;
ss>>temp;
return temp;
}

int farm::reset_gold()
{
	g=Gold();
	ofstream ate;
	ofstream ofile("D://TheFarm//gold.txt");
	char filename[30]="D://TheFarm//gold.txt";   
ate.open(filename,ostream::ate);/*以添加模式打开文件*/ 
ate<<g+10; //金币加十 
ate.close();
ate.clear();
return 0;
}
