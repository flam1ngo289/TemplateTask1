#include <iostream>
#include <vector>
#include <algorithm>


template <typename T>
T mod(T a) {

    return a * a;
}

template <typename T>
std::vector<T> mod(std::vector<T>& a) {
    for (auto& i : a)
        i *= i;
    return a;
}

int main()
{
    int num = 4;
    
    std::cout << "[IN]: " << num << std::endl;
    std::cout << "[OUT]: " << mod(num) << std::endl;


    std::vector<int> vec = { -3, 4, 1, 6, 4, -7 };
    std::cout << "[IN]: ";

    std::for_each(vec.begin(), vec.end() - 1, [](const int& n) { std::cout << n << ", "; });
    std::cout << *(vec.end() - 1) << std::endl;

    mod(vec);

    std::cout << "[OUT]: ";
    std::for_each(vec.begin(), vec.end() - 1, [](const int& n) { std::cout << n << ", "; });
    std::cout << *(vec.end() - 1) << std::endl;

    return 0;
}
