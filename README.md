# Pointers_Structures
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

struct Hockey
{
	char FIO;
	int vozrast;
	int cnt_games;
	int cnt_goals;
};

struct Employee
{
	char FIO;
	int god_r;
	char position;
	char education;
	int salary;
};

struct Student
{
	char FIO;
	int group;
	int god_r;
	int gp_phys;
	int gp_math;
	int gp_ITE;
};

int Enuma(int strt, int fl)
{
	int res = 0;
	res = strt+rand() % fl;
	return res;
};

void sozd_FIO(char * name, int dlina = 24)
{
	if (dlina == 0)
		dlina = 20+rand() % 6;
	for (int i = 0; i < dlina; i++)
	{
		if (i == 0)
			*(name + i) = (char)(65 + rand() % 24);
		else
			*(name + i) = (char)(97 + rand() % 24);

	}
	*(name + dlina) = '\0';
};
void print_Hockey(Hockey * DetroitRedWings, int i)
{
	printf("%26c \t%2d \t%2d \t%d\n",
		(DetroitRedWings + i)->FIO,
		(DetroitRedWings + i)->vozrast,
		(DetroitRedWings + i)->cnt_games,
		(DetroitRedWings + i)->cnt_goals);
		
}
void print_Empoyee(Employee * RAMS, int i)
{
	printf("%30c %6d %10c %10c %4d usd\n",
		(RAMS + i)->FIO,
		(RAMS + i)->god_r,
		(RAMS + i)->position,
		(RAMS + i)->education,
		(RAMS + i)->salary);

}
void print_Student(Student * progers, int i)
{
	printf("%26c %8d %8d %4d %4d %4d\n",
		(progers + i)->FIO,
		(progers + i)->group,
		(progers + i)->god_r,
		(progers + i)->gp_phys,
		(progers + i)->gp_math,
		(progers + i)->gp_ITE);

}

int main()
{
	using namespace std;
		
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	
	int NZ = 0;
	printf("Urok_1__Modul__9__1_Domasnaa_rabota_1523069928");
	printf("Введите номер задания: ");
	scanf_s("%d", &NZ);
	cin.get();

	if (NZ == 1)
	{
		int kolvo = 12;
		int Sum = 0;
		Hockey * DetroitRedWings = (Hockey *)malloc(kolvo * sizeof(Hockey));

		if (DetroitRedWings == NULL)
			printf("память не выделена");
		else
		{
			for (int i = 0; i < kolvo; i++)
			{
				(DetroitRedWings + i)->FIO =(char) malloc(25 * sizeof(char));
				sozd_FIO(&((DetroitRedWings + i)->FIO), 25);

				(DetroitRedWings + i)->vozrast = Enuma(20, 8);
				(DetroitRedWings + i)->cnt_games = Enuma(15, 12);
				(DetroitRedWings + i)->cnt_goals = Enuma(5, 15);
			}
		}
		printf("Игроки-------------------возраст--- игры---шайбы\n");
		for (int i = 0; i < kolvo; i++)
		{
			print_Hockey(DetroitRedWings, i);
			Sum += (DetroitRedWings + i)->vozrast;
		}
		printf("Средний возраст хоккеистов: %d\n", Sum);
		printf("Хоккеисты возраст которых <25:\n");
		for (int i = 0; i < kolvo; i++)
		{
			if ((DetroitRedWings + i)->vozrast < 25)
				print_Hockey(DetroitRedWings, i);
		}
	}
	else if (NZ == 2)
	{
	
	
	}
	else if (NZ == 3)
	{


	}

	else if (NZ == 4)
	{
		int kolvo = 12;
		int min_vozr = 0;
		int min_ind = 0;
		Employee * RAMS = (Employee *)malloc(kolvo * sizeof(Employee));

		if (RAMS == NULL)
			printf("память не выделена");
		else
		{
			for (int i = 0; i < kolvo; i++)
			{
				(RAMS + i)->FIO = (char)malloc(25 * sizeof(char));
				sozd_FIO(&((RAMS + i)->FIO), 25);

				(RAMS + i)->god_r = Enuma(1950, 49);
				strcpy_s(&((RAMS + i)->position), 8, "position");
				strcpy_s(&((RAMS + i)->education), 9, "education");
				(RAMS + i)->salary = Enuma(3200, 1200);
				
			}
		
		printf("Работники-------------------год рожд---должность--образование--зарплата\n");
		for (int i = 0; i < kolvo; i++)
		{
			print_Empoyee(RAMS, i);
			if (min_vozr < (2018 - (RAMS + i)->god_r))
			{
				min_vozr = (RAMS + i)->god_r;
				min_ind = i;
			}
		}
		printf("Сведения о самом младшем сотруднике:\n");
		print_Empoyee(RAMS, min_ind);
		}
	}
	
	else if (NZ == 5)
	{
		int kolvo = 12;
		int cnt = 0;
		Student * progers = (Student *)malloc(kolvo * sizeof(Student));

		if (progers == NULL)
			printf("память не выделена");
		else
		{
			for (int i = 0; i < kolvo; i++)
			{
				
				(progers + i)->FIO = (char)malloc(25 * sizeof(char));
				sozd_FIO(&(progers + i)->FIO, 25);

				(progers + i)->group = Enuma(173200, 85); 
				(progers + i)->god_r = Enuma(1999, 3);
				(progers + i)->gp_phys = Enuma(90, 6);
				(progers + i)->gp_math = Enuma(90, 6);
				(progers + i)->gp_ITE = Enuma(85, 11);
			}
		
		printf("студенты -------------------группа--год рожд---Физика-Математика-Информатика\n");
		for (int i = 0; i < kolvo; i++)
			print_Student(progers, i);
				
		printf("Студенты сдавшие математику на 95:\n");
		for (int i = 0; i < kolvo; i++)
		{
			if ((progers + i)->gp_math == 95)
			{
				print_Student(progers, i);
				cnt++;
			}
		}
		printf("Количество студентов сдавших математику на 95: %d \n", cnt);
	}
	}
	return 0;
}
