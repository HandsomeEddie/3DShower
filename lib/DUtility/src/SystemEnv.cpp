#include <stdexcept>
#include "SystemEnv.h"

namespace DUtility
{
    std::string GetEnv(const std::string& str, const std::string& defaultValue/* = std::string()*/)
    {
        std::string pathStr {defaultValue};
        char* path = nullptr;
        if ((path = getenv(str.c_str())) != NULL)
        {
            pathStr = std::string(path);
            if (*(pathStr.end() - 1) != '/')
                pathStr += '/';
        }
        return pathStr;
    }

    bool SetEnv(const std::string& str, const std::string& value)
    {
        return setenv(str.c_str(), value.c_str(), 1) == 0;
    }

    std::string GetLibPath()
    {
        return GetEnv("LIB_PATH");
    }
}