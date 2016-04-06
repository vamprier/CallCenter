////////////////////////////////////////////////////////////
//文 件 名：ProjectManager.cpp
//开发人员：赵娟
//日    期：2016-04-06
//文件说明：经理类实现
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
		cout<<name<<",处理电话"<<endl;
	}
	else
	{
		cout<<"该电话不能处理"<<endl;
	}
}