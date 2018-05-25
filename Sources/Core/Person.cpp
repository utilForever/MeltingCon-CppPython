#include <Core/Person.h>

Person::Person(std::string name) : name(std::move(name))
{
    // Do nothing
}

Person::Person(std::string name, std::string homeAddress)
    : name(std::move(name)), homeAddress(std::move(homeAddress))
{
    // Do nothing
}

Person::Person(std::string name, std::string homeAddress, std::string SSN)
    : name(std::move(name)),
      homeAddress(std::move(homeAddress)),
      SSN(std::move(SSN))
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

void Person::SetHomeAddress(const std::string& _homeAddress)
{
    homeAddress = _homeAddress;
}

const std::string& Person::GetHomeAddress() const
{
    return homeAddress;
}

const std::string& Person::GetSSN() const
{
    return SSN;
}