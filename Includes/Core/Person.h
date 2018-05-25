#ifndef CPP_PERSON_H
#define CPP_PERSON_H

#include <string>

struct Person
{
    Person(std::string name);
    Person(std::string name, std::string homeAddress);
    Person(std::string name, std::string homeAddress, std::string SSN);

    void SetName(const std::string& _name);
    const std::string& GetName() const;

    void SetHomeAddress(const std::string& _homeAddress);
    const std::string& GetHomeAddress() const;

    const std::string& GetSSN() const;

    std::string name;

private:
    std::string homeAddress;
    std::string SSN;
};

#endif