#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Warlock {
    private:
        string _name;
        string _title;
    
    public:
        const string& getName() const;
        const string& getTitle() const;
        void setTitle(const string& title);

        Warlock(const string& name, const string& title);
        ~Warlock();

        void introduce() const;
};
