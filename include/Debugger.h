#pragma once

#include <iostream>
#include <windows.h>
#include <debugapi.h>

namespace dbg {
	class Debugger
	{
	public:
		Debugger(int _pid)
		{
			pid = _pid;
		}
		void attach();
		void run();

	private:
		int pid;
	};
}
