#include <iostream>

struct Data{
    int test;
};

class Serialization
{
    private:
        Data* ptr;
        uintptr_t raw;
    public:
        Serialization();
        Serialization(Serialization &origin);
        Serialization &operator=(Serialization &origin);
        ~Serialization();
		
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};