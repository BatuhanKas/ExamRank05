#pragma once

#include <iostream>
#include <map>
#include "ATarget.hpp"

using std::cout;
using std::endl;
using std::string;
using std::map;

class ATarget;

class TargetGenerator {
    private:
        map<string, ATarget*> _TargetG;
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget* target);
        void forgetTargetType(string const &targetName);
        ATarget* createTarget(string const &targetName);
};
