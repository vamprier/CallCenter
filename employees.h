////////////////////////////////////////////////////////////
//�� �� ����employees.h
//������Ա���Ծ�
//��    �ڣ�2016-04-06
//�ļ�˵������Ա�����ඨ��
////////////////////////////////////////////////////////////
#ifndef EMPLOYEES_H
#define EMPLOYEES_H


#include "Call.h"

/**
 *  ��Ա������
*/
class employees
{
public:
	employees(string n,string i,bool f);
	virtual ~employees(void);
public:
	void SetSuperior(employees* s); //�����ϼ�
	virtual void RequestApplication(Call* c) = 0; //�绰����
protected:
	string name; //����
	string id; //����
	bool free; //�Ƿ����
	employees* superior; //�ϼ�
};

#endif