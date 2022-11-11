#ifndef TIER_H //ensuring that this object is only initialized once
#include "tier.cpp"
#endif

class katze : public tier
{
    public:
        katze();
};

katze::katze() : tier()
{
    Laut =  "miau";
}