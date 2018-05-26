#include <API/Python/Animal.h>
#include <Core/Animal.h>

#include <pybind11/pybind11.h>

class PyAnimal : public Animal
{
 public:
    /* Inherit the constructors */
    using Animal::Animal;

    /* Trampoline (need one for each virtual function) */
    std::string Go(int n_times) override
    {
        PYBIND11_OVERLOAD_PURE(
            std::string, /* Return type */
            Animal,      /* Parent class */
            Go,          /* Name of function in C++ (must match Python name) */
            n_times      /* Argument(s) */
        );
    }
};

void AddAnimal(pybind11::module& m)
{
    pybind11::class_<Animal, PyAnimal>(m, "Animal")
        .def(pybind11::init<>())
        .def("Go", &Animal::Go);
}

void AddDog(pybind11::module& m)
{
    pybind11::class_<Dog, Animal>(m, "Dog").def(pybind11::init<>());
}

void AddCallGo(pybind11::module& m)
{
    m.def("CallGo", &CallGo);
}