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
	std::cout << PRETTY;
	std::cout << "▗▄▄▖ ▗▖ ▗▖ ▗▄▖ ▗▖  ▗▖▗▄▄▄▖▗▄▄▖  ▗▄▖  ▗▄▖ ▗▖ ▗▖\n";
	std::cout << "▐▌ ▐▌▐▌ ▐▌▐▌ ▐▌▐▛▚▖▐▌▐▌   ▐▌ ▐▌▐▌ ▐▌▐▌ ▐▌▐▌▗▞▘\n";
	std::cout << "▐▛▀▘ ▐▛▀▜▌▐▌ ▐▌▐▌ ▝▜▌▐▛▀▀▘▐▛▀▚▖▐▌ ▐▌▐▌ ▐▌▐▛▚▖ \n";
	std::cout << "▐▌   ▐▌ ▐▌▝▚▄▞▘▐▌  ▐▌▐▙▄▄▖▐▙▄▞▘▝▚▄▞▘▝▚▄▞▘▐▌ ▐▌\n";
	std::cout << RESET;
}

void	p_options()
{
	std::cout << GREEN << "ADD" << RESET << " - Save a new contact\n";
	std::cout << YELLOW << "SEARCH" << RESET << " - Display a specific contact\n";
	std::cout << RED << "EXIT" << RESET << " - Leaves (crazy)\n";
	std::cout << "Choose an option:";
}

int main()
{
	p_header();
	
	std::string buffer;
	Contacts	contact;
	Phonebook	book;
	int			id = 0;

	p_options();
	book.set_n_contacts(0);
	while (std::getline(std::cin, buffer))
	{
		buffer = capital(buffer);
		if (buffer == "EXIT")
			break ;
		else if (buffer == "ADD")
		{
			contact.new_contact();
			contact.set_id(id);
			book.add_contact(id, contact);
			id++;
			if (id > 7)
				id = 0;
		}
		else if (buffer == "SEARCH")
			book.book_menu();
		system("clear");
		p_options();
	}
	std::cout << "\nGoodbye\n" << std::endl;
	return (0);
}
