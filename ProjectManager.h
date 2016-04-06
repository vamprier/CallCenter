////////////////////////////////////////////////////////////
//文 件 名：ProjectManager.h
//开发人员：赵娟
//日    期：2016-04-06
//文件说明：经理类定义
////////////////////////////////////////////////////////////
#ifndef PROJECTMANAGER_H
#define PROJECTMANAGER_H


#include "employees.h"

/**
 *  经理类
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