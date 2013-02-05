#include <iostream>
#include <fstream>

namespace lost{
// The Debug Class
class Debug
{
public:
	// The default initializer; Param1: The filename. Param2: Do you want to print to the console as well? Default false;
	Debug();
	// If true, then print to console, else don't
	bool printToConsole;
	// The global variable name for the file
	const char* fname;
	// Default destructor
	~Debug();
	// The print function; Prints to the console and/or the debug file
	bool print(char* debugInfo);
	// Cleans up stuff
	bool stop();
	// Creates the debugger
	bool start(const char* filename, bool printConsole = false);
private:
	// The file we will be outputting to
	std::ofstream dbgFile;
};
}
