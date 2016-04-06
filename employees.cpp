////////////////////////////////////////////////////////////
//文 件 名：employees.cpp
//开发人员：赵娟
//日    期：2016-04-06
//文件说明：雇员抽象类实现
////////////////////////////////////////////////////////////
#include "employees.h"

employees::employees(string n,string i,bool f):
					name(n),
					id(i),
					free(f)
{
}


employees::~employees(void)
{
}

void employees::SetSuperior(employees* s)
{
	superior = s;
}