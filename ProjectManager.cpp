////////////////////////////////////////////////////////////
//�� �� ����ProjectManager.cpp
//������Ա���Ծ�
//��    �ڣ�2016-04-06
//�ļ�˵����������ʵ��
////////////////////////////////////////////////////////////
#include "ProjectManager.h"

ProjectManager::ProjectManager(string n,string i,bool f):employees(n,i,f)
{
}


ProjectManager::~ProjectManager(void)
{
}

void ProjectManager::RequestApplication(Call* c)
{
	if ( free)
	{
		cout<<name<<",����绰"<<endl;
	}
	else
	{
		cout<<"�õ绰���ܴ���"<<endl;
	}
}