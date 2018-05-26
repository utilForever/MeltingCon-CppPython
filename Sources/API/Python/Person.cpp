#include <API/Python/Person.h>
#include <Core/Person.h>

#include <pybind11/pybind11.h>

void AddPerson(pybind11::module& m)
{
    pybind11::class_<Person>(m, "Person")
        .def(pybind11::init<const std::string&>())
        .def("SetName", &Person::SetName)
        .def("GetName", &Person::GetName)
        .def("__repr__", [](const Person& p) {
            return "<pyCppPython.PersonWithLambda named '" + p.name + "'>";
        });
}

void AddPersonv2(pybind11::module& m)
{
    pybind11::class_<Personv2>(m, "Personv2")
        .def(pybind11::init<const std::string&, const std::string&,
                            const std::string&>())
        .def_readwrite("name", &Personv2::name)
        .def_property("homeAddress", &Personv2::GetHomeAddress,
                      &Personv2::SetHomeAddress)
        .def_property_readonly("SSN", &Personv2::GetSSN);       
}