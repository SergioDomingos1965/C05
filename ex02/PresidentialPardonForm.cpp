#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm",false, 25, 5),target(target)
{
    std::cout <<"PresidentialPardonForm parametrized called ."<<std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout <<"Destructor called ."<<std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): AForm(src)
{
    *this = src;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
    if(this != &src)
    {
        this->target = src.target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)const
{
    if(!this->get_gradeToSign())
        throw FormNotSignedException();
    if(executor.getGrade() > this->get_gradeToExecute())
        throw GradeTooLowException();

    std::cout <<this->target <<" was pardoned by Zaphod Beeblebrox"<<std::endl;;
}
