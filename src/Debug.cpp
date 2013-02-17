#include "Debug.h"

using namespace lost;
Debug::Debug() 
{
}

Debug::~Debug()
{
}

bool Debug::print(const char* debugInfo)
{
	// Make sure that it is open, and if printToConsole is true, print to the console
	if (dbgFile.is_open() && printToConsole) {
		dbgFile << debugInfo;
		std::cout << debugInfo;
		return true;
	}
	else if (dbgFile.is_open()) {
		dbgFile << debugInfo;
		return true;
	}
	else {
		printf("ERROR: %s is not open!", fname);
		return false;
	}
}

bool Debug::stop()
{
	// Closes the file and prints an error if it could not be closed.
	dbgFile.close();
	if (!dbgFile.is_open()) {
		return true;
	}
	else {
		std::cout << "ERROR: Could not close file";
		return false;
	}
}

bool Debug::start(const char* filename, bool printConsole) {
	// Set the global filename to the function param1 
	fname = filename;
	// Set the bool printToConsole to the function param2
	printToConsole = printConsole;
	// Creates the file with the user inputted filename
	dbgFile.open(filename);
	// If the file is open, state that we are ready for debugging, else print an error
	if (dbgFile.is_open()) {
		return true;
	}
	else {
		printf("ERROR: %s could not be created!", fname);
		return false;
	}
}
