#ifndef BUREAU_CRAT_HPP
#define BUREAU_CRAT_HPP
#include <iostream>
#include <exception>
#include <string>
    class Bureaucrat
    {
        private: 
            const std::string name;
            int grade;
        public:
            Bureaucrat(std::string name, int grade);
            Bureaucrat(const Bureaucrat &src);
            Bureaucrat &operator=(const Bureaucrat &src);
            ~Bureaucrat();
            std::string getName()const;
            int getGrade()const;
            void incremetGrade();
            void decrementGrade();

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
    std::ostream &operator<<(std::ostream &out, const Bureaucrat &a);
#endif