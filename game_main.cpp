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
	cout<<"��ӭ���� my_world !\n";
	Sleep(500);
	cout<<"�������ǵ�һ��������~\n";
	Sleep(500);
	cout<<"������:\n";
	Sleep(300);
	cout<<"������������Ķ��������пո�Ŷ��\n";
	Sleep(100);
	cout<<"�˺�:";
	string word;
	cin>>word;
	ofstream todata;
	todata.open("C:\\my_world.txt",ios::out);
	todata<<43<<" "<<word<<" ";
	cout<<"����:";
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
	printf("+----+\n|��¼|\n+----+\n");
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
		cout<<"������:\n�˺�:";
		cin>>word;
		if(word==in) break;
		system("cls");
		cout<<"δ�ҵ��˻�������������!\n";
	}
	idata>>in;
	while(1)
	{
		cout<<"����:";
		cin>>word;
		if(word==in) break;
		system("cls");
		cout<<"�����������������!\n";
	}
	system("cls");
	cin.ignore();
	return ;
}
int main()
{
	do_first();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
