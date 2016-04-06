////////////////////////////////////////////////////////////
//文 件 名：Call.cpp
//开发人员：赵娟
//日    期：2016-04-06
//文件说明：电话信息类实现
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