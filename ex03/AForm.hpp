#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
    class AForm
    {
        protected:
            const std::string name;
            bool isSigned;
            const int gradeToSign;
            const int gradeToExecute;
        public:
            AForm(std::string name, bool isSigned, int gradeToSign, int gradeToExecute);
            ~AForm();
            AForm(const AForm &src);
            AForm &operator=(const AForm &src);
            int get_gradeToSign()const;
            int get_gradeToExecute()const;
            std::string get_name()const;
            bool get_isSigned()const;
            void beSigned(Bureaucrat &b); 
            virtual void execute(Bureaucrat const & executor) const = 0;   

        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char *what()const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char *what()const throw();
        };

        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
    };
    std::ostream &operator<<(std::ostream &o, const AForm &f);
#endif