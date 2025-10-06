#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):name(name),grade(grade)
{
    std::cout <<"Bureaucrat parameterized constructor called ."<<std::endl;
    if(grade < 1)
        throw GradeTooHighException();
    if(grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout <<"Bureaucrat destructor called ."<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    std::cout <<"Bureaucrat copy constructor called ."<<std::endl;
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    if(this != &src)
    {
        this->grade = src.getGrade();
    }
    return *this;
}

void Bureaucrat::incremetGrade()
{
    if(this->grade - 1 < 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if(this->grade + 1 > 150)
        throw GradeTooLowException();
    this->grade++;
}
const char * Bureaucrat::GradeTooHighException::what()const throw()
{
    return "Grade too Hig";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too Low";
}

int Bureaucrat::getGrade()const
{
    return this->grade;
}

std::string Bureaucrat::getName()const
{
    return this->name;
}

void Bureaucrat::signForm(Form &form)
{
    form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &a)
{
    out << a.getName() << ", bureacrat grade " << a.getGrade();
    return out;
}

