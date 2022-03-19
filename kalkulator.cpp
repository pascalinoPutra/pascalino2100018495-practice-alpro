#include<iostream>
#include<windows.h>
#include<fstream>
#include<conio.h>
#include"function.h"
using namespace std;
void gotoxy(int x,int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{	
	awal:
	char answer,opsi;
	int nilaiPertama,nilaiKedua,hasil;
	gotoxy(0,5);cout<<" =======================================================";
	gotoxy(0,6);cout<<"|                                                       |";
	gotoxy(0,7);cout<<" ------------------------------------------------------- ";
	gotoxy(18,6);cout<<"SELAMAT DATANG DI CALCULATOR";
	for(int i=1;i<6;i++)
	{
		gotoxy(0,7+i);cout<<"|                                                       |";
	}
	gotoxy(0,12);cout<<"=========================================================";
	gotoxy(0,0);cout<<"1.PENJUMLAHAN"<<endl;
	gotoxy(0,1);cout<<"2.PENGURANGAN"<<endl;
	gotoxy(0,2);cout<<"3.PPERKALIAN"<<endl;
	gotoxy(0,3);cout<<"4.PEMBAGIAN"<<endl;
	gotoxy(0,4);cout<<"PILIH MODE YANG DIGUNAKAN[1-4] : ";
	cin>>answer;
	gotoxy(2,11);cout<<"H A S I L";	
	if(answer=='1')
	{
		gotoxy(51,8);cin>>nilaiPertama;
		gotoxy(51,9);cout<<"+";	
		gotoxy(51,10);cin>>nilaiKedua;
		hasil=tambah(nilaiPertama,nilaiKedua);
		gotoxy(51,11);cout<<hasil;
	}
	else if(answer=='2')
	{
		gotoxy(51,8);cin>>nilaiPertama;
		gotoxy(51,9);cout<<"-";	
		gotoxy(51,10);cin>>nilaiKedua;
		hasil=kurang(nilaiPertama,nilaiKedua);
		gotoxy(51,11);cout<<hasil;
	}
	else if(answer=='3')
	{
		gotoxy(51,8);cin>>nilaiPertama;
		gotoxy(51,9);cout<<"x";	
		gotoxy(51,10);cin>>nilaiKedua;
		hasil=kali(nilaiPertama,nilaiKedua);
		gotoxy(51,11);cout<<hasil;
	}
	else if(answer=='4')
	{
		gotoxy(51,8);cin>>nilaiPertama;
		gotoxy(51,9);cout<<":";	
		gotoxy(51,10);cin>>nilaiKedua;
		hasil=bagi(nilaiPertama,nilaiKedua);
		gotoxy(51,11);cout<<hasil;
	}
	gotoxy(1,13);cout<<"KEMBALI KE MENU AWAL [Y/T] : "; cin>>opsi;
	if(opsi=='Y'||opsi=='y')
	{
		system("cls");
		goto awal;
	}
	else
	{
		gotoxy(1,14);cout<<"T E R I M A  K A S I H";
	}
	getch();
	return 0;
}
