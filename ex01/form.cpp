#include "form.hpp"

Form::Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute):name(name),isSigned(isSigned),gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout <<"Form constructor parametrized called "<<std::endl;
    if(this->gradeToSign < 1 || this->gradeToSign < 1)
        throw GradeTooLowException();
    else if(this->gradeToExecute > 150 || this->gradeToExecute > 150)
         throw GradeTooHighException();
}

Form::~Form()
{
    std::cout <<"Form destructor called ."<<std::endl;
}

Form::Form(const Form &src):gradeToSign(gradeToSign),gradeToExecute(gradeToExecute)
{
    *this = src;
}

Form::operator=(const Form &src)
{
    if(this != &src)
    {
        this->name = src.name;
        this->gradeToExecute = src.gradeToExecute;
        this->gradeToSign = src.gradeToSign;
    }
    return *this;
}

Form::beSigned(Bureaucrat &b)
{
    if(b.getGrade() <= this->gradeToSign)
        std::cout <<"assinaaado"<<std::endl;
    else
        std::cout <<"nao assinado"<<std::endl;
}

const char *Form::GradeTooLowException::what const throw()
{
    return "Grade too Low";
}

const char *Form::GradeTooHighException:: what const  throw()
{
    return "Grade too Hig";
}
