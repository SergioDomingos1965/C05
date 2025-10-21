#ifndef INTERN_HPP
#define INTERN_HPP
#include "iostream"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

    class Intern
    {
        public:
            Intern();
            ~Intern();
            Intern(Intern const &src);
            Intern &operator=(Intern const &src);
            AForm *makeForm(std::string name, std::string target);
    };
#endif