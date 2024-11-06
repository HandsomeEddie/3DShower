#pragma once

#include <string>
#include <map>
#include "export_api.h"

namespace DUtility
{
    DUTILITY_DLLDECL std::string GetEnv(const std::string& envName, const std::string& defaultValue = std::string());

    DUTILITY_DLLDECL bool SetEnv(const std::string& str, const std::string& value);

    DUTILITY_DLLDECL std::string GetLibPath();
}

#undef DUTILITY_DLLDECL