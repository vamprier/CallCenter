////////////////////////////////////////////////////////////
//文 件 名：fresher.h
//开发人员：赵娟
//日    期：2016-04-06
//文件说明：普通员工类定义
////////////////////////////////////////////////////////////
#ifndef FRESHER_H
#define FRESHER_H


#include "employees.h"

/**
 *  普通员工类
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