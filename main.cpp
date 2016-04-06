
// CallCenter.cpp : 定义控制台应用程序的入口点。
//

#include "fresher.h"
#include "ProjectLeader.h"
#include "ProjectManager.h"


int main(int argc, char* argv[])
{
	employees* f = new fresher("lina","100215",true);
	employees* pl = new ProjectLeader("tina","10052",true);
	employees* pm = new ProjectManager("yana","10092",true);
	f->SetSuperior(pl);
	pl->SetSuperior(pm);
	//
	Call* c1 = new Call("02988521256","xian",2);
	Call* c2 = new Call("02999854623","xian",5);
	Call* c3 = new Call("02911245632","xian",10);

	f->RequestApplication(c1);
	f->RequestApplication(c2);
	f->RequestApplication(c3);

	cin.ignore();

	return 0;
}

