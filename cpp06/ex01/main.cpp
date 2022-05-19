#include <iostream>
#include "Serialization.hpp"

int main()
{
    Data ptr;
    ptr.test = 2;
    Serialization s;
    uintptr_t raw = s.serialize(&ptr);

    std::cout << raw << std::endl;
    std::cout << s.deserialize(raw)->test << std::endl;

    return (0);
}
