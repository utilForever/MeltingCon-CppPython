#include <Core/Person.h>

Person::Person(std::string name) : name(std::move(name))
{
    // Do nothing
}

void Person::SetName(const std::string& _name)
{
    name = _name;
}

const std::string& Person::GetName() const
{
    return name;
}

Personv2::Personv2(std::string name, std::string homeAddress, std::string SSN)
    : name(std::move(name)),
      homeAddress(std::move(homeAddress)),
      SSN(std::move(SSN))
{
    // Do nothing
}

void Personv2::SetName(const std::string& _name)
{
    name = _name;
}

const std::string& Personv2::GetName() const
{
    return name;
}

void Personv2::SetHomeAddress(const std::string& _homeAddress)
{
    homeAddress = _homeAddress;
}

const std::string& Personv2::GetHomeAddress() const
{
    return homeAddress;
}

const std::string& Personv2::GetSSN() const
{
    return SSN;
}