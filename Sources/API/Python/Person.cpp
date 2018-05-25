#include <API/Python/Person.h>
#include <Core/Person.h>

#include <pybind11/pybind11.h>

void AddPerson(pybind11::module& m)
{
    pybind11::class_<Person>(m, "Person")
        .def(pybind11::init<const std::string&>())
        .def(pybind11::init<const std::string&, const std::string&>())
        .def(pybind11::init<const std::string&, const std::string&,
                            const std::string&>())
        .def("SetName", &Person::SetName)
        .def("GetName", &Person::GetName);
}

void AddPersonWithLambda(pybind11::module& m)
{
    pybind11::class_<Person>(m, "PersonWithLambda")
        .def(pybind11::init<const std::string&>())
        .def(pybind11::init<const std::string&, const std::string&>())
        .def(pybind11::init<const std::string&, const std::string&,
                            const std::string&>())
        .def("SetName", &Person::SetName)
        .def("GetName", &Person::GetName)
        .def("__repr__", [](const Person& p) {
            return "<pyCppPython.PersonWithLambda named '" + p.name + "'>";
        });
}

void AddPersonWithField(pybind11::module& m)
{
    pybind11::class_<Person>(m, "PersonWithField")
        .def(pybind11::init<const std::string&>())
        .def(pybind11::init<const std::string&, const std::string&>())
        .def(pybind11::init<const std::string&, const std::string&,
                            const std::string&>())
        .def_readwrite("name", &Person::name)
        .def_property("homeAddress", &Person::GetHomeAddress,
                      &Person::SetHomeAddress)
        .def_property_readonly("SSN", &Person::GetSSN);
        
}