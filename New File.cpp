#include <iostream>
int command;
using namespace std;

int check(void)
{

}

//servaprivodN управление сервами
int servaprivod0(int poz)
int servaprivod1(int poz)

int servaprivod2(int poz)
int servaprivod3(int poz)

int servaprivod4(int poz)
int servaprivod5(int poz)

void mess_serv4(int st) //сообщает БК о завершении принятия угла
void mess_serv5(int st)//сообщает БК о завершении принятия угла
void mess_status(int st)

int stvorka(int poz)
{
	do
	{
		int st0, st1;
		st0 = servaprivod0(poz); // надо продумать алгоритм оброботки ошибок
		st1 = servaprivod1(poz);
		if (st0 == st1 == poz)
		{
			break;
		}
	} while (1);
	return 0;
}

int UpDownKr(int poz)
{
	// надо продумать алгоритм оброботки ошибок
	do
	{
		int st2, st3;
		st0 = servaprivod2(poz); // надо продумать алгоритм оброботки ошибок
		st1 = servaprivod3(poz);
		if (st2 == st3 == poz)
		{
			break;
		}
	} while (1);
}

int main(void)
{
	int status = 0;
	int st1, st2, f;
	st1 = st2 = f = 0;
	do
	{
		if (command > 0) // если БК дает команду числом >0 то крыло рыскладывается на угл равный этому числу
		{
			stvorka(1);// надо продумать алгоритм оброботки ошибок
			UpDownKr(1);
			status = 1;
			do
			{
				command = check();
				if (command == 0)
				{
					break;
				}
				st1 = servaprivod4(command);
				if (st1 == command)
				{
					mess_serv4(1);//сообщаем БК о завершении принятия угла
				}
				st2 = servaprivod5(command);
				if (st2 == command)
				{
					mess_serv5(1);//сообщаем БК о завершении принятия угла
				}
				if (st1 == st2 = command)
				{
					status = 1;
					mess_status(status);
				}
			} while (command>0);
		}
		else if (command == 0) // если 0 то крыло складыввается
		{
			do
			{
				st1 = servaprivod4(command);
				if (st1 == command)
				{
					mess_serv4(1);//сообщаем БК о завершении принятия угла
				}
				st2 = servaprivod5(command);
				if (st2 == command)
				{
					mess_serv5(1);//сообщаем БК о завершении принятия угла
				}
			} while (command != 0);
			UpDownKr(0);
			stvorka(0);// надо продумать алгоритм оброботки ошибок
			status = 0;
			status = 0;
			mess_status(status);
		}
	} while (1);
	return 0;
}