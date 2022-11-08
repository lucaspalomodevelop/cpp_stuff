#include <iostream>
#include <fstream>
#include <string>
#include <bitset>

std::string string2bin(std::string myString)
{
    std::string binaryString = "";
    for (char &_char : myString)
    {
        binaryString += std::bitset<8>(_char).to_string();
    }
    return binaryString;
}

int main()
{
    std::fstream Input;
    std::ofstream Output("./outputfile.bin", std::ios::in | std::ios::binary);
    ;
    std::string inputText = "";

    Input.open("./inputfile.txt");
    // Output.open("./outputfile.dat", std::ios::in | std::ios::binary); // std::ios::in | std::ios::binary

    if (Input.is_open())
    {
        while (std::getline(Input, inputText))
        {
            std::cout << inputText;
            std::string result = string2bin(inputText);
            std::cout << result;
            Output << result;
        }
    }

    return 0;
}
