#include<iostream>

int fib(int n)
{
    return n < 2 ? 1 : fib(n-2)+ fib(n-1);
}

int main()
{
    std::cout << "Geben sie an die wievielte fib. Zahl sie suchen: ";
    std::uintmax_t n = 0;
    std::cin >> n;
    std::cout << "fib(" << n << ") = " << fib(n) << "\n";
}