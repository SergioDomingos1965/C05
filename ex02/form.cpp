#include "form.hpp"

Form::Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute):name(name),isSigned(isSigned),gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout <<"Form constructor parametrized called "<<std::endl;
    if(this->gradeToSign < 1 || this->gradeToSign < 1)
        throw GradeTooHighException();
    else if(this->gradeToExecute > 150 || this->gradeToSign > 150)
        throw GradeTooLowException();
}

Form::~Form()
{
    std::cout <<"Form destructor called ."<<std::endl;
}

Form::Form(const Form &src):gradeToSign(src.gradeToSign),gradeToExecute(src.gradeToExecute)
{
    *this = src;
}

Form &Form::operator=(const Form &src)
{
    if(this != &src)
    {
        this->isSigned = src.isSigned;
    }
    return *this;
}

 void Form::beSigned(Bureaucrat &b)
{
    if(b.getGrade() <= this->gradeToSign)
    {
        std::cout <<b.getName()<<" signed "<<this->name<<std::endl;
        this->isSigned = true;
    }
    else
        throw GradeTooLowException();
}
int Form::get_gradeToExecute( )
{
    return this->gradeToExecute;
}
int Form::get_gradeToSign()
{   
    return this->gradeToSign;
}
bool Form::get_isSigned()
{
    return this->isSigned;
}
std::string Form:: get_name()
{
    return this->name;
}
const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade too Low";
}

const char *Form::GradeTooHighException:: what() const  throw()
{
    return "Grade too Hig";
}
