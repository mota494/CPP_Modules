/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:41:55 by mloureir          #+#    #+#             */
/*   Updated: 2025/03/10 16:09:17 by mloureir         ###   ########.pt       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string nome = "Miguel";
	std::string *strPTR = &nome;
	std::string &strREF = nome;

	std::cout << "String memory address: " << &nome << "\n";
	std::cout << "Pointer memory address: " << strPTR << "\n";
	std::cout << "Rerence memory address: " << &strREF << "\n";

	std::cout << "String value: " << nome << "\n";
	std::cout << "Pointer value: " << *strPTR << "\n";
	std::cout << "Reference value: " << strREF << "\n";
	return (0);
}
