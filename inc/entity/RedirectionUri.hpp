#pragma once

#include <iostream>
#include <vector>
#include <iostream>
#include <string>
#include "IScope.hpp"

class RedirectionUri : public IScope
{
private:
    std::vector<std::string> _codes;
    std::string _pageName;
public:
    RedirectionUri(/* args */);
    ~RedirectionUri();

    std::vector<std::string> getCodes();
    std::string getPageName();
    void setCodes(std::string code);
    void setPageName(std::string pageName);

    std::string getName() const;
    RedirectionUri* clone() const;

};