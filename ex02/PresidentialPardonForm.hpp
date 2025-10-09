#ifndef PRESIDENT_HPP
#define PRESIDENT_HPP
#include <iostream>
#include "AForm.hpp"

 class PresidentialPardonForm: public AForm
 {
    private:
        std::string target;
    public:
        PresidentialPardonForm(std::string name);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &src);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &src);
        void execute(Bureaucrat const & executor) const;
 };

#endif