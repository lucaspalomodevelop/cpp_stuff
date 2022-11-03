#include<iostream>
#include <map>
uint64_t fib(uint64_t n)
{
    static std::map<uint64_t,uint64_t> table{};
    table[n] = n < 2 ? 1 : table[n-2] + table[n-1];
    return table[n];
}

int main()
{
    std::cout << "Geben sie an die wievielte fib. Zahl sie suchen: ";
    std::uint64_t n = 0;
    std::cin >> n;
    for(uint64_t i = 0; i <= n; ++i)
     {
        std::cout << "fib("<< i-1 <<") = " << fib(i) << "\n";
     } 
}