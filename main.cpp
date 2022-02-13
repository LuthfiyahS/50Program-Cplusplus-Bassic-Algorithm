#include <iostream>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <iomanip>


using namespace std;


COORD coord= {0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

char pesan[100];

void UI1()
{
    system("cls");
    system("color bf");
    for(int i=0; i<116; i++)
    {
        gotoxy(2+i,0);
        cout<<(char)205;
        gotoxy(2+i,4);
        cout<<(char)205;
        gotoxy(2+i,6);
        cout<<(char)205;
        gotoxy(2+i,10);
        cout<<(char)205;
        gotoxy(2+i,12);
        cout<<(char)205;
        gotoxy(2+i,14);
        cout<<(char)205;
        gotoxy(2+i,16);
        cout<<(char)205;
        gotoxy(2+i,18);
        cout<<(char)205;
        gotoxy(2+i,22);
        cout<<(char)205;//GARIS
        gotoxy(2+i,24);
        cout<<(char)205;
        gotoxy(2+i,28);
        cout<<(char)205;
        gotoxy(2+i,29);
        cout<<(char)205;
    }
    gotoxy(1,0);
    cout<<(char)201;
    gotoxy(118,0);
    cout<<(char)187;

    for(int i=0; i<116; i++)
    {
        gotoxy(2+i,1);
        cout<<(char)177;
        gotoxy(2+i,2);
        cout<<(char)177;
        gotoxy(2+i,3);
        cout<<(char)177;
        gotoxy(2+i,7);
        cout<<(char)177;
        gotoxy(2+i,8);
        cout<<(char)177;
        gotoxy(2+i,9);
        cout<<(char)177;
        gotoxy(2+i,13);
        cout<<(char)177;
        gotoxy(2+i,14);
        cout<<(char)177;
        gotoxy(2+i,15);
        cout<<(char)177;
        gotoxy(2+i,19);
        cout<<(char)177;
        gotoxy(2+i,20);
        cout<<(char)177;
        gotoxy(2+i,21);
        cout<<(char)177;
        gotoxy(2+i,25);
        cout<<(char)177;
        gotoxy(2+i,26);
        cout<<(char)177;
        gotoxy(2+i,27);
        cout<<(char)177;
    }

    for(int i=1; i<29; i++)
    {
        gotoxy(1,i);
        cout<<(char)186<<endl;
        gotoxy(118,i);
        cout<<(char)186<<endl;
    }
    gotoxy(1,6);
    cout<<(char)201;//aiai atas
    gotoxy(118,6);
    cout<<(char)187;
    int j=0;
    for (int i=1; i<5; i++)
    {
        gotoxy(2,5+j);
        cout<<"   MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND ";
        j=j+6;
    }
    gotoxy(1,4);
    cout<<(char)204;
    gotoxy(118,4);
    cout<<(char)185;
    gotoxy(1,6);
    cout<<(char)204;
    gotoxy(118,6);
    cout<<(char)185;
    gotoxy(1,10);
    cout<<(char)204;
    gotoxy(118,10);
    cout<<(char)185;//penghubung
    gotoxy(1,12);
    cout<<(char)204;
    gotoxy(118,12);
    cout<<(char)185;
    gotoxy(1,16);
    cout<<(char)204;
    gotoxy(118,16);
    cout<<(char)185;
    gotoxy(1,18);
    cout<<(char)204;
    gotoxy(118,18);
    cout<<(char)185;
    gotoxy(1,22);
    cout<<(char)204;
    gotoxy(118,22);
    cout<<(char)185;
    gotoxy(1,24);
    cout<<(char)204;
    gotoxy(118,24);
    cout<<(char)185;
    gotoxy(1,29);
    cout<<(char)200;
    gotoxy(118,29);
    cout<<(char)188;

    for(int i=0; i<116; i++)
    {
        gotoxy(2+i,1);
        cout<<(char)219;
        gotoxy(2+i,2);
        cout<<(char)219;
        gotoxy(2+i,3);
        cout<<(char)219;
        gotoxy(2+i,13);
        cout<<(char)219;
        gotoxy(2+i,14);
        cout<<(char)219;
        gotoxy(2+i,15);
        cout<<(char)219;
        gotoxy(2+i,25);
        cout<<(char)219;
        gotoxy(2+i,26);
        cout<<(char)219;
        gotoxy(2+i,27);
        cout<<(char)219;
        for (int j=0; j<=1e5; j++);
    }

}

void UI2()
{
    system("cls");
    for(int i=0; i<116; i++)
    {
        gotoxy(2+i,0);
        cout<<(char)205;
        gotoxy(2+i,1);
        cout<<(char)205;
        gotoxy(2+i,5);
        cout<<(char)205;
        gotoxy(2+i,7);
        cout<<(char)205;
        gotoxy(2+i,11);
        cout<<(char)205;
        gotoxy(2+i,11);
        cout<<(char)205;
        gotoxy(2+i,13);
        cout<<(char)205;
        gotoxy(2+i,17);
        cout<<(char)205;
        gotoxy(2+i,19);
        cout<<(char)205;//GARIS
        gotoxy(2+i,23);
        cout<<(char)205;
        gotoxy(2+i,25);
        cout<<(char)205;
        gotoxy(2+i,29);
        cout<<(char)205;
    }
    gotoxy(1,0);
    cout<<(char)201;
    gotoxy(118,0);
    cout<<(char)187;
    for(int i=0; i<116; i++)
    {
        gotoxy(2+i,2);
        cout<<(char)177;
        gotoxy(2+i,3);
        cout<<(char)177;
        gotoxy(2+i,4);
        cout<<(char)177;
        gotoxy(2+i,8);
        cout<<(char)177;
        gotoxy(2+i,9);
        cout<<(char)177;
        gotoxy(2+i,10);
        cout<<(char)177;
        gotoxy(2+i,14);
        cout<<(char)177;
        gotoxy(2+i,15);
        cout<<(char)177;
        gotoxy(2+i,16);
        cout<<(char)177;
        gotoxy(2+i,20);
        cout<<(char)177;
        gotoxy(2+i,21);
        cout<<(char)177;
        gotoxy(2+i,22);
        cout<<(char)177;
        gotoxy(2+i,26);
        cout<<(char)177;
        gotoxy(2+i,27);
        cout<<(char)177;
        gotoxy(2+i,28);
        cout<<(char)177;
    }
    for(int i=1; i<29; i++)
    {
        gotoxy(1,i);
        cout<<(char)186<<endl;
        gotoxy(118,i);
        cout<<(char)186<<endl;
    }
    int j=0;
    for (int i=1; i<5; i++)
    {
        gotoxy(2,6+j);
        cout<<"   MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND ";
        j=j+6;
    }
    gotoxy(1,5);
    cout<<(char)204;
    gotoxy(118,5);
    cout<<(char)185;
    gotoxy(1,11);
    cout<<(char)204;
    gotoxy(118,11);
    cout<<(char)185;//penghubung
    gotoxy(1,13);
    cout<<(char)204;
    gotoxy(118,13);
    cout<<(char)185;
    gotoxy(1,17);
    cout<<(char)204;
    gotoxy(118,17);
    cout<<(char)185;
    gotoxy(1,19);
    cout<<(char)204;
    gotoxy(118,19);
    cout<<(char)185;
    gotoxy(1,23);
    cout<<(char)204;
    gotoxy(118,23);
    cout<<(char)185;
    gotoxy(1,25);
    cout<<(char)204;
    gotoxy(118,25);
    cout<<(char)185;
    gotoxy(1,29);
    cout<<(char)200;
    gotoxy(118,29);
    cout<<(char)188;//sisibwh

    for(int i=0; i<116; i++)
    {
        gotoxy(2+i,7);
        cout<<(char)219;
        gotoxy(2+i,8);
        cout<<(char)219;
        gotoxy(2+i,9);
        cout<<(char)219;
        gotoxy(2+i,19);
        cout<<(char)219;
        gotoxy(2+i,20);
        cout<<(char)219;
        gotoxy(2+i,21);
        cout<<(char)219;
        for (int j=0; j<=1e6; j++);
    }

}

void tubuh_program1()
{
    int h,x;
    system("cls");
    for(int i=0; i<116; i++)
    {
        gotoxy(2+i,0);
        cout<<(char)205;
        gotoxy(2+i,4);
        cout<<(char)205;
        gotoxy(2+i,6);
        cout<<(char)205;
        gotoxy(2+i,8);
        cout<<(char)205;
        gotoxy(2+i,29);
        cout<<(char)205;
    }
    gotoxy(1,0);
    cout<<(char)201;
    gotoxy(118,0);
    cout<<(char)187;
    gotoxy(1,1);
    cout<<(char)186;
    gotoxy(118,1);
    cout<<(char)186;
    gotoxy(1,2);
    cout<<(char)241;
    gotoxy(118,2);
    cout<<(char)241;
    gotoxy(1,3);
    cout<<(char)186;
    gotoxy(118,3);
    cout<<(char)186;
    gotoxy(1,4);
    cout<<(char)200;
    gotoxy(118,4);
    cout<<(char)188;
    gotoxy(1,5);
    cout<<(char)186;
    gotoxy(118,5);
    cout<<(char)186;
    for(int i=0; i<116; i++)
    {
        gotoxy(2+i,1);
        cout<<(char)177;
        gotoxy(2+i,2);
        cout<<(char)177;
        gotoxy(2+i,3);
        cout<<(char)177;
    }
    gotoxy(1,6);
    cout<<(char)201;
    gotoxy(118,6);
    cout<<(char)187;
    gotoxy(1,7);
    cout<<(char)186;
    h=strlen(pesan);
    x=(118-h)/2;
    gotoxy(x,7);
    cout<<pesan;
    gotoxy(2,5);
    cout<<"   MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND - MAKE N FIND ";
    gotoxy(118,7);
    cout<<(char)186;
    gotoxy(1,8);
    cout<<(char)204;
    gotoxy(118,8);
    cout<<(char)185;
    for(int i=9; i<29; i++)
    {
        gotoxy(1,i);
        cout<<(char)186<<endl;
        gotoxy(118,i);
        cout<<(char)186<<endl;
        gotoxy(1,29);
        cout<<(char)200;
        gotoxy(118,29);
        cout<<(char)188;
    }
}

void tubuh_program()
{
    int h,x;
    system("cls");
    gotoxy(1,0);
    cout<<(char)201;
    for(int i=0; i<116; i++)
    {
        gotoxy(2+i,0);
        cout<<(char)205;
        gotoxy(2+i,2);
        cout<<(char)196;
        gotoxy(2+i,4);
        cout<<(char)205;
        gotoxy(2+i,6);
        cout<<(char)205;
        gotoxy(2+i,8);
        cout<<(char)205;
        gotoxy(2+i,29);
        cout<<(char)205;
    }
    gotoxy(118,0);
    cout<<(char)187;
    gotoxy(1,1);
    cout<<(char)186;
    gotoxy(118,1);
    cout<<(char)186;
    gotoxy(48,1);
    cout<<"PROGRAM MAKE N FIND";
    gotoxy(1,2);
    cout<<(char)241;
    gotoxy(118,2);
    cout<<(char)241;
    gotoxy(1,3);
    cout<<(char)186;
    gotoxy(30,3);
    cout<<"Dibuat oleh Luthfiyah Sakinah 201904024 TRPL PEI 2019";
    gotoxy(118,3);
    cout<<(char)186;
    gotoxy(1,4);
    cout<<(char)200;
    gotoxy(118,4);
    cout<<(char)188;
    gotoxy(1,5);
    for(int i=0; i<118; i++)
        cout<<(char)176;
    gotoxy(1,6);
    cout<<(char)201;
    gotoxy(118,6);
    cout<<(char)187;
    gotoxy(1,7);
    cout<<(char)186;
    h=strlen(pesan);
    x=(118-h)/2;
    gotoxy(x,7);
    cout<<pesan;
    gotoxy(118,7);
    cout<<(char)186;
    gotoxy(1,8);
    cout<<(char)204;
    gotoxy(118,8);
    cout<<(char)185;
    for(int i=9; i<29; i++)
    {
        gotoxy(1,i);
        cout<<(char)186<<endl;
        gotoxy(118,i);
        cout<<(char)186<<endl;
        gotoxy(1,29);
        cout<<(char)200;
        gotoxy(118,29);
        cout<<(char)188;
    }
}

void pin()
{
    tubuh_program1();
    gotoxy(80,8);
    cout<<(char)203;

    for(int i=0; i<20; i++)
    {
        gotoxy(80,9+i);
        cout<<(char)186;
    }

    for(int i=0; i<40; i++)
    {
        gotoxy(21+i,12);
        cout<<(char)205;
        gotoxy(21+i,23);
        cout<<(char)205;
    }
    for(int i=0; i<10; i++)
    {
        gotoxy(20,13+i);
        cout<<(char)186;
        gotoxy(61,13+i);
        cout<<(char)186;
    }
    gotoxy(20,12);
    cout<<(char)201;
    gotoxy(61,12);
    cout<<(char)187;
    gotoxy(20,23);
    cout<<(char)200;
    gotoxy(61,23);
    cout<<(char)188;

    for(int i=0; i<10; i++)
    {
        gotoxy(69,9+i);
        cout<<(char)186;
        gotoxy(12,19+i);
        cout<<(char)186;
    }
    gotoxy(70,19);
    for(int i=0; i<10; i++)
        cout<<(char)205;
    gotoxy(69,19);
    cout<<(char)200;

    for(int i=0; i<5; i++)
    {
        gotoxy(45,24+i);
        cout<<(char)186;
    }
    for(int i=0; i<7; i++)
    {
        gotoxy(12+i,19);
        cout<<(char)205;
    }
    gotoxy(12,19);
    cout<<(char)201;
    gotoxy(19,19);
    cout<<(char)186;
    for(int i=0; i<6; i++)
    {
        gotoxy(63+i,15);
        cout<<(char)205;
    }
    gotoxy(62,15);
    cout<<(char)186;

    gotoxy(29,16);
    for(int i=0; i<3; i++)
        cout<<(char)177;
    gotoxy(32,16);
    cout<<(char)177;
    gotoxy(34,16);
    for(int i=0; i<4; i++)
        cout<<(char)177;
    gotoxy(32,17);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(29,17);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(36,17);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(32,17);
    for(int i=0; i<3; i++)
        cout<<(char)177;
    gotoxy(29,18);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(36,18);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(33,18);
    cout<<(char)177;
    gotoxy(29,19);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(36,19);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(29,20);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(36,20);
    for(int i=0; i<2; i++)
        cout<<(char)177;//
    gotoxy(39,18);
    for(int i=0; i<4; i++)
        cout<<(char)177;
    gotoxy(39,19);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(39,20);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(39,20);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(43,18);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(43,19);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(43,20);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(43,20);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(43,18);
    for(int i=0; i<2; i++)
        cout<<(char)177;//
    gotoxy(46,16);
    for(int i=0; i<7; i++)
        cout<<(char)177;
    gotoxy(46,17);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(46,18);
    for(int i=0; i<6; i++)
        cout<<(char)177;
    gotoxy(46,19);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(46,19);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(46,20);
    for(int i=0; i<2; i++)
        cout<<(char)177;

    gotoxy(54,20);
    for(int i=0; i<2; i++)
        cout<<(char)177;
    gotoxy(25,20);
    for(int i=0; i<2; i++)
        cout<<(char)177;//

    gotoxy(80,29);
    cout<<(char)202;
    gotoxy(93,12);
    cout<<"MASUKAN PIN";
    gotoxy(83,15);
    cout<<(char)218;
    gotoxy(115,15);
    cout<<(char)191;
    gotoxy(83,19);
    cout<<(char)192;
    gotoxy(115,19);
    cout<<(char)217;
    for(int i=84; i<115; i++)
    {
        gotoxy(i,15);
        cout<<(char)196;
        gotoxy(i,19);
        cout<<(char)196;
    }
    for(int i=0; i<13; i++)
    {
        gotoxy(84+i,25);
        cout<<(char)196;
    }
    for(int i=0; i<8; i++)
    {
        gotoxy(108+i,25);
        cout<<(char)196;
    }
    for(int i=0; i<16; i++)
    {
        gotoxy(92+i,24);
        cout<<(char)196;
        gotoxy(92+i,26);
        cout<<(char)196;
    }
    gotoxy(94,25);
    cout<<" Make N Find";
    gotoxy(92,24);
    cout<<(char)218;
    gotoxy(108,24);
    cout<<(char)191;
    gotoxy(92,26);
    cout<<(char)192;
    gotoxy(108,26);
    cout<<(char)217;
    gotoxy(93,25);
    cout<<(char)180;
    gotoxy(107,25);
    cout<<(char)195;
}

void kotak()
{
    system("cls");
    gotoxy(1,1);
    cout<<(char)201;
    gotoxy(118,1);
    cout<<(char)187;
    for(int i=0; i<116; i++)
    {
        gotoxy(2+i,1);
        cout<<(char)205;
        gotoxy(2+i,29);
        cout<<(char)205;
    }
    for(int i=0; i<28; i++)
    {
        gotoxy(1,i+2);
        cout<<(char)186<<endl;
        gotoxy(118,i+2);
        cout<<(char)186<<endl;
        gotoxy(1,29);
        cout<<(char)200;
        gotoxy(118,29);
        cout<<(char)188;
    }
}

void menu_1()
{
    system("cls");
    gotoxy(1,0);
    cout<<(char)201;
    gotoxy(118,0);
    cout<<(char)187;
    for(int i=0; i<116; i++)
    {
        gotoxy(2+i,0);
        cout<<(char)205;
        gotoxy(2+i,29);
        cout<<(char)205;
    }
    for(int i=0; i<29; i++)
    {
        gotoxy(1,i+1);
        cout<<(char)186<<endl;
        gotoxy(118,i+1);
        cout<<(char)186<<endl;
        gotoxy(1,29);
        cout<<(char)200;
        gotoxy(118,29);
        cout<<(char)188;
    }
    gotoxy(28,0);
    cout<<(char)187;
    gotoxy(91,0);
    cout<<(char)201;
    for(int i=0; i<10; i++)
    {
        gotoxy(28,i+1);
        cout<<(char)186<<endl;
        gotoxy(91,i+1);
        cout<<(char)186<<endl;
    }

    gotoxy(9,0);
    cout<<(char)187;
    gotoxy(110,0);
    cout<<(char)201;
    for(int i=0; i<23; i++)
    {
        gotoxy(9,i+1);
        cout<<(char)186<<endl;
        gotoxy(110,i+1);
        cout<<(char)186<<endl;
    }

    gotoxy(44,0);
    cout<<(char)187;
    gotoxy(75,0);
    cout<<(char)201;
    for(int i=0; i<16; i++)
    {
        gotoxy(44,i+1);
        cout<<(char)186<<endl;
        gotoxy(75,i+1);
        cout<<(char)186<<endl;
    }

    for(int i=0; i<11; i++)
    {
        gotoxy(58,i+1);
        cout<<(char)186<<endl;
    }
    gotoxy(15,11);
    cout<<(char)218;
    gotoxy(40,11);
    cout<<(char)191;
    gotoxy(47,11);
    cout<<(char)218;
    gotoxy(72,11);
    cout<<(char)191;
    gotoxy(80,11);
    cout<<(char)218;
    gotoxy(105,11);
    cout<<(char)191; //3 kotak menu utama

    gotoxy(30,17);
    cout<<(char)218;
    gotoxy(55,17);
    cout<<(char)191;
    gotoxy(62,17);
    cout<<(char)218;
    gotoxy(87,17);
    cout<<(char)191;//2 kotak menu utama

    gotoxy(6,24);
    cout<<(char)218;
    gotoxy(31,24);
    cout<<(char)191;

    gotoxy(88,24);
    cout<<(char)218;
    gotoxy(113,24);
    cout<<(char)191; //2 kotak menu utama bawah
    for(int i=0; i<3; i++)
    {
        gotoxy(15,12+i);
        cout<<(char)179;
        gotoxy(40,12+i);
        cout<<(char)179;
        gotoxy(47,12+i);
        cout<<(char)179;
        gotoxy(72,12+i);
        cout<<(char)179;
        gotoxy(80,12+i);
        cout<<(char)179;
        gotoxy(105,12+i);
        cout<<(char)179;//3 kotak menu utama
        gotoxy(30,18+i);
        cout<<(char)179;
        gotoxy(55,18+i);
        cout<<(char)179;
        gotoxy(62,18+i);
        cout<<(char)179;
        gotoxy(87,18+i);
        cout<<(char)179;
        gotoxy(6,25+i);
        cout<<(char)179;
        gotoxy(31,25+i);
        cout<<(char)179;
        gotoxy(88,25+i);
        cout<<(char)179;
        gotoxy(113,25+i);
        cout<<(char)179;//2 kotak menu utama

    }
    for(int i=0; i<24; i++)
    {
        gotoxy(16+i,11);
        cout<<(char)196;//3 kotak menu utama
        gotoxy(16+i,15);
        cout<<(char)196;
        gotoxy(48+i,11);
        cout<<(char)196;
        gotoxy(48+i,15);
        cout<<(char)196;
        gotoxy(81+i,11);
        cout<<(char)196;
        gotoxy(81+i,15);
        cout<<(char)196;
        gotoxy(31+i,17);
        cout<<(char)196;//2 kotak menu utama
        gotoxy(31+i,21);
        cout<<(char)196;
        gotoxy(63+i,17);
        cout<<(char)196;
        gotoxy(63+i,21);
        cout<<(char)196;

        gotoxy(7+i,24);
        cout<<(char)196;//2 kotak menu utama
        gotoxy(7+i,27);
        cout<<(char)196;
        gotoxy(89+i,24);
        cout<<(char)196;
        gotoxy(89+i,27);
        cout<<(char)196;
    }
    gotoxy(15,15);
    cout<<(char)192;
    gotoxy(40,15);
    cout<<(char)217;
    gotoxy(47,15);
    cout<<(char)192;
    gotoxy(72,15);
    cout<<(char)217;
    gotoxy(80,15);
    cout<<(char)192;
    gotoxy(105,15);
    cout<<(char)217;//3 kotak menu utama
    gotoxy(30,21);
    cout<<(char)192;
    gotoxy(55,21);
    cout<<(char)217;
    gotoxy(62,21);
    cout<<(char)192;
    gotoxy(87,21);
    cout<<(char)217;//2 tengah
    gotoxy(6,27);
    cout<<(char)192;
    gotoxy(31,27);
    cout<<(char)217;
    gotoxy(88,27);
    cout<<(char)192;
    gotoxy(113,27);
    cout<<(char)217;

}

void menu_2()
{
    tubuh_program();
    gotoxy(80,8);
    cout<<(char)203;
    for(int i=0; i<20; i++)
    {
        gotoxy(80,9+i);
        cout<<(char)186;
    }
    gotoxy(80,29);
    cout<<(char)202;
    gotoxy(93,9);
    cout<<"DAFTAR MENU";
    gotoxy(83,10);
    cout<<(char)218;
    gotoxy(115,10);
    cout<<(char)191;
    gotoxy(83,22);
    cout<<(char)192;
    gotoxy(115,22);
    cout<<(char)217;
    for(int i=84; i<115; i++)
    {
        gotoxy(i,10);
        cout<<(char)196;
        gotoxy(i,22);
        cout<<(char)196;
    }
    for(int i=0; i<9; i++)
    {
        gotoxy(88+i,25);
        cout<<(char)196;
        gotoxy(102+i,25);
        cout<<(char)196;
    }
    for(int i=0; i<5; i++)
    {
        gotoxy(97+i,24);
        cout<<(char)196;
        gotoxy(97+i,26);
        cout<<(char)196;
    }
    gotoxy(96,24);
    cout<<(char)218;
    gotoxy(102,24);
    cout<<(char)191;
    gotoxy(96,26);
    cout<<(char)192;
    gotoxy(102,26);
    cout<<(char)217;
    gotoxy(97,25);
    cout<<(char)180;
    gotoxy(101,25);
    cout<<(char)195;
}

void backmenu()
{
    gotoxy(5,11);
    for(int i=0; i<72; i++)
        cout<<(char)196;
    gotoxy(85,12);
    cout<<"0. Kembali Ke Halaman Utama";
    gotoxy(85,13);
    cout<<"1. Kembali Ke Operator";
    gotoxy(85,14);
    cout<<"2. Coba Kembali ";
}

void backmenu1()
{
    gotoxy(5,11);
    for(int i=0; i<72; i++)
        cout<<(char)196;
    gotoxy(85,12);
    cout<<"0. Kembali Ke Halaman Utama";
    gotoxy(85,13);
    cout<<"1. Kembali Ke Perulangan dan";
    gotoxy(85,14);
    cout<<"   Percabangan";
    gotoxy(85,15);
    cout<<"2. Coba Kembali ";
}

void backmenu2()
{
    gotoxy(5,11);
    for(int i=0; i<72; i++)
        cout<<(char)196;
    gotoxy(85,12);
    cout<<"0. Kembali Ke Halaman Utama";
    gotoxy(85,13);
    cout<<"1. Kembali Ke Array";
    gotoxy(85,14);
    cout<<"2. Coba Kembali ";
}

void backmenu3()
{
    gotoxy(5,11);
    for(int i=0; i<72; i++)
        cout<<(char)196;
    gotoxy(85,12);
    cout<<"0. Kembali Ke Halaman Utama";
    gotoxy(85,13);
    cout<<"1. Kembali Ke Pointer";
    gotoxy(85,14);
    cout<<"2. Coba Kembali ";
}

void backmenu4()
{
    gotoxy(5,11);
    for(int i=0; i<72; i++)
        cout<<(char)196;
    gotoxy(85,12);
    cout<<"0. Kembali Ke Halaman Utama";
    gotoxy(85,13);
    cout<<"1. Kembali Ke Struct";
    gotoxy(85,14);
    cout<<"2. Coba Kembali ";
}

void op()
{
    gotoxy(85,11);
    cout<<"0. Kembali Ke Halaman Utama";
    gotoxy(85,12);
    cout<<"1. Rumus Persegi Panjang";
    gotoxy(85,13);
    cout<<"2. Rumus Lingkaran";
    gotoxy(85,14);
    cout<<"3. Rumus Segitiga";
    gotoxy(85,15);
    cout<<"4. Rumus Jajar Genjang";
    gotoxy(85,16);
    cout<<"5. Rumus Tabung";
    gotoxy(85,17);
    cout<<"6. Rumus Bola";
    gotoxy(85,18);
    cout<<"7. Konversi Mata Uang";
    gotoxy(85,19);
    cout<<"8. Konversi Waktu";
}

void per()
{
    gotoxy(85,11);
    cout<<"0. Kembali Ke Halaman Utama";
    gotoxy(85,12);
    cout<<"1. Cetak Angka Dinamis";
    gotoxy(85,13);
    cout<<"2. Cetak Angka Ganjil Genap";
    gotoxy(85,14);
    cout<<"3. Segitiga Angka";
    gotoxy(85,15);
    cout<<"4. Konversi IPK angka ke huruf";
    gotoxy(85,16);
    cout<<"5. Cetak abjad vokal konsonan";
}

void array12()
{
    gotoxy(85,11);
    cout<<"0. Kembali Ke Halaman Utama";
    gotoxy(85,12);
    cout<<"1. Penjumlahan Array 1 Dimensi";
    gotoxy(85,13);
    cout<<"2. Penjumlahan Array 2 Dimensi";
    gotoxy(85,14);
    cout<<"   (Matriks)";
}

void pointer1()
{
    gotoxy(85,11);
    cout<<"0. Kembali Ke Halaman Utama";
    gotoxy(85,12);
    cout<<"1. Kalkulator Sederhana";
}

void struck1()
{
    gotoxy(85,11);
    cout<<"0. Kembali Ke Halaman Utama";
    gotoxy(85,12);
    cout<<"1. Pendataan KTP";
    gotoxy(85,13);
    cout<<"2. Pogram Kasir";
}

void persegigenjang (int panjang,int lebar)
{
    gotoxy(7,10);
    cout << "Luas dan Keliling Persegi Panjang";
    gotoxy(7,12);
    cout << "Masukan panjang        : ";
    cin >> panjang;
    gotoxy(7,13);
    cout << "Masukan lebar          : ";
    cin >> lebar;
    gotoxy(7,15);
    cout << "Hasil Luas dan Keliling Persegi Panjang";

    gotoxy(7,16);
    cout << "Luas Persegi Panjang     = " <<panjang*lebar;
    gotoxy(7,17);
    cout << "Keliling Persegi Panjang = " <<2*(panjang+lebar);

}

void lingkaran(float phi,int jarijari)
{
    gotoxy(7,10);
    cout << "Program Luas dan Keliling Lingkaran\n";
    gotoxy(7,12);
    cout << "Masukkan Phi        : ";
    cin >> phi;
    gotoxy(7,13);
    cout << "Masukkan jari_jari  : ";
    cin >> jarijari;
    gotoxy(7,15);
    cout << "Luas lingkaran      = " <<phi*jarijari*jarijari<<endl;
    gotoxy(7,16);
    cout << "Keliling lingkaran  = " <<2*phi*jarijari;
}

void segitiga(int alas, int tinggi, int sisi1, int sisi2, int sisi3)
{
    gotoxy(7,10);
    cout << "Program Luas dan Keliling Segitiga\n";
    gotoxy(7,12);
    cout << "Masukkan alas      : ";
    cin >> alas;
    gotoxy(7,13);
    cout << "Masukkan tinggi    : ";
    cin >> tinggi;
    gotoxy(7,15);
    cout << "Masukkan sisi 1    : ";
    cin >> sisi1;
    gotoxy(7,16);
    cout << "Masukkan sisi 2    : ";
    cin >> sisi2;
    gotoxy(7,17);
    cout << "Masukkan sisi 3    : ";
    cin >> sisi3;
    gotoxy(7,19);
    cout << "Luas Segitiga      = " <<0.5*alas*tinggi<<endl;
    gotoxy(7,20);
    cout << "Keliling Segitiga  = " <<sisi1+sisi2+sisi3<<endl;
}

void jajargenjang (int alas,int tinggi,int simir)
{
    gotoxy(7,10);
    cout << "Program Luas dan Keliling Jajar Genjang\n";
    gotoxy(7,12);
    cout << "Masukan alas           : ";
    cin >> alas;
    gotoxy(7,13);
    cout << "Masukan tinggi         : ";
    cin >> tinggi;
    gotoxy(7,14);
    cout << "Masukan sisi miring    : ";
    cin >> simir;

    gotoxy(7,16);
    cout << "Luas jajar genjang     = " <<alas*tinggi;
    gotoxy(7,17);
    cout << "Keliling jajar genjang = " <<2*(alas+simir);
}

void tabung(float phi,int jarijari,int tinggi)
{
    gotoxy(7,10);
    cout << "Program Volume Tabung\n";
    gotoxy(7,12);
    cout << "Masukkan Phi               : ";
    cin >> phi;
    gotoxy(7,13);
    cout << "Masukkan jari_jari tabung  : ";
    cin >> jarijari;
    gotoxy(7,14);
    cout << "Masukkan tinggi tabung     : ";
    cin >> tinggi;
    gotoxy(7,15);
    cout << "Volume tabung              = " <<phi*jarijari*jarijari*tinggi;
}

void bola(float phi,int jarijari)
{
    gotoxy(7,10);
    cout << "Program Volume Bola";
    gotoxy(7,12);
    cout << "Masukkan Phi       : ";
    cin >> phi;
    gotoxy(7,13);
    cout << "Masukkan jari_jari : ";
    cin >> jarijari;
    gotoxy(7,15);
    cout << "Luas Bola          = " <<4*phi*jarijari*jarijari<<endl;
    gotoxy(7,16);
    cout << "Volume Bola        = " <<4/3*phi*jarijari*jarijari*jarijari;
}

void duit(int uang, int u50,int u20, int u10, int u5, int u2,int u1,int u500, int u200, int u100)
{
    gotoxy(7,10);
    cout << "Program Konversi Mata Uang   "<<endl;
    gotoxy(7,12);
    cout << "Masukkan Jumlah Nilai Mata Uang : ";
    cin>>uang;

    u50=uang/50000;
    uang=uang%50000;

    u20=uang/20000;
    uang=uang%20000;

    u10=uang/10000;
    uang=uang%10000;

    u5=uang/5000;
    uang=uang%5000;

    u2=uang/2000;
    uang=uang%2000;

    u1=uang/1000;
    uang=uang%1000;

    u500=uang/500;
    uang=uang%500;

    u200=uang/200;
    uang=uang%200;

    u100=uang/100;

    gotoxy(7,15);
    cout<<" Hasil Dari Pemecahhan Uang "<<endl;
    gotoxy(7,16);
    cout<<u50<<" lembar Rp.50.000"<<endl;
    gotoxy(7,17);
    cout<<u20<<" lembar Rp.20.000"<<endl;
    gotoxy(7,18);
    cout<<u10<<" lembar Rp.10.000"<<endl;
    gotoxy(7,19);
    cout<<u5<<" lembar Rp.5000"<<endl;
    gotoxy(7,20);
    cout<<u2<<" lembar Rp.2000"<<endl;
    gotoxy(7,21);
    cout<<u1<<" lembar Rp.1000"<<endl;
    gotoxy(7,22);
    cout<<u500<<" lembar Rp.500"<<endl;
    gotoxy(7,23);
    cout<<u200<<" lembar Rp.500"<<endl;
    gotoxy(7,24);
    cout<<u100<<" lembar Rp.100"<<endl;
}

void waktu(int s, int jam, int menit, int detik,int sisa,int x)
{
    gotoxy(7,10);
    cout<<"Konversi Detik ke jam, menit, Detik atau Sebaliknya";
    gotoxy(7,12); cout<<"Jam Ke Detik (1) or Detik Ke Jam (2)";
    cin>>x;
    switch(x)
    {
    case 1:
        gotoxy(7,14);
        cout<<"Masukan Detik       : ";
        cin>>s;
        jam=s/3600;
        sisa=s%3600;
        menit=sisa/60;
        detik=sisa%60;
        gotoxy(7,15);
        cout<<"Konversi menjadi    :"<<jam<<" Jam "<<menit<<" menit "<<detik<<" detik"<<endl;
        break;
    case 2:
        jam=0;
        menit=0;
        gotoxy(7,14);
        cout<<"Masukan jam : ";
        cin>>jam;
        gotoxy(7,15);
        cout<<"Masukan menit : ";
        cin>>menit;
        gotoxy(7,16);
        cout<<"Masukan detik : ";
        cin>>detik;
        jam=jam*3600;
        menit=60*menit;
        gotoxy(7,17);
        cout<<"Konversi ke Detik   : "<<jam+menit+detik<<" Detik";
        break;
    default:
        gotoxy(7,14); cout<< "Menu yang anda Masukan Salah. Coba Kembali!";
    }
    cout<<endl;
}

void cetakangka(int a, int b)
{
    gotoxy(7,10);
    cout<<"Program Cetak Angka Dinamis";
    gotoxy(7,12);
    cout << "Masukkan Nilai Awal : ";
    cin >> a;
    gotoxy(7,13);
    cout << "Masukkan Nilai Akhir : ";
    cin >> b;
    gotoxy(7,15);
    int j=0,k=0,l=0,m=0,n=0,o=0,p=0;
    for (int i=a; i<=b; i++)
    {

        if (i<=25)
        {
            cout<<i<<"-";
        }
        else if (i>25&&i<=45)
        {
            gotoxy(7+j,16);
            cout<<i<<"-";
            j++;
            j++;
            j++;
        }
        else if (i>45&&i<=65)
        {
            gotoxy(7+k,17);
            cout<<i<<"-";
            k++;
            k++;
            k++;
        }
        else if (i>65&&i<=85)
        {
            gotoxy(7+l,18);
            cout<<i<<"-";
            l++;
            l++;
            l++;
        }
        else if (i>85&&i<=99)
        {
            gotoxy(7+m,19);
            cout<<i<<"-";
            m++;
            m++;
            m++;
        }
        else if (i>100&&i<=115)
        {
            gotoxy(7+n,20);
            cout<<i<<"-";
            n++;
            n++;
            n++;
            n++;
        }
        else if (i>115&&i<=130)
        {
            gotoxy(7+o,21);
            cout<<i<<"-";
            o++;
            o++;
            o++;
            o++;
        }
        else if (i>130&&i<=145)
        {
            gotoxy(7+o,22);
            cout<<i<<"-";
            p++;
            p++;
            p++;
            p++;
        }
        else
        {
            gotoxy(7,23);
            cout << "Angka terlalu besar";
        }
    }
}

void gjlgnp(int a,int b, int x, int y)
{
    gotoxy(7,10);
    cout << "Program Menentukan Angka Ganjil dan Genap";
    gotoxy(7,12);
    cout << "Masukkan angka maksimal       : ";
    cin >> a;
    gotoxy(7,15);
    cout << "Bilangan Ganjil \n";
    gotoxy(7,16);
    int j=0,k=0,m=0;
    for (y=1; y<=a; y++)
    {
        if (y%2==1&&y<=50)
        {
            cout<<y<<"-";
        }
        else if (y%2==1&&y>50&&y<=95)
        {
            gotoxy(7+j,17);
            cout<<y<<"-";
            j++;
            j++;
            j++;
        }
        else if (y%2==1&&y>95&&y<=125)
        {
            gotoxy(7+k,18);
            cout<<y<<"-";
            k++;
            k++;
            k++;
            k++;
        }
        else if (y%2==1&&y>125&&y<=155)
        {
            gotoxy(7+m,19);
            cout<<y<<"-";
            m++;
            m++;
            m++;
            m++;
        }
    }
    gotoxy(7,20);
    cout << "Bilangan Genap \n";
    gotoxy(7,21);
    j=0,k=0,m=0;
    for (x=1; x<=a; x++)
    {
        if (x%2==0&&x<=50)
        {
            cout<<x<<"-";
        }
        else if (x%2==0&&x>50&&x<=95)
        {
            gotoxy(7+j,22);
            cout<<x<<"-";
            j++;
            j++;
            j++;
        }
        else if (x%2==0&&x>95&&x<=125)
        {
            gotoxy(7+k,23);
            cout<<x<<"-";
            k++;
            k++;
            k++;
            k++;
        }
        else if (x%2==0&&x>125&&x<=155)
        {
            gotoxy(7+m,24);
            cout<<x<<"-";
            m++;
            m++;
            m++;
            m++;
        }
    }
}

void segitigaangka(int a, int b, int x)
{
    gotoxy(7,10);
    cout << "Program Segitiga Angka \n";
    gotoxy(45,12);
    cout <<"Max 15 ";
    gotoxy(7,12);
    cout << "Masukkan Batas Angka : ";
    cin >> x;
    {
        for (a=1; a<=x; a++)
        {
            gotoxy(7,13+a);
            for (b=1; b<=a; b++)
            {
                cout<<b<<"";
            }
            cout<<endl;
        }
    }
}

void IPK(string namaa, int NilaiUjian)
{
    gotoxy(7,10);
    cout <<"Program Konversi Nilai IPK \n";
    gotoxy(7,27);
    cout <<"Note    :  NAMA TIDAK BOLEH PAKAI SPASI";
    gotoxy(7,12);
    cout <<"Nama Mahasiswa   :  ";
    cin >> namaa;
    gotoxy(7,13);
    cout<<"Masukan Nilai Ujian : ";
    cin>>NilaiUjian;

    if((NilaiUjian>= 80)&& (NilaiUjian<=100))
    {
        gotoxy(10,15);
        cout<<"Selamat Anda Mendapatkan Nilai A"<<endl;
    }
    else if ((NilaiUjian>=71)&&(NilaiUjian<=80))
    {
        gotoxy(10,15);
        cout<<"Selamat Anda Mendapatkan Nilai B"<<endl;
    }
    else if ((NilaiUjian>=51)&&(NilaiUjian<=70))
    {
        gotoxy(10,15);
        cout<<"Selamat Anda Mendapatkan Nilai C"<<endl;
    }
    else if ((NilaiUjian>=31)&&(NilaiUjian<=50))
    {
        gotoxy(10,15);
        cout<<"Selamat Anda Mendapatkan Nilai D"<<endl;
    }
    else if ((NilaiUjian>=0)&& (NilaiUjian<=30))
    {
        gotoxy(10,15);
        cout<<"Selamat Anda Mendapatkan Nilai E"<<endl;
    }
    else
    {
        gotoxy(10,15);
        cout<<"Nilai Anda Error"<<endl;
    }
}

void huruf(string a,string c, int g, int o=0, int j=0, int m=0,int l=0)
{
    gotoxy(7,10);
    cout << "Program Tampilan Huruf Vokal dan Konsonan";
    gotoxy (7,12);
    cout <<"Nama      : ";
    cin>>a;
    o=a.size();
    gotoxy (7,14);
    cout<< "Vokal     : ";
    if (j>0)
    {
        cout<<" = ";
        for (g=0; g<o; g++)
        {
            if (a[g]=='a'||a[g]=='i'||a[g]=='u'||a[g]=='e'||a[g]=='o'||a[g]=='A'||a[g]=='I'||a[g]=='U'||a[g]=='E'||a[g]=='O')
            {
                cout<<a[g]<<" ";
            }
        }
    }
    else
    {
        cout<<"Tak ada...";
    }
    gotoxy (7,15);
    cout<< "Konsonan  : ";

    if (m>0)
    {
        cout<<" = ";
        for (g=0; g<o; g++)
        {
            if (a[g]=='b'||a[g]=='c'||a[g]=='d'||a[g]=='f'||a[g]=='g'||a[g]=='h'||
                    a[g]=='j'||a[g]=='k'||a[g]=='l'||a[g]=='m'||a[g]=='n'||a[g]=='p'||
                    a[g]=='q'||a[g]=='r'||a[g]=='s'||a[g]=='t'||a[g]=='v'||a[g]=='w'||
                    a[g]=='x'||a[g]=='y'||a[g]=='z'||a[g]=='B'||a[g]=='C'||a[g]=='D'||
                    a[g]=='F'||a[g]=='G'||a[g]=='H'||a[g]=='J'||a[g]=='K'||a[g]=='L'||
                    a[g]=='M'||a[g]=='N'||a[g]=='P'||a[g]=='Q'||a[g]=='R'||a[g]=='S'||
                    a[g]=='T'||a[g]=='V'||a[g]=='W'||a[g]=='X'||a[g]=='Y'||a[g]=='Z')
            {
                cout<<a[g]<<" ";
            }
        }
    }
    else
    {
        cout<<"Tak ada...";
    }
}

void array1(int i, int x,int  y, int cc[10])
{
    gotoxy(7,10);
    cout<<"Penjumlahan Angka\n";
    gotoxy(7,12);
    cout<<"Masukan Jumlah Angka Yang Ingin Dijumlahkankan : ";
    cin>>x;
    y=0;
    for (i=0; i<x; i++)
    {
        gotoxy(7,14+i);
        cout<<"Masukan angka ke "<<i+1<< " = ";
        cin>>cc[i];
    }
    gotoxy(32,14);
    for (i=0; i<x; i++)
    {
        y=y+cc[i];
        cout<<cc[i]<<"+";
    }
    cout<< " = "<<y;
}

void array2(int i,int j,int x,int y,int aa[10][10],int bb[10][10])
{
    gotoxy(5,10);
    cout<<"PENJUMLAHAN ARRAY 2 DIMENSI (MATRIKS) \n";
    gotoxy(5,12);
    cout<<"Masukan Jumlah Baris : ";
    cin>>x;
    gotoxy(35,12);
    cout<<" Jumlah Kolom : ";
    cin>>y;
    gotoxy(55,12);
    cout<<"[Max 4]";
    gotoxy(5,14);
    cout<<" ";
    gotoxy(8,14); cout<<" Matriks A";
    gotoxy(0,15);
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            cout<<"\t indeks ke "<<i+1<< ","<<j+1<<" = ";
            cin>>aa[i][j];
        }
    }
    gotoxy(32,14); cout<<" Matriks B";
    gotoxy(0,15);
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            cout<<"\t\t\t\t indeks ke "<<i+1<< ","<<j+1<<" = ";
            cin>>bb[i][j];
        }
    }
    goto output;
    {
output:
        system("cls");
        kotak();
        array12();
        gotoxy(80,8);
        cout<<(char)203;
        for(int i=0; i<20; i++)
        {
            gotoxy (80,7+i);
            cout<<(char)186;
        }
        gotoxy(80,1);
        cout<<(char)203;
        gotoxy(80,29);
        cout<<(char)202;
        gotoxy(93,6);
        cout<<"DAFTAR MENU";
        gotoxy(83,8);
        cout<<(char)218;
        gotoxy(115,8);
        cout<<(char)191;
        gotoxy(83,22);
        cout<<(char)192;
        gotoxy(115,22);
        cout<<(char)217;
        for(int i=84; i<115; i++)
        {
            gotoxy(i,8);
            cout<<(char)196;
            gotoxy(i,22);
            cout<<(char)196;
        }
        for(int i=0; i<9; i++)
        {
            gotoxy(88+i,25);
            cout<<(char)196;
            gotoxy(102+i,25);
            cout<<(char)196;
        }
        for(int i=0; i<5; i++)
        {
            gotoxy(97+i,24);
            cout<<(char)196;
            gotoxy(97+i,26);
            cout<<(char)196;
        }
        gotoxy(96,24);
        cout<<(char)218;
        gotoxy(102,24);
        cout<<(char)191;
        gotoxy(96,26);
        cout<<(char)192;
        gotoxy(102,26);
        cout<<(char)217;
        gotoxy(97,25);
        cout<<(char)180;
        gotoxy(101,25);
        cout<<(char)195;
        //gotoxy(80,2); cout<<(char)203;
        for(int i=2; i<29; i++)
        {
            gotoxy(80,i);
            cout<<(char)186;
        }
    }
    gotoxy (32,5);
    cout<<" HASIL PENJUMLAHAN";
    gotoxy (0,7);
    for (i=0; i<x; i++)
    {
        cout<<"\t\t";
        for (j=0; j<y; j++)
        {
            cout<<" ["<<aa[i][j]<< "] ";
        }
        cout<<endl;
    }
    gotoxy (38,5+y); cout<<" + ";
    gotoxy (0,7);
    for (i=0; i<x; i++)
    {
        cout<<"\t\t\t\t\t\t   ";
        for (j=0; j<y; j++)
        {
            cout<<" ["<<bb[i][j]<< "] ";
        }
        cout<<endl;
    }
    gotoxy (10,14);
    cout<<" \t Penjumlahan Matrik A dengan Matriks B adalah : "<<endl;
    gotoxy(0,16);
    for (i=0; i<x; i++)
    {
        cout<<"\t\t\t\t";
        for (j=0; j<y; j++)
        {
            cout<<" ["<<aa[i][j]+bb[i][j]<< "] ";
        }
        cout<<endl;
    }
}

void kalkulator(int *apoin, int *bpoin, int z)
{
    switch(z)
    {
    case 1:
        gotoxy(7,18);
        cout<< " Penjumlahan antara "<<*apoin<< " + "<<*bpoin<< " adalah : "<< *apoin+*bpoin;
        break;
    case 2:
        gotoxy(7,18);
        cout<< " Pengurangan antara "<<*apoin<< " - "<<*bpoin<< " adalah : "<< *apoin-*bpoin;
        break;
    case 3:
        gotoxy(7,18);
        cout<< " Perkalian antara "<<*apoin<< " * "<<*bpoin<< " adalah : "<< (*apoin)*(*bpoin);
        break;
    case 4:
        gotoxy(7,18);
        cout<< " Pembagian antara "<<*apoin<< " / "<<*bpoin<< " adalah : "<< (*apoin)/(*bpoin)<<" sisa "<<(*apoin)%(*bpoin);
        break;
    default:
        gotoxy(7,18);
        cout<< " MENU SALAH!!! ";
    }
}

struct tl
{
    char hari[10];
    char tgl[4];
    char bln[10];
    char thn[5];
};

struct alamat
{
    char kp[10];
    int rt;
    int rw;
    char ds[10];
    char kec[10];
    char kab[10];
    char prov[15];
};

struct ktp
{
    tl coba;
    alamat saya;
    string nama;
};

void KTP()
{
    ktp a;
    gotoxy(5,10);
    cout<<"Program Data KTP";
    gotoxy(5,12);
    cout<<"Masukan Nama: ";
    cin>>a.nama;
    gotoxy(5,13);
    cout<<"TanggalLahir: "<<endl;
    gotoxy(5,14);
    cout<<" - Tempat   : ";
    cin>>a.coba.hari;
    gotoxy(5,15);
    cout<<" - Tanggal  : ";
    cin>>a.coba.tgl;
    gotoxy(5,16);
    cout<<" - Bulan    : ";
    cin>>a.coba.bln;
    gotoxy(5,17);
    cout<<" - Tahun    : ";
    cin>>a.coba.thn;
    gotoxy(5,18);
    cout<<"Alamat      : ";
    cin>>a.saya.kp;
    gotoxy(5,19);
    cout<<" - RT       : ";
    cin>>a.saya.rt;
    gotoxy(5,20);
    cout<<" - RW       : ";
    cin>>a.saya.rw;
    gotoxy(5,21);
    cout<<" - Desa     : ";
    cin>>a.saya.ds;
    gotoxy(5,22);
    cout<<" - Kecamatan: ";
    cin>>a.saya.kec;
    gotoxy(5,23);
    cout<<" - Kabupaten: ";
    cin>>a.saya.kab;
    gotoxy(5,24);
    cout<<" - Provinsi : ";
    cin>>a.saya.prov;
    gotoxy(30,12);
    cout<<"Nama      : "<<a.nama;
    gotoxy(30,13);
    cout<<"TTL       : "<<a.coba.hari<<"," <<a.coba.tgl<<"/"<<a.coba.bln<<"/"<<a.coba.thn;
    gotoxy(30,14);
    cout<<"Alamat    : ";
    gotoxy(30,15);
    cout<<" Jl/Kp    : "<<a.saya.kp;
    gotoxy(30,16);
    cout<<" Rt/Rw    : "<<a.saya.rt<<"/"<<a.saya.rw;
    gotoxy(30,17);
    cout<<" Desa/Kel : "<<a.saya.ds;
    gotoxy(30,18);
    cout<<" Kecamatan: "<<a.saya.kec;
    gotoxy(30,19);
    cout<<" Kabupaten: "<<a.saya.kab;
    gotoxy(30,20);
    cout<<" Provinsi : "<<a.saya.prov;
}

struct shop
{
    string barang;
    string id;
    int price;
    int quant;
};//daftar

void kasir()
{
    gotoxy(7,10);
    cout<<"Program Penjualan Barang ";
    gotoxy(7,12);
    cout<<"Input Data Barang"<<endl;
    int x;
    int tot=0,j=0;
    gotoxy(7,13);
    cout<<"Masukan Jumlah Barang    : " ;
    cin>>x;
    shop daftar[x];
    for (int i=0; i<x; i++)
    {
        gotoxy(7,15+j);
        cout<<" Input Nama barang ke "<<i+1<<"   : ";
        cin>>daftar[i].barang;
        gotoxy(7,16+j);
        cout<<" Input Kode barang        : ";
        cin>>daftar[i].id;
        gotoxy(7,17+j);
        cout<<" Input Banyak Barang      : ";
        cin>>daftar[i].quant;
        gotoxy(7,18+j);
        cout<<" Harga satuan             : Rp.";
        cin>>daftar[i].price;
        j++,j++,j++,j++,j++;
    }
    goto output;
    {
output:
        system("cls");
        kotak();
        struck1();
        gotoxy(80,8);
        cout<<(char)203;
        for(int i=0; i<20; i++)
        {
            gotoxy(80,7+i);
            cout<<(char)186;
        }
        gotoxy(80,1);
        cout<<(char)203;
        gotoxy(80,29);
        cout<<(char)202;
        gotoxy(93,6);
        cout<<"DAFTAR MENU";
        gotoxy(83,8);
        cout<<(char)218;
        gotoxy(115,8);
        cout<<(char)191;
        gotoxy(83,22);
        cout<<(char)192;
        gotoxy(115,22);
        cout<<(char)217;
        for(int i=84; i<115; i++)
        {
            gotoxy(i,8);
            cout<<(char)196;
            gotoxy(i,22);
            cout<<(char)196;
        }
        for(int i=0; i<9; i++)
        {
            gotoxy(88+i,25);
            cout<<(char)196;
            gotoxy(102+i,25);
            cout<<(char)196;
        }
        for(int i=0; i<5; i++)
        {
            gotoxy(97+i,24);
            cout<<(char)196;
            gotoxy(97+i,26);
            cout<<(char)196;
        }
        gotoxy(96,24);
        cout<<(char)218;
        gotoxy(102,24);
        cout<<(char)191;
        gotoxy(96,26);
        cout<<(char)192;
        gotoxy(102,26);
        cout<<(char)217;
        gotoxy(97,25);
        cout<<(char)180;
        gotoxy(101,25);
        cout<<(char)195;
        //gotoxy(80,2); cout<<(char)203;
        for(int i=2; i<29; i++)
        {
            gotoxy(80,i);
            cout<<(char)186;
        }
        gotoxy(9,3);
        cout<<"                      TOKO BUKU DEDE"<<endl;
        gotoxy(9,5);
        cout<<" :==========================================================:"<<endl;
        gotoxy(9,6);
        cout<<" | NAMA BARANG | HARGA SATUAN | BANYAK BARANG |    TOTAL    |"<<endl;
        gotoxy(9,7);
        cout<<" :==========================================================:"<<endl;
        gotoxy(9,8);
        int j=0;
        for (int i=0; i<x; i++)
        {
            j=j+i;
            gotoxy(10,8+i);
            cout<<"| ";
            cout<<setiosflags(ios::right)<<setw(12)<<daftar[i].barang<<"| Rp. ";
            cout<<setiosflags(ios::right)<<setw(8)<<daftar[i].price<<" |";
            cout<<setiosflags(ios::right)<<setw(14)<<daftar[i].quant<<" |";
            cout<<"Rp."<<setiosflags(ios::right)<<setw(9)<<daftar[i].price*daftar[i].quant<<" |";
            tot=tot+(daftar[i].quant*daftar[i].price); //proses penjumlahan0-
            cout<<endl;
        }
        gotoxy(9,9+j);
        cout<<" :==========================================================:"<<endl;
        gotoxy(9,10+j);
        cout<<" |                                  Total" << setiosflags(ios::right)<<setw(10)<<"| Rp."
            << setiosflags(ios::right)<<setw(8)<<tot<<" |"<<endl;
        gotoxy(9,11+j);
        cout<<" :==========================================================:"<<endl;
        gotoxy(9,14+j);
        cout<<"                      Terima Kasih!\n";
        gotoxy(9,15+j);
        cout<<"            Jangan Lupa Untuk Berkunjung Kembali\n";
    }
}

void kaler()
{
    for (int j=0; j<=1e8; j++);
    {
        UI2();
        system("color b");
        system("color 0b");
        system("color b0");
    }
    for (int j=0; j<=1e5; j++);
    {
        UI1();
        system("color b");
        system("color b0");
        system("color 0b");
    }
    for (int j=0; j<=1e8; j++);
    {
        UI2();
        system("color b");
        system("color fb");
        system("color b0");
    }
}

int main()
{
    float phi;
    int a,b,c;
    string xx[20],namaa,aaa,ccc;
    int cc[10],aa[10][10],bb[10][10];
    int menu, menu2;
    char nama[20];
    kaler();
    system("color b0");
    strcpy(pesan,"Create by Luthfiyah Sakinah TRPL PEI 2019");
    for(int i=0; i<3; i++)
    {
        pin();
        int pin;
        gotoxy(96,17);
        cin>>pin;
        if(pin==190702)
            goto menyu;
    }
    return 0;
menyu:
    {
        kotak();
        system("color b0");
        gotoxy(55,14);
        cout<<"WELCOME";
        char kar1=177, kar2=219;
        gotoxy(47,17);
        for (int i=0; i<=20; i++)
            cout<<kar1;
        gotoxy(47,17);
        for (int i=0; i<=20; i++)
        {
            cout<<kar2;
            for (int j=0; j<=1e7; j++);
        }

        gotoxy(50,10);
        if(1==1)
            goto menu_utama;//}
menu_utama:
        strcpy(pesan,"Selamat Datang Di Program MAKE N FIND");
        system("color b0");
        menu_1();
        gotoxy(28,12);
        cout<<"1";
        gotoxy(24,14);
        cout<<"OPERATOR";
        gotoxy(58,12);
        cout<<"2";
        gotoxy(54,13);
        cout<<"PERULANGAN";
        gotoxy(51,14);
        cout<<"DAN PERCABANGAN";
        gotoxy(91,12);
        cout<<"3";
        gotoxy(89,14);
        cout<<"ARRAY";
        gotoxy(43,18);
        cout<<"4";
        gotoxy(40,20);
        cout<<"POINTER";
        gotoxy(75,18);
        cout<<"5";
        gotoxy(72,20);
        cout<<"STRUCT";
        gotoxy(8,25);
        cout<<"----------------";
        gotoxy(28,25);
        cout<<"0";
        gotoxy(9,26);
        cout<<"Keluar";
        gotoxy(90,25);
        cout<<"----------------";
        gotoxy(90,26);
        cout<<"Pilih menu   : ";
        gotoxy(109,26);
        cin>>menu;
        switch(menu)
        {
        case 1:
            strcpy(pesan,"OPERATOR");
apa:
            menu_2();
            op();
            gotoxy(99,25);
            cin>>menu2;
            switch(menu2)
            {
            case 1:
                strcpy(pesan,"OPERATOR >> RUMUS PERSEGI PANJANG");
contoh1:
                menu_2();
                backmenu();
                persegigenjang(a,a);
satu1:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto apa;
                    break;
                case 2:
                    goto contoh1;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto satu1;
                    break;
                }
                break;
            case 2:
                strcpy(pesan,"OPERATOR >> RUMUS LINGKARAN");
contoh2:
                menu_2();
                backmenu();
                lingkaran(phi,a);
dua1:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto apa;
                    break;
                case 2:
                    goto contoh2;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto dua1;
                    break;
                }
                break;
            case 3:
                strcpy(pesan,"OPERATOR >> RUMUS SEGITIGA");
contoh3:
                menu_2();
                backmenu();
                segitiga(a,a,a,a,a);
tiga1:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto apa;
                    break;
                case 2:
                    goto contoh3;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto tiga1;
                    break;
                }
                break;
            case 4:
                strcpy(pesan,"OPERATOR >> RUMUS JAJAR FENJANG");
contoh4:
                menu_2();
                backmenu();
                jajargenjang(a,a,a);
empat1:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto apa;
                    break;
                case 2:
                    goto contoh4;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto empat1;
                    break;
                }
                break;
            case 5:
                strcpy(pesan,"OPERATOR >> RUMUS TABUNG");
contoh5:
                menu_2();
                backmenu();
                tabung(phi,a,a);
lima1:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto apa;
                    break;
                case 2:
                    goto contoh5;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto lima1;
                    break;
                }
                break;
            case 6:
                strcpy(pesan,"OPERATOR >> RUMUS BOLA");
contoh6:
                menu_2();
                backmenu();
                bola(phi,a);
enam1:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto apa;
                    break;
                case 2:
                    goto contoh6;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto enam1;
                    break;
                }
                break;
            case 7:
                strcpy(pesan,"OPERATOR >> KONVERSI MATA UANG");
contoh7:
                menu_2();
                backmenu();
                duit(a,a,a,a,a,a,a,a,a,a);
tujuh1:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto apa;
                    break;
                case 2:
                    goto contoh7;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto tujuh1;
                    break;
                }
                break;
            case 8:
                strcpy(pesan,"OPERATOR >> KONVERSI WAKTU");
contoh8:
                menu_2();
                backmenu();
                waktu(a,a,a,a,a,a);
del1:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto apa;
                    break;
                case 2:
                    goto contoh8;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto del1;
                    break;
                }
                break;
            case 0:
                goto menu_utama;
            default:
                goto apa;
            }
        case 2:
            strcpy(pesan,"PERULANGAN DAN PERCABANGAN");
per:
            menu_2();
            per();
            gotoxy(99,25);
            cin>>menu2;
            switch(menu2)
            {
            case 1:
                strcpy(pesan,"PERULANGAN DAN PERCABANGAN >> CETAK ANGKA DINAMIS");
yang1:
                menu_2();
                backmenu1();
                cetakangka(a,a);
Per1:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto per;
                    break;
                case 2:
                    goto yang1;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto Per1;
                    break;
                }
                break;
            case 2:
                strcpy(pesan,"PERULANGAN DAN PERCABANGAN >> CETAK ANGKA GANJIL GENAP");
yang2:
                menu_2();
                backmenu1();
                gjlgnp(a,a,a,a);
Per2:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto per;
                    break;
                case 2:
                    goto yang2;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto Per2;
                    break;
                }
                break;
            case 3:
                strcpy(pesan,"PERULANGAN DAN PERCABANGAN >> SEGITIGA ANGKA");
yang3:
                menu_2();
                backmenu1();
                segitigaangka(a,a,a);
Per3:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto per;
                    break;
                case 2:
                    goto yang3;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto Per3;
                    break;
                }
                break;
            case 4:
                strcpy(pesan,"PERULANGAN DAN PERCABANGAN >> PROGRAM IPK");
yang4:
                menu_2();
                backmenu1();
                IPK(namaa,a);
Per4:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto per;
                    break;
                case 2:
                    goto yang4;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto Per4;
                    break;
                }
                break;
            case 5:
                strcpy(pesan,"PERULANGAN DAN PERCABANGAN >> CETAK KONSONAN");
yang5:
                menu_2();
                backmenu1();
                huruf(nama,ccc,a,a,a,a,a);
Per5:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto per;
                    break;
                case 2:
                    goto yang5;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto Per5;
                    break;
                }
                break;
            case 0:
                goto menu_utama;
            default:
                goto per;
            }
        case 3:
            strcpy(pesan,"ARRAY");
array12:
            menu_2();
            array12();
            gotoxy(99,25);
            cin>>menu2;
            switch(menu2)
            {
            case 1:
                strcpy(pesan,"ARRAY >> ARRAY 1 DIMENSI");
mera1:
                menu_2();
                backmenu1();
                array1(a,a,a,cc);
array121:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto array12;
                    break;
                case 2:
                    goto mera1;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto array121;
                    break;
                }
                break;
            case 2:
                strcpy(pesan,"ARRAY >> ARRAY 2 DIMENSI");
mera2:
                menu_2();
                backmenu2();
                array2(a,a,a,a,aa,bb);
array122:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto array12;
                    break;
                case 2:
                    goto mera2;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto array122;
                    break;
                }
                break;
            case 0:
                goto menu_utama;
            default:
                goto array12;
            }
        case 4:
            strcpy(pesan,"POINTER");
poi:
            menu_2();
            pointer1();
            gotoxy(99,25);
            cin>>menu2;
            switch(menu2)
            {
            case 1:
                strcpy(pesan,"POINTER >> KALKULATOR SEDERHANA");
suki1:
                menu_2();
                backmenu3();
                gotoxy(7,10);
                cout<< "Program Kalkulator ";
                gotoxy(7,12);
                cout<< "1. Penjumlahan ";
                gotoxy(35,12);
                cout<< "2. Pengurangan ";
                gotoxy(7,13);
                cout<< "3. Perkalian ";
                gotoxy(35,13);
                cout<< "4. Pembagian ";
                gotoxy(7,15);
                cout << " Masukan x = ";
                cin>>a;
                gotoxy(35,15);
                cout << " Masukan y = ";
                cin>>b;
                cout<<endl;
                gotoxy(7,17);
                cout << " Masukan Operasi yang akan dilakukan = ";
                cin>>c;
                kalkulator(&a,&b,c);
poi1:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto poi;
                    break;
                case 2:
                    goto suki1;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto poi1;
                    break;
                }
                break;
            case 0:
                goto menu_utama;
            default:
                goto poi;
            }
        case 5:
            strcpy(pesan,"SRUCT");
strak:
            menu_2();
            struck1();
            gotoxy(99,25);
            cin>>menu2;
            switch(menu2)
            {
            case 1:
                strcpy(pesan,"SRUCT >> DATA KTP");
mu1:
                menu_2();
                backmenu4();
                KTP();
strak11:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto strak;
                    break;
                case 2:
                    goto mu1;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto strak11;
                    break;
                }
                break;
            case 2:
                strcpy(pesan,"SRUCT >> KASIR");
mu2:
                menu_2();
                backmenu4();
                kasir();
strak12:
                gotoxy(99,25);
                cin>>menu2;
                switch(menu2)
                {
                case 0:
                    goto menu_utama;
                    break;
                case 1:
                    goto strak;
                    break;
                case 2:
                    goto mu2;
                    break;
                default:
                    gotoxy(99,25);
                    cout<<(char)255;
                    goto strak12;
                    break;
                }
                break;
            case 0:
                goto menu_utama;
            default:
                goto strak;
            }
        case 0:
            kotak();
            gotoxy(45,14);
            cout<<"Please Wait To The Close Program";
            char a=177, b=219;
            gotoxy(50,17);
            for (int i=0; i<=20; i++)
                cout<<a;
            gotoxy(50,17);
            for (int i=0; i<=20; i++)
            {
                cout<<b;
                for (int j=0; j<=1e8; j++); //You can also use sleep function instead of for loop
            }

            gotoxy(56,19);
            cout<<"GOOD BYE";
            gotoxy(58,27);
            cout<<" ";

            break;
        }
    }
}

