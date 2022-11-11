#include "hund.cpp"
#include "katze.cpp"
#include "tier.cpp"
#include <stdio.h>
#include <iostream>
#include <string>

int main()
{
    tier arr[2]; 
    arr[0] = katze();
    arr[1] = hund();

    for (size_t i = 0; i < 2; i++)
    {
        std::string laut = arr[i].getLaut();
        std::cout << laut << std::endl;
    }

    return 0;
}