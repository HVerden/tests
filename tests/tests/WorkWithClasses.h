#pragma once
#include <iostream>
// Структура состоящая из произвольных полей одного типа данных
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

	void clear (void)	// функция очистки. В адрес каждого поля копируется 0
	{
		memset(this, 0, sizeof(*this));
	}

	void fillObjectRand(void)	// Функция заполнения объектов структуры
	{
		for (int i = 0; i < sizeof(SimpleStruct1) / sizeof(int);  i++) // i < Количества памяти выделенной под объект структуры / на количество памяти выделенной под 1 int
		{
			((int*)this)[i] = rand();	// Получаем доступ к необходимому полю и заполняем его случайным значением
		}
	}

	SimpleStruct1 (void)
	{
		clear();
		fillObjectRand();
	}
};
/*
// Структура состоящая из произвольных полей разного типа данных
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

	void fillObjectRand(void)	// Функция заполнения объектов структуры
	{
		for (int i = 0; ; i++) // i < Количества памяти выделенной под объект структуры / на количество памяти выделенной под 1 int
		{
			this[i] = 1;
			((auto*)this)[i] = rand();	// Получаем доступ к необходимому полю и заполняем его случайным значением
		}
	}

	SimpleStruct2(void)
	{
		clear();
	}
	
};
*/
// Абстрактный класс для работы с произвольными классами
class WorkWithClasses
{
	struct SimpleStruct1;
//	struct SimpleStruct2;

	void completeBustStructElements (SimpleStruct1 &); // Функция перебора всех полей структуры в цикле
//	void completeBustStructElements (SimpleStruct2 &); // Функция перебора всех полей структуры в цикле
};

