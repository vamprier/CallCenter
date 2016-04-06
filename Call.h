////////////////////////////////////////////////////////////
//文 件 名：Call.h
//开发人员：赵娟
//日    期：2016-04-06
//文件说明：电话信息类定义
////////////////////////////////////////////////////////////
#ifndef CALL_H
#define CALL_H

#define NULL 0x00

#include <string>
#include <iostream>

using namespace std;

/**
 *  电话信息类
*/
class Call
{
public:
	Call(string n,string p,int r);
	~Call(void);
public:
	string GetNumber();
	string GetPlace();
	int GetRank();
private:
	string number; //电话号码
	string place; //电话来源地
	int rank;    //电话级别
};

#endif