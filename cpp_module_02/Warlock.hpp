#pragma once

#include <iostream>
#include <map>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"

using std::cout;
using std::endl;
using std::string;
using std::map;

class ASpell;
class ATarget;

class Warlock {
    private:
        string _name;
        string _title;
        SpellBook _Spell;
    public:
        const string& getName() const;
        const string& getTitle() const;
        void setTitle(const string& title);

        Warlock(const string& name, const string& title);
        ~Warlock();

        void introduce() const;

        void learnSpell(const ASpell* spell);
        void forgetSpell(const string& spellName);
        void launchSpell(const string& spellName, const ATarget& target);
};
