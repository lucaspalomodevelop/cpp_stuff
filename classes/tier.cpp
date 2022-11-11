#ifndef TIER_H
#define TIER_H
#include <stdio.h>
#include <string>
#include "tier.h"

// class tier
// {
// public:
//     tier();

//     std::string getLaut();

// protected:
//     std::string Laut;
// };

tier::tier()
{
    this->Laut = "void";
}

std::string tier::getLaut()
{

    return this->Laut;
}
#endif