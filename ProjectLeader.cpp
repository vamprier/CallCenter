////////////////////////////////////////////////////////////
//�� �� ����ProjectLeader.cpp
//������Ա���Ծ�
//��    �ڣ�2016-04-06
//�ļ�˵�����鳤��ʵ��
////////////////////////////////////////////////////////////
#include "ProjectLeader.h"

ProjectLeader::ProjectLeader(string n,string i,bool f):employees(n,i,f)
{
}


ProjectLeader::~ProjectLeader(void)
{
}

void ProjectLeader::RequestApplication(Call* c)
{
	if ( c->GetRank() <= 5 && free)
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