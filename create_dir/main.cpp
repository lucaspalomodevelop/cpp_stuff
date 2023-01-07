#include <stdio.h>
#include <filesystem>

int main()
{
    std::filesystem::create_directory("sandbox");
    return 0; 
}
