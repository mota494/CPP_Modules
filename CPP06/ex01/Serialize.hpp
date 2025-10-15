#pragma once

#include "Data.hpp"
#include <stdint.h>

class Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer(const Serializer &o_serial);
		Serializer & operator = (const Serializer &o_serial);
	public:
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};
