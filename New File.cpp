#include <iostream>
int command;
using namespace std;

int check(void)
{

}
//servaprivodN управление сервами
void servaprivod0(int poz);
void servaprivod1(int poz);

void servaprivod2(int poz);
void servaprivod3(int poz);

void servaprivod4(int poz);
void servaprivod5(int poz);

int stvorka(int poz)
{
	servaprivod0(poz); // надо продумать алгоритм оброботки ошибок
	servaprivod1(poz);
	return 0;
}

int UpDownKr(int poz)
{
	// надо продумать алгоритм оброботки ошибок
	servaprivod2(poz);
	servaprivod3(poz);
}

int main(void)
{
	int f = 0;
	do
	{
		if (command > 0) // если Ѕ  дает команду числом >0 то крыло рыскладываетс€ на угл равный этому числу
		{
			stvorka(1);// надо продумать алгоритм оброботки ошибок
			UpDownKr(1);
			do
			{
				servaprivod4(command);
				servaprivod5(command);
			} while (command>0);
		}
		else if (command == 0) // если 0 то крыло складывваетс€
		{
			do
			{
				servaprivod4(command);
				servaprivod5(command);
			} while (command != 0);
			UpDownKr(0);
			stvorka(0);// надо продумать алгоритм оброботки ошибок
		}
	} while (1);
	return 0;
}