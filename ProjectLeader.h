////////////////////////////////////////////////////////////
//�� �� ����ProjectLeader.h
//������Ա���Ծ�
//��    �ڣ�2016-04-06
//�ļ�˵�����鳤�ඨ��
////////////////////////////////////////////////////////////
#ifndef PROJECTLEADER_H
#define PROJECTLEADER_H

#include "employees.h"

/**
 *  �鳤��
*/
class ProjectLeader : public employees
{
public:
	ProjectLeader(string n,string i,bool f);
	~ProjectLeader(void);
public:
	virtual void RequestApplication(Call* c);
};

#endif