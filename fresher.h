////////////////////////////////////////////////////////////
//�� �� ����fresher.h
//������Ա���Ծ�
//��    �ڣ�2016-04-06
//�ļ�˵������ͨԱ���ඨ��
////////////////////////////////////////////////////////////
#ifndef FRESHER_H
#define FRESHER_H


#include "employees.h"

/**
 *  ��ͨԱ����
*/
class fresher : public employees
{
public:
	fresher(string n,string i,bool f);
	~fresher(void);
public:
	virtual void RequestApplication(Call* c);
};

#endif