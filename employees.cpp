////////////////////////////////////////////////////////////
//�� �� ����employees.cpp
//������Ա���Ծ�
//��    �ڣ�2016-04-06
//�ļ�˵������Ա������ʵ��
////////////////////////////////////////////////////////////
#include "employees.h"

employees::employees(string n,string i,bool f):
					name(n),
					id(i),
					free(f)
{
}


employees::~employees(void)
{
}

void employees::SetSuperior(employees* s)
{
	superior = s;
}