#include <iostream>
#include <fstream>
#include <string>

class Logger {
public:
    static Logger* instance();
    bool open_file(const char* fname);
    void print_to_file(std::string dbginfo);
    bool close_file();
private:
    Logger() {};
    Logger(Logger const&);
    Logger& operator=(Logger const&){};
    static Logger *p_mInstance;
    std::ofstream dbg;
};

