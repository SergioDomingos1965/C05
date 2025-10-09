#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", false, 72, 45), target(target)
{
    std::cout <<"RobotomyRequestForm parametrized constructor called ."<<std::endl;

}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout<<"RobotomyRequestForm destructor called "<<std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):AForm(src)
{
    *this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    if(this != &src)
    {
        this->target = src.target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)const
{
    if(!this->get_isSigned())
        throw FormNotSignedException();
    if(executor.getGrade() > this->get_gradeToExecute())
        throw GradeTooLowException();

    std::cout <<"Tucu tucu ..."<<std::endl;
    std::cout <<this->target<<" successfully roboticized ."<<std::endl;
}

