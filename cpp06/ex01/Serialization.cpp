#include "Serialization.hpp"

Serialization::Serialization(){
    this->ptr = 0;
    this->raw = 0;
}

Serialization::Serialization(Serialization &origin)
{
    this->ptr = origin.ptr;
    this->raw = origin.raw;
}

Serialization &Serialization::operator=(Serialization &origin)
{
    this->ptr = origin.ptr;
    this->raw = origin.raw;
    return (*this);
}

Serialization::~Serialization(){}

uintptr_t Serialization::serialize(Data *ptr)
{
    this->raw = reinterpret_cast<uintptr_t>(ptr);
    return (this->raw);
}

Data *Serialization::deserialize(uintptr_t raw)
{
    this->ptr = reinterpret_cast<Data *>(raw);
    return (this->ptr);
}