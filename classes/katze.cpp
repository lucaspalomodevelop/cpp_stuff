#include "tier.cpp"


class katze : public tier
{
    public:
        katze();
};

katze::katze() : tier()
{
    Laut =  "miau";
}