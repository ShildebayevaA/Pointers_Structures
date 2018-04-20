#include "stdafx.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>
#include "Hd_Struct_1804.h";

int Enuma(int strt, int fl)
{
	int res = 0;
	res = strt + rand() % fl;
	return res;
}
void sozd_FIO(char * name, int dlina)
{
	if (dlina == 0)
		dlina = 20 + rand() % 6;
	for (int i = 0; i < dlina; i++)
	{
		if (i == 0)
			*(name + i) = (char)(65 + rand() % 24);
		else
			*(name + i) = (char)(97 + rand() % 24);
	}
	*(name + dlina) = '\0';
	}
void print_Hockey(Hockey * DetroitRedWings, int i)
{
	for (int j = 0; j < i; j++)
			
	printf("%c  \t%d \t%d \t%d\n",
		(DetroitRedWings + i)->FIO,
		(DetroitRedWings + i)->vozrast,
		(DetroitRedWings + i)->cnt_games,
		(DetroitRedWings + i)->cnt_goals);
}
void print_Tovar(Tovar * Racks, int i)
{
	printf("%16c %10c %10d \t%4d \t%8d\n",
			(Racks + i)->entitle,
			(Racks + i)->vendor,
			(Racks + i)->man_year,
			(Racks + i)->quantity,
			(Racks + i)->price);
}
void print_Production(Production * Magazines, int i)
{
	printf("%16c %10c \t%d \t%d \t%d\n",
			(Magazines +i)->entitle,
			(Magazines +i)-> vendor,
			(Magazines +i)->man_date,
			(Magazines +i)->quantity,
			(Magazines +i)->price);
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
	printf("%c %8d %8d %4d %4d %4d\n",
		(progers + i)->FIO,
		(progers + i)->group,
		(progers + i)->god_r,
		(progers + i)->gp_phys,
		(progers + i)->gp_math,
		(progers + i)->gp_ITE);
}
