#include "Engine.h"


int main(int argc, char* argv[]) {
	lost::Engine lsengine;
	Debug debugger("debug.dbg", true);
	debugger.print("Starting Engine..sdfg.\n");
	lsengine.start(640, 480);
	return 0;
}