#include "Debugger.h"

using namespace dbg;

void Debugger::attach()
{
	DEBUG_EVENT dbg_event;

	while (true){
		WaitForDebugEvent(&dbg_event, INFINITY);
	}
	//ContinueDebugEvent(dbg_event.dwProcessId, dbg_event.dwThreadId, DBG_CONTINUE);
}

void Debugger::run()
{
	if (DebugActiveProcess(m_pid)) {
		attach();
	}
	else
	{
		std::cerr << "Unable to attach to the process with PID: " << m_pid;
	}
}


int main()
{
	int pid = 0;
	std::string path = "";

	//TODO: add a method to attach to new process not existed yet
	// int choice = 0;
	//std::cout << "Write 1 to attach to existing process" << std::endl;
	//std::cout << "Write 2 to attach to new process" << std::endl;
	//std::cin >> choice;

	//if (choice) {
	//	std::cout << "Write a PID of process to attach: ";
	//	std::cin >> pid;
	//	Debugger win_dbg(pid);
	//	win_dbg.run();
	//}
	//else {
	//	std::cout << "Write a path to create a process and attach: ";
	//	std::cin >> path;
	//	Debugger win_dbg(path);
	//}
	
	std::cout << "Write a PID of process to attach: ";
	std::cin >> pid;
	Debugger win_dbg(pid);
	win_dbg.run();
	

	return 0;
}
