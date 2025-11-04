#include "Array.hpp"

int main(void)
{
	Array<int> new_arr(9);

	new_arr[8] = 1;
	std::cout << new_arr[8] << std::endl;
	std::cout << new_arr.size() << std::endl;
	
	try 
	{
		Array<int> err(2);
		std::cout << err[4];
	} 
	catch (std::exception &e) 
	{
		std::cout << e.what() << std::endl;
	}
}
