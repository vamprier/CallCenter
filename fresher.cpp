////////////////////////////////////////////////////////////
//�� �� ����fresher.cpp
//������Ա���Ծ�
//��    �ڣ�2016-04-06
//�ļ�˵������ͨԱ����ʵ��
////////////////////////////////////////////////////////////
#include "fresher.h"

fresher::fresher(string n,string i,bool f):employees(n,i,f)
{
}


fresher::~fresher(void)
{
}

void fresher::RequestApplication(Call* c)
{
	if ( c->GetRank() <= 2 && free)
	{
		cout<<name<<",����绰"<<endl;
	}
	else
	{
		if(superior != NULL)
		{
			superior->RequestApplication(c);
		}
	}
}