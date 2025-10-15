#include "Serialize.hpp"

int main()
{
	Data origin;
	origin.age = 18;
	origin.id = 1;
	origin.name = "Teste";
	origin.vote = true;

	uintptr_t raw = Serializer::serialize(&origin);
	Data *cp = Serializer::deserialize(raw);
	if (cp != &origin)
		std::cout << "Serialization went bad" << std::endl;
	else
		std::cout << "Serialization not bad not bad" << std::endl;
	std::cout << "Age: " << cp->age << "\nName: " << cp->name << "\nCan vote: " << cp->vote << std::endl;
	return 0;
}
