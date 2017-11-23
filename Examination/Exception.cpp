#include "Exception.h"

char Exception::Message[23][150] =
{
	"\n������������ ������ � ���������\n",
	"\n������������ ������: � ��������� ������ ���� ��� ����� ��������\n",
	"\n������������ ������: � ��������� ������ ���� ��� ���������� �����\n",
	"\n������������ ������: ����� ����������� ������� � �������� ����������� ���� \n�������� ��������\n",
	"\n������������ ������: ����� ���������� (��� ������) � �������� ����������� \n���� �������� ��������\n",
	"\n������������ ������: ����� ���������� � ������(��� ����������) ����������� \n���� �������� ��������\n",
	"\n������������ ������ �������\n",
	"\n������������ ������: ����� ���������� (��� ������) � ����������� ������� \n����������� ���� ��������\n",
	"\n������������ ������: ����� ����������� ������� � ���������� (��� ������) \n����������� ���� �������� ��������\n",
	"\n������������ ������: ����� ����������� � ����������� ������� ����������� \n���������\n",
	"\n������������ ������: ����� ����������� ������� � ������ �������� �������� \n����������� ���������\n",
	"\n������������ ������: ����� ������ �������� �������� � ����������� ������� \n����������� ���������\n",
	"\n������������ ������: ����� ����������� � ����������� ������� ����������� ���� \n�������� ��������\n",
	"\n������������ ������: ��������� ���������� �� ����� �������� ��������\n",
	"\n������������ ������: ��������� ���������� � ����������� ������\n",
	"\n������������ ������: ��������� ������������� ������ �������� ��������\n",
	"\n������������ ������ ���������� �����\n",
	"\n�������������� ����� ����������� ����������� � ����������� ������\n",
	"\n������� �� ����\n",
	"\n������ ��� ���������� � �������. ��������� ������ ������\n",
	"������: �������� ��������������� ������� - ��������������� �����",
	"������: ����������� ��������� - ������������� �����\n",
	"\n������������ ������ ������������ ���������\n"
};

void Russian(const char * str)
{
	char * buf = new char[strlen(str) + 1];
	CharToOemA(str, buf);
	cout << buf;
	delete[] buf;
}

