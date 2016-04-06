////////////////////////////////////////////////////////////
//文 件 名：ProjectLeader.cpp
//开发人员：赵娟
//日    期：2016-04-06
//文件说明：组长类实现
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