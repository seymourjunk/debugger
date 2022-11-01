#include "Debugger.h"

using namespace dbg;

void Debugger::run()
{
	DEBUG_EVENT db_event;
	while (true){
		WaitForDebugEvent(&db_event, INFINITY);
	}
}

void Debugger::attach()
{
	if (DebugActiveProcess(pid)) {
		run();
		//std::cout << "123";
	}
	else
	{
		std::cerr << "Unable to attach to the process with PID: " << pid;
	}
}


int main()
{
	int pid = 0;
	std::cout << "Write a PID of process to attach: ";
	std::cin >> pid;

	Debugger win_dbg = Debugger(pid);
	win_dbg.attach();

	return 0;
}
