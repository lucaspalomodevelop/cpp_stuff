#ifndef TIER_H // ensuring that this object is only initialized once
#include "tier.cpp"
#endif

class hund : public tier
{
public:
    hund();
};

hund::hund() : tier()
{
    Laut = "wuff";
}