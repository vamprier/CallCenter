////////////////////////////////////////////////////////////
//�� �� ����ProjectManager.h
//������Ա���Ծ�
//��    �ڣ�2016-04-06
//�ļ�˵���������ඨ��
////////////////////////////////////////////////////////////
#ifndef PROJECTMANAGER_H
#define PROJECTMANAGER_H


#include "employees.h"

/**
 *  ������
*/
class ProjectManager : public employees
{
public:
	ProjectManager(string n,string i,bool f);
	~ProjectManager(void);
public:
	virtual void  RequestApplication(Call* c);
};

#endif