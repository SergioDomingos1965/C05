#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP
#include "AForm.hpp"
#include <fstream>

    class ShrubberyCreationForm: public AForm
    {
        private:
            std::string target;
        public:
            ShrubberyCreationForm(std::string target);
            ShrubberyCreationForm(ShrubberyCreationForm const &src);
            ~ShrubberyCreationForm();
            ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
            void execute(Bureaucrat const & executor) const;   
    };

#endif