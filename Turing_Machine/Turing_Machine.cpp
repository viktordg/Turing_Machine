#include "stdafx.h"
#include<iostream>
#include<string.h>
#include "Tape.h"

int main()
{
	std::string tapeInput = "000111";
	std::cout << tapeInput.size() << std::endl;
	Tape tape(tapeInput);
	std::cout << tape << std::endl;
    return 0;
}

