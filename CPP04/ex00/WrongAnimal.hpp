#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal& otherClass);
        WrongAnimal& operator=(const WrongAnimal& otherClass);
        void makeSound() const;
        std::string getType() const;
};
