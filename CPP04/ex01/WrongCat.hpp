#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
     protected:
        std::string type;
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat& otherClass);
        WrongCat& operator=(const WrongCat& otherClass);
        void makeSound() const;
        std::string getType() const;

};
