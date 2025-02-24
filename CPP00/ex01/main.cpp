#include "contacts.hpp"
#include "Phonebook.hpp"

std::string capital(std::string str)
{
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (std::isalpha(str[i]))
			str[i] = std::toupper(str[i]);
	}
	return str;
}

void	p_header()
{
	std::cout << "▗▄▄▖ ▗▖ ▗▖ ▗▄▖ ▗▖  ▗▖▗▄▄▄▖▗▄▄▖  ▗▄▖  ▗▄▖ ▗▖ ▗▖\n";
	std::cout << "▐▌ ▐▌▐▌ ▐▌▐▌ ▐▌▐▛▚▖▐▌▐▌   ▐▌ ▐▌▐▌ ▐▌▐▌ ▐▌▐▌▗▞▘\n";
	std::cout << "▐▛▀▘ ▐▛▀▜▌▐▌ ▐▌▐▌ ▝▜▌▐▛▀▀▘▐▛▀▚▖▐▌ ▐▌▐▌ ▐▌▐▛▚▖ \n";
	std::cout << "▐▌   ▐▌ ▐▌▝▚▄▞▘▐▌  ▐▌▐▙▄▄▖▐▙▄▞▘▝▚▄▞▘▝▚▄▞▘▐▌ ▐▌\n";
	std::cout << "\n";
}

int main()
{
	p_header();
	
	std::string buffer;
	Contacts	contact;
	Phonebook	book;
	int			id = 0;

	std::cout << "ADD - Save a new contact\n";
	std::cout << "SEARCH - Display a specific contact\n";
	std::cout << "EXIT - Leaves (crazy)\n";
	std::cout << "Choose an option: ";
	while (std::getline(std::cin, buffer))
	{
		buffer = capital(buffer);
		if (buffer == "EXIT")
			break ;
		else if (buffer == "ADD")
		{
			contact.new_contact();
			contact.set_id(id);
			id++;
		}
		else
		{
			system("clear");
			std::cout << "ADD - Save a new contact\n";
			std::cout << "SEARCH - Display a specific contact\n";
			std::cout << "EXIT - Leaves (crazy)\n";
			std::cout << "Choose an option:";
		}
	}
	std::cout << "\nGoodbye\n" << std::endl;
	return (0);
}
