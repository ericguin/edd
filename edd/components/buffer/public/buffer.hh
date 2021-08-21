#pragma once

#include <string>

namespace edd
{
    class buffer
    {
    public:
        buffer();
        buffer(std::string& name);
        
        

    protected:
        std::string m_contents;
    };
}