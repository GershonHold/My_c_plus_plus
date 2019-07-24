//Word Jumble
//The classic word jumble game where the player can ask for a hint
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//选择单词   ！！！这里可以改进，在添加单词后，不用再修改NUM_WORDS的值
int main()
{
	enum fields{WORD,HINT,NUM_FIELDS};
	const int NUM_WORDS=11;
	const string WORDS[NUM_WORDS][NUM_FIELDS]=
	{
		{"wall","Do you feel you're banging your head against something?"},
		{"absurd","A dog cook for you,how do you feel about it?"},
		{"bald","You can look at the head of monk."},
		{"bleak","You walk alone,hungry and cold."},
		{"jumble","It's the game is all about."},
		{"money","How attractive it is for many of us!"},
		{"converse","......Also,I can say that you are talking."},
		{"embrace","What do you want to do when you meet you old friends?"},
		{"ingenious","I can also say that you are smart."},
		{"tactics","You need plan for a game."}
		{"profociency","emmmm,the meaning of skillful."}
	};
	//随机选择一个单词
srand(static_cast<unsigned int>(time(0)));
int choice=(rand()%NUM_WORDS);
string theWord=WORDS[choice][WORD];
string theHint=WORDS[choice][HINT];

//单词乱序
string jumble=theWord;
int length=jumble.size();
for(int i=0;i<length;++i)
{
	int index1=(rand()%length);
    int index2=(rand()%length);
	char temp=jumble[index1];
	jumble[index1]=jumble[index2];
	jumble[index2]=temp;
}

//欢迎界面
cout<<"\t\t\tWelcome to Word jumble!\n\n";
cout<<"Unscramble the letters to make a word\n";
cout<<"Enter a 'hint' for a hint.\n";
cout<<"Enter 'quit' to quit the game.\n\n";
cout<<"The jumble is:"<<jumble;
string guess;
cout<<"\n\nYour guess:";
cin>>guess;

//游戏主循环
while((guess!=theWord)&&(guess!="quit"))
{
	if(guess=="hint")
	{
		cout<<theHint;
	}
	else
	{
		cout<<"Sorry,that's not it.";
	}
	cout<<"\n\nYour guess:";
	cin>>guess;;
}

//游戏结束
if(guess==theWord)
{
	cout<<"\nThat's it!You guessed it!\n";
}
cout<<"\nThanks for playing!\n";
return 0;
}
