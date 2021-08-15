#pragma once

#include <string>
#include <map>
#include <functional>
#include <memory>

namespace edd
{
    class argparse
    {
    public:
        enum class error : uint32_t
        {
            NONE,
            VERB_NOT_FOUND,
            INCOMPLETE_STATEMENT,
            GENERAL_ERROR
        };

        argparse();
        
        error feed(std::unique_ptr<std::string> statement);
    };
}