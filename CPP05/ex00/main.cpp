#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Afonso("Afonso",-3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what( )<< std::endl;
	}
}
