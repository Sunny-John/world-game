#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<windows.h>
#include<fstream>
using namespace std;


int house,car,landnum,landsize;
int gold,wood,stone,iron,water,diamond;


void do_first();
void user_set();
void login();


void user_set(){
	cout<<"欢迎来到 my_world !\n";
	Sleep(500);
	cout<<"这是我们第一次遇见呢~\n";
	Sleep(500);
	cout<<"请设置:\n";
	Sleep(300);
	cout<<"（以下你输入的东西不能有空格哦）\n";
	Sleep(100);
	cout<<"账号:";
	string word;
	cin>>word;
	ofstream todata;
	todata.open("C:\\my_world.txt",ios::out);
	todata<<43<<" "<<word<<" ";
	cout<<"密码:";
	cin>>word;
	todata<<word<<" ";
	todata<<
	todata.close();
	system("cls");
	return ;
}
void do_first(){
	ofstream odata;
	odata.open("C:\\my_world.txt",ios::app);
	odata.close();
	ifstream idata;
	idata.open("C:\\my_world.txt",ios::in);
	int u=0;
	idata>>u;
	idata.close();
	if(u!=43) user_set();
	login();
	return ;
}
void login(){
	printf("+----+\n|登录|\n+----+\n");
	Sleep(500);
	ifstream idata;
	idata.open("C:\\my_world.txt",ios::in);
	int yyyy;
	idata>>yyyy;
	string in;
	string word;
	idata>>in;
	while(1)
	{
		cout<<"请输入:\n账号:";
		cin>>word;
		if(word==in) break;
		system("cls");
		cout<<"未找到账户，请重新输入!\n";
	}
	idata>>in;
	while(1)
	{
		cout<<"密码:";
		cin>>word;
		if(word==in) break;
		system("cls");
		cout<<"密码错误，请重新输入!\n";
	}
	system("cls");
	cin.ignore();
	return ;
}
int main()
{
	do_first();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
