#include "Logger.h"

Logger* Logger::p_mInstance = NULL;

Logger* Logger::instance()
{
    if(!p_mInstance) {
        p_mInstance = new Logger;
    }
    
    return p_mInstance;
}

bool Logger::open_file(const char* fname)
{
    dbg.open(fname);
    if(dbg.is_open())
        return true;
    else
        return false;
}

void Logger::print_to_file(std::string dbginfo)
{
    dbg << dbginfo;
    std::cout << dbginfo;
}

bool Logger::close_file()
{
    dbg.close();
    if(dbg.is_open())
        return false;
    else
        return true;
}