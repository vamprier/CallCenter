////////////////////////////////////////////////////////////
//文 件 名：fresher.cpp
//开发人员：赵娟
//日    期：2016-04-06
//文件说明：普通员工类实现
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
		cout<<name<<",处理电话"<<endl;
	}
	else
	{
		if(superior != NULL)
		{
			superior->RequestApplication(c);
		}
	}
}