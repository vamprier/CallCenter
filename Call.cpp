////////////////////////////////////////////////////////////
//�� �� ����Call.cpp
//������Ա���Ծ�
//��    �ڣ�2016-04-06
//�ļ�˵�����绰��Ϣ��ʵ��
////////////////////////////////////////////////////////////
#include "Call.h"


Call::Call(string n,string p,int r):number(n),place(p),rank(r)
{
}


Call::~Call(void)
{
}

string Call::GetNumber()
{
	return number;
}

string Call::GetPlace()
{
	return place;
}

int Call::GetRank()
{
	return rank;
}