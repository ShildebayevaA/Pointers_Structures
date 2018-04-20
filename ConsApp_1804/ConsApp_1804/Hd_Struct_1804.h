struct Hockey
{
	char FIO;
	int vozrast;
	int cnt_games;
	int cnt_goals;
};
struct Tovar
{
	char entitle;
	char vendor;
	int man_year;
	int	quantity;
	int price;
};
struct Production
{
	char entitle;
	char vendor;
	int man_date;
	int	quantity;
	int price;
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

int Enuma(int strt, int fl);
void sozd_FIO(char * name, int dlina);
void print_Hockey(Hockey * DetroitRedWings, int i);
void print_Tovar(Tovar * Racks, int i);
void print_Production(Production * Magazines, int i);
void print_Empoyee(Employee * RAMS, int i);
void print_Student(Student * progers, int i);
