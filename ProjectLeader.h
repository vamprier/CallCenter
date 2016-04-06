////////////////////////////////////////////////////////////
//文 件 名：ProjectLeader.h
//开发人员：赵娟
//日    期：2016-04-06
//文件说明：组长类定义
////////////////////////////////////////////////////////////
#ifndef PROJECTLEADER_H
#define PROJECTLEADER_H

#include "employees.h"

/**
 *  组长类
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