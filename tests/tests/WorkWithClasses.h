#pragma once
#include <iostream>
// ��������� ��������� �� ������������ ����� ������ ���� ������
struct SimpleStruct1
{
	int field1;
	int field2;
	int field3;
	int field4;
	int field5;
	int field6;
	int field7;
	int field8;
	int field9;

	void clear (void)	// ������� �������. � ����� ������� ���� ���������� 0
	{
		memset(this, 0, sizeof(*this));
	}

	void fillObjectRand(void)	// ������� ���������� �������� ���������
	{
		for (int i = 0; i < sizeof(SimpleStruct1) / sizeof(int);  i++) // i < ���������� ������ ���������� ��� ������ ��������� / �� ���������� ������ ���������� ��� 1 int
		{
			((int*)this)[i] = rand();	// �������� ������ � ������������ ���� � ��������� ��� ��������� ���������
		}
	}

	SimpleStruct1 (void)
	{
		clear();
		fillObjectRand();
	}
};
/*
// ��������� ��������� �� ������������ ����� ������� ���� ������
struct SimpleStruct2
{
	int			field1;
	double		field2;
	double		field3;
	char		field4;
	char		field5;
	std::string field6;
	std::string field7;
	bool		field8;
	int			field9;

	void clear(void)
	{
		memset(this, 0, sizeof(*this));
	}

	void fillObjectRand(void)	// ������� ���������� �������� ���������
	{
		for (int i = 0; ; i++) // i < ���������� ������ ���������� ��� ������ ��������� / �� ���������� ������ ���������� ��� 1 int
		{
			this[i] = 1;
			((auto*)this)[i] = rand();	// �������� ������ � ������������ ���� � ��������� ��� ��������� ���������
		}
	}

	SimpleStruct2(void)
	{
		clear();
	}
	
};
*/
// ����������� ����� ��� ������ � ������������� ��������
class WorkWithClasses
{
	struct SimpleStruct1;
//	struct SimpleStruct2;

	void completeBustStructElements (SimpleStruct1 &); // ������� �������� ���� ����� ��������� � �����
//	void completeBustStructElements (SimpleStruct2 &); // ������� �������� ���� ����� ��������� � �����
};

