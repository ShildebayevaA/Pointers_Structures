// ConsApp_1804.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>
#include "Hd_Struct_1804.h";

using namespace std;

int main()
{
	printf("Urok_1__Modul__9__1_Domasnaa_rabota_1523069928\n");
	
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int NZ = 0;
	
	do
	{
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
				(DetroitRedWings + i)->FIO = (char)malloc(25 * sizeof(char));
				sozd_FIO(&((DetroitRedWings + i)->FIO), 25);

				(DetroitRedWings + i)->vozrast = Enuma(20, 8);
				(DetroitRedWings + i)->cnt_games = Enuma(15, 12);
				(DetroitRedWings + i)->cnt_goals = Enuma(5, 15);
			}
		}
		printf("Игроки----------------------возраст--- игры---шайбы\n");
		for (int i = 0; i < kolvo; i++)
		{
			//print_Hockey(DetroitRedWings, i);
			Sum += (DetroitRedWings + i)->vozrast;
		}
		printf("Средний возраст хоккеистов: %d\n", Sum/kolvo);
		printf("Хоккеисты возраст которых <25:\n");
		for (int i = 0; i < kolvo; i++)
		{
			if ((DetroitRedWings + i)->vozrast < 25)
				print_Hockey(DetroitRedWings, i);
		}
		free(DetroitRedWings);
	 }
	
	 else if (NZ == 2)
	{
		int kolvo = 12;
		float Sum = 0;
		Tovar * Racks = (Tovar *)malloc(kolvo * sizeof(Tovar));

		if (Racks == NULL)
			printf("память не выделена");
		else
		{
			for (int i = 0; i < kolvo; i++)
			{
				(Racks + i)->entitle = (char)malloc(15 * sizeof(char));
				sozd_FIO(&((Racks + i)->entitle), 15);
				(Racks + i)->vendor = (char)malloc(10 * sizeof(char));
				sozd_FIO(&((Racks + i)->vendor), 10);
				(Racks + i)->man_year = Enuma(2016, 3);
				(Racks + i)->quantity = Enuma(15, 12);
				(Racks + i)->price = Enuma(3500, 1500);
			}
			printf("Наименование--Производитель--год выпуска--кол-во--цена(usd)\n");
			for (int i = 0; i < kolvo; i++)
				print_Tovar(Racks, i);

			printf("Наименование--Производитель--год вып-2018--кол-во--цена(usd)\n");
			for (int i = 0; i < kolvo; i++)
			{
				if ((Racks + i)->man_year == 2018)
				{
					Sum += (Racks + i)->price;
					print_Tovar(Racks, i);
				}
			}
			printf("Общая сумма товаров выпущенных в 2018 году = %d (usd)\n", Sum);
		}
	free(Racks);
	}

	else if (NZ == 3)
	{
		int kolvo = 12;
		int min_price = 0;
		int min_ind = 0;
		int Smm = 0;
		Production * Magazines = (Production *)malloc(kolvo * sizeof(Production));

		if (Magazines == NULL)
			printf("память не выделена");
		else
		{
			for (int i = 0; i < kolvo; i++)
			{
				(Magazines + i)->entitle = (char)malloc(15 * sizeof(char));
				sozd_FIO(&((Magazines + i)->entitle), 15);
				(Magazines + i)->vendor = (char)malloc(10 * sizeof(char));
				sozd_FIO(&((Magazines + i)->vendor), 10);
				(Magazines + i)->man_date = Enuma(2016, 3);
				(Magazines + i)->quantity = Enuma(1500, 250);
				(Magazines + i)->price = Enuma(350, 150);
			}

			printf("Наименование--Производитель--дата выпуска--кол-во--цена(тг)\n");

			for (int i = 0; i < kolvo; i++)
			{
				print_Production(Magazines, i);
				if (min_price > (Magazines + i)->price)
				{
					min_price = (Magazines + i)->price;
					min_ind = i;
					Smm += (Magazines + i)->price;
				}
			}
			printf("Товар с минимальной стоимостью:\n");
			print_Production(Magazines, min_ind);
			printf("Средняя стоимость товаров  = %d (usd)\n", Smm/kolvo);
		}
	free(Magazines);
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
				sozd_FIO(&((RAMS + i)->FIO), i);

				(RAMS + i)->god_r = Enuma(1950, 49);
				strcpy_s(&((RAMS + i)->position), 8, "position");
				strcpy_s(&((RAMS + i)->education), 9, "education");
				(RAMS + i)->salary = Enuma(3200, 1200);
			}
			min_vozr = 2018 - (RAMS->god_r);
			printf("Работники-------------------год рожд---должность--образование--зарплата\n");
			for (int i = 0; i < kolvo; i++)
			{
				print_Empoyee(RAMS, i);
				if (min_vozr > (2018 - (RAMS + i)->god_r))
				{
					min_vozr = (RAMS + i)->god_r;
					min_ind = i;
				}
			}
			printf("Сведения о самом младшем сотруднике:\n");
			print_Empoyee(RAMS, min_ind);
		}
	free(RAMS);
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
				sozd_FIO(&((progers + i)->FIO), i);

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
	free(progers);
	}
	
	printf("Vvod nomera zadania 1 - 5, 0-exit: ");
	scanf_s("%d", &NZ);
	} while (NZ != 0); 
return 0;
}

