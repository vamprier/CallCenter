////////////////////////////////////////////////////////////
//文 件 名：employees.h
//开发人员：赵娟
//日    期：2016-04-06
//文件说明：雇员抽象类定义
////////////////////////////////////////////////////////////
#ifndef EMPLOYEES_H
#define EMPLOYEES_H


#include "Call.h"

/**
 *  雇员抽象类
*/
class employees
{
public:
	employees(string n,string i,bool f);
	virtual ~employees(void);
public:
	void SetSuperior(employees* s); //设置上级
	virtual void RequestApplication(Call* c) = 0; //电话请求
protected:
	string name; //姓名
	string id; //编码
	bool free; //是否空闲
	employees* superior; //上级
};

#endif