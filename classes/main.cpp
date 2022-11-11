#include "hund.cpp"
#include "katze.cpp"
#include <stdio.h>
#include <iostream>
#include <string>

int main(){
    katze a;
    std::string laut = a.getLaut();
    std::cout << laut << std::endl; 
    return 0;
}