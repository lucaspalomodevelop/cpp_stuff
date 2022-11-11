#include "tier.cpp"


class hund : public tier
{
public:
    hund();
};

hund::hund() : tier()
{
    Laut = "wuff";
}