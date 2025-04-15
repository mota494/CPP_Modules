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
        virtual void makeSound() const;
        virtual std::string getType() const;
};
