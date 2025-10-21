#include "AForm.hpp"

AForm::AForm(std::string name, bool isSigned, int gradeToSign, int gradeToExecute):name(name),isSigned(isSigned),gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout <<"AForm constructor parametrized called "<<std::endl;
    if(this->gradeToSign < 1 || this->gradeToSign < 1)
        throw GradeTooHighException();
    else if(this->gradeToExecute > 150 || this->gradeToSign > 150)
        throw GradeTooLowException();
}

AForm::~AForm()
{
    std::cout <<"AForm destructor called ."<<std::endl;
}

AForm::AForm(const AForm &src):gradeToSign(src.gradeToSign),gradeToExecute(src.gradeToExecute)
{
    *this = src;
}

AForm &AForm::operator=(const AForm &src)
{
    if(this != &src)
    {
        this->isSigned = src.isSigned;
    }
    return *this;
}

void AForm::beSigned(Bureaucrat &b)
{
    if(b.getGrade() <= this->gradeToSign)
    {
        std::cout <<b.getName()<<" signed "<<this->name<<std::endl;
        this->isSigned = true;
    }
    else
        throw GradeTooLowException();
}
int AForm::get_gradeToExecute()const
{
    return this->gradeToExecute;
}
int AForm::get_gradeToSign()const
{   
    return this->gradeToSign;
}
bool AForm::get_isSigned()const
{
    return this->isSigned;
}
std::string AForm:: get_name()const
{
    return this->name;
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade too Low";
}
std::ostream &operator<<(std::ostream &o, const AForm &f)
{
    o << f.get_name()<< " " << f.get_isSigned();
    return o;
}

const char *AForm::GradeTooHighException:: what() const  throw()
{
    return "Grade too Hig";
}
const char *AForm::FormNotSignedException::what() const throw()
{
        return "Form not signed";
}
