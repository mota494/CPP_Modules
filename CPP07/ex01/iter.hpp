#pragma once

#include <iostream>

template <typename T> void iter(T *ptr, const size_t len, void (*Func)(T &))
{
	if (!ptr || !Func)
		return ;
	size_t i;
	i = 0;
	while (i < len)
	{
		Func(ptr[i]);
		i++;
	}
}
