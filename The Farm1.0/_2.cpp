//farm��ĺ�������

#include"_1.h"
using namespace std;

char farm::welcome()//
{
	FILE *fp;                                                       
	char ch1;
	fp = fopen( "D://TheFarm/farmer.txt", "r" );
	if( fp == 0 )             
	{
		cout<<"����������ǳ�" ;
		rename();
		exit(1);
	}
	while( ( ch1 = fgetc(fp) ) != EOF )	    /* ���ļ����� */               
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
		cout<<"����������ǳ�" ;
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

char farm::rename()//�޸��ǳƺ���
{
	FILE *fp;
	char ch;
	fp = fopen( "D://TheFarm/farmer.txt", "w" );		 
	if( fp == 0 )                           
	{
		cout<<"file error\n" ;
		exit(1);
	}
	while( ( ch = fgetc(fp) ) != EOF )	    /* ���ļ����� */               
	{
		cout<<ch;         /*��Ļ����ոն������ַ�����*/ 
	}
	cout<<"�������ǳƲ���#��β�������ǵ�һ�������ǳƣ�Ȼ���㽫�˳��������½���"<<endl;
	ch = getchar();
	while( ch != '#' )				  /* д�ļ����� */                   
	{
			fputc(ch, fp);               /* ����fputc���ն����ַ�д���ļ�*/  
			ch = getchar();
	}
	fclose(fp);
}




string farm::readFileIntoString(char * filename)
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

int farm::Gold()
{
//�ļ���
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
ate.open(filename,ostream::ate);/*�����ģʽ���ļ�*/ 
ate<<g+10; //��Ҽ�ʮ 
ate.close();
ate.clear();
return 0;
}
