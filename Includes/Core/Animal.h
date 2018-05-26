#ifndef CPP_ANIMAL_H
#define CPP_ANIMAL_H

#include <string>

class Animal
{
 public:
    virtual ~Animal() = default;

    virtual std::string Go(int nTimes) = 0;
};

class Dog : public Animal
{
 public:
    std::string Go(int nTimes) override;
};

inline std::string CallGo(Animal* animal)
{
    return animal->Go(3);
}

#endif