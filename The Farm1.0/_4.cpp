#include"_1.h"
int main()
{
	farm f1;
	grow g1;
	g1.setfile();
	int choice;

	f1.welcome();
	cout<<                                                   "��ӭ������"<<endl;
	do
	{
		cout<<"                                               �ҵ�ũ��"<<endl<<endl;
		f1.Farmer();
		cout<<endl;
		cout<<"��Ľ�ң�";
		int g=f1.Gold();
		cout<<g<<endl;
		cout<<endl;
		cout<<"                                                                                                   |Ҫ��ʲô�أ�"<<endl;
		cout<<"                                                                                                   |1-����/�޸��ҵ��ǳ�"<<endl;
		cout<<"                                                                                                   |2-����"<<endl;
		cout<<"                                                                                                   |3-�ջ�"<<endl;
		cin>>choice;
		getchar();
		switch(choice)
		{
		case 1:
			f1.rename();
			break;
		case 2:
			g1.devide_m();
			g1.devide_d();
			g1.devide_h();
			g1.devide_min();
			g1.devide_s();
			break;
		case 3:
			int i;
			g1.reap(g1.turn1(),g1.turn2());
			i=g1.grow::reap(g1.turn1(),g1.turn2());
			if(i)
			f1.reset_gold();
			break;
		case 4:
			
			break;
		};
	}while(choice!=0);
	return 0;
}