//
// Created by heusebio on 02.05.2021.
//

#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
    Polymorph();
    ~Polymorph();

    virtual ASpell *clone() const;
};


#endif //POLYMORPH_HPP
