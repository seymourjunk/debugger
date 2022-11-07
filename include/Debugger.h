#pragma once

#include <iostream>
#include <string>
#include <windows.h>
#include <debugapi.h>

namespace dbg {
	class Debugger
	{
	public:
		Debugger (int pid)
		{
			m_pid = pid;
		}

		Debugger (std::string _path)
		{
			m_program_path = _path;
		}
		
		void attach();
		void run();
		void create_process();

	private:
		int m_pid = 0;
		std::string m_program_path;
	};
}
