////////////////////////////////////////////////////////////
//�� �� ����Call.h
//������Ա���Ծ�
//��    �ڣ�2016-04-06
//�ļ�˵�����绰��Ϣ�ඨ��
////////////////////////////////////////////////////////////
#ifndef CALL_H
#define CALL_H

#define NULL 0x00

#include <string>
#include <iostream>

using namespace std;

/**
 *  �绰��Ϣ��
*/
class Call
{
public:
	Call(string n,string p,int r);
	~Call(void);
public:
	string GetNumber();
	string GetPlace();
	int GetRank();
private:
	string number; //�绰����
	string place; //�绰��Դ��
	int rank;    //�绰����
};

#endif