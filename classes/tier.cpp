#include<stdio.h>
#include <string>

class tier{
    public:
        tier();

        std::string getLaut();
    protected:
        std::string Laut;
};

tier::tier() {
this->Laut = "void";

}    

std::string tier::getLaut()
{

    return this->Laut;
}