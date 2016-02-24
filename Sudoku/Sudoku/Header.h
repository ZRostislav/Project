#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

enum KEYS { UP, DOWN, LEFT, RIGHT };

enum Color
{
	Black = 0,			//������ = 0 ,
	DarkBlue = 1,		//�����-����� = 1 ,
	DarkGreen = 2,		//�����-������� = 2 ,
	DarkCyan = 3,		//�����-������� = 3 ,
	DarkRed = 4,		//�����-������� = 4 ,
	DarkMagenta = 5,	//�����-��������� = 5 ,
	DarkYellow = 6,		//�����-������ = 6 ,
	LightGray = 7,		//������-����� = 7 
	DarkGray = 8,		//�����-����� = 8 ,
	LightBlue = 9,		//������-����� = 9 ,
	LightGreen = 10,	//������-������� = 10 ,
	LightCyan = 11,		//������-������� = 11 ,
	LightRed = 12,		//������-������� = 12 ,
	LightMagenta = 13,	//������-��������� = 13 ,
	LightYellow = 14,	//������-������ = 14 ,
	White = 15			//����� = 15
};

/*
������ ������ � ������� 40 ���� � ������ ����� ���� �������;
������� � ������� 30 ���� � ������ ����� ���� �������;
���������� � ������� 25 ����� � ������ ����� ���� �������;
������� � ������� 22 ����� � ������ ����� ���� �������;
������ ������ � ������� 20 ���� � ������ ����� ����� ������ ������ �������.

Basic
Easy
Medium
Hard
Evil
*/