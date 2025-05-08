#include "ex00.hpp"

Brain::Brain(void)
{
	std::cout << "A brain is generating ideas" << std::endl;
	int	i = 0;

	while (i < 100)
	{
		ideas[i] = "Bazinga";
		i++;
	}
}

Brain::~Brain()
{
	std::cout << "The brains was blownups 'OMAGAH', saids the brains" << std::endl;
}

Brain::Brain(const Brain &o_brain)
{
	*this = o_brain;
}


Brain& Brain::operator=(const Brain &o_brain)
{
	if (this != &o_brain)
		return *this;
	return *this;
}

