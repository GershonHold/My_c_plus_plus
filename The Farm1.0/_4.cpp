#include"_1.h"
int main()
{
	farm f1;
	grow g1;
	g1.setfile();
	int choice;

	f1.welcome();
	cout<<                                                   "欢迎回来！"<<endl;
	do
	{
		cout<<"                                               我的农场"<<endl<<endl;
		f1.Farmer();
		cout<<endl;
		cout<<"你的金币：";
		int g=f1.Gold();
		cout<<g<<endl;
		cout<<endl;
		cout<<"                                                                                                   |要干什么呢？"<<endl;
		cout<<"                                                                                                   |1-设置/修改我的昵称"<<endl;
		cout<<"                                                                                                   |2-播种"<<endl;
		cout<<"                                                                                                   |3-收获"<<endl;
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