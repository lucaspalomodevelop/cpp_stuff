#ifndef TIER_H
#define TIER_H
#include <stdio.h>
#include <string>
#include "tier.h"

tier::tier()
{
    this->Laut = "void";
}

std::string tier::getLaut()
{

    return this->Laut;
}
#endif