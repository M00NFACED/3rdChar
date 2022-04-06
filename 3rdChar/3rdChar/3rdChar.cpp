#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    std::cin >> n;
    char* str = new char[n];
    std::cin >> str;
    for (char* p = str + 2; p <= &str[n]; p += 3) {
        std::cout << *p;
    }


}