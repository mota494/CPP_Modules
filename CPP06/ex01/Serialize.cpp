#include "Serialize.hpp"

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

Serializer::Serializer(){};
Serializer::~Serializer(){};
Serializer::Serializer(const Serializer &o_serial){ *this = o_serial; }
Serializer &Serializer::operator=(const Serializer &o_serial) { (void)o_serial; return (*this); }
