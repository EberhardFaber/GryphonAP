#include <iostream>
int command;
using namespace std;

int check(void)
{

}
//servaprivodN ���������� �������
void servaprivod0(int poz);
void servaprivod1(int poz);

void servaprivod2(int poz);
void servaprivod3(int poz);

void servaprivod4(int poz);
void servaprivod5(int poz);

int stvorka(int poz)
{
	servaprivod0(poz); // ���� ��������� �������� ��������� ������
	servaprivod1(poz);
	return 0;
}

int UpDownKr(int poz)
{
	// ���� ��������� �������� ��������� ������
	servaprivod2(poz);
	servaprivod3(poz);
}

int main(void)
{
	int f = 0;
	do
	{
		if (command > 0) // ���� �� ���� ������� ������ >0 �� ����� �������������� �� ��� ������ ����� �����
		{
			stvorka(1);// ���� ��������� �������� ��������� ������
			UpDownKr(1);
			do
			{
				servaprivod4(command);
				servaprivod5(command);
			} while (command>0);
		}
		else if (command == 0) // ���� 0 �� ����� �������������
		{
			do
			{
				servaprivod4(command);
				servaprivod5(command);
			} while (command != 0);
			UpDownKr(0);
			stvorka(0);// ���� ��������� �������� ��������� ������
		}
	} while (1);
	return 0;
}