#pragma once

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <list>

template<typename T>int easyfind(T temp, int num)
{
	typename T::iterator i;
	
	i = std::find(temp.begin(), temp.end(), num);
	if (i == temp.end())
	{
		std::cout << "Unable to find " << num << std::endl;
		return 1;
	}
	else
	{
		std::cout << num << " was found on position: " <<std::distance(temp.begin(), i) << std::endl;
		return (0);
	}
}
