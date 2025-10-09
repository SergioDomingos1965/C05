#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
    class Form
    {
        private:

            const std::string name;
            bool isSigned;
            const int gradeToSign;
            const int gradeToExecute;
        public:
            Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute);
            ~Form();
            Form(const Form &src);
            Form &operator=(const Form &src);
            int get_gradeToSign();
            int get_gradeToExecute();
            std::string get_name();
            bool get_isSigned();
            void beSigned(Bureaucrat &b);    

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
    };

#endif