#include "stdafx.h"
#include<iostream>
#include<string.h>
#include<fstream>
#include "Tape.h"
#include "Machine.h"

int main()
{
	/*Machine machine;
	machine.loadMachine("input.txt");

	std::cout << "Tapes:" << std::endl;
	machine.printTapes();

	machine.run();

	if (machine.finishedSuccefully())
	{
		std::cout << "Accept!" << std::endl;
	}
	else
	{
		std::cout << "Reject!" << std::endl;
	}

	std::cout << "Tapes:" << std::endl;
	machine.printTapes();*/

	//-------------compose

	/*Machine machine2;
	machine2.loadMachine("input.txt");
	Machine machine3;
	machine3.loadMachine("input2.txt");

	machine2.compose(machine3);
	machine2.printTapes();
	machine2.run();
	if (machine2.finishedSuccefully())
	{
		std::cout << "Accept!" << std::endl;
	}
	else
	{
		std::cout << "Reject!" << std::endl;
	}
	machine2.printTapes();
*/
	//-------------branch

	/*Machine machine;
	machine.loadMachine("input.txt");
	Machine machine2;
	machine2.loadMachine("input2.txt");
	Machine machine3;
	machine3.loadMachine("input3.txt");

	machine.branch(machine2, machine3);
	machine.printTapes();*/

    return 0;
}

