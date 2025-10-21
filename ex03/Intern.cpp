#include "Intern.hpp"

Intern::Intern()
{
    std::cout <<"Intern default constructor called "<<std::endl;
}
Intern::~Intern()
{
    std::cout <<"Intern destructor called "<<std::endl;
}
AForm * Intern::makeForm(std::string name, std::string target)
{
    std::string names[]={
        "PresidentialPardonForm",
        "RobotomyRequestForm",
        "ShrubberyCreationForm"
    }

    int i = 0;

    while(i < 2)
    {
        if(name[i] == name)
        
    }

    // if(name == "PresidentialPardonForm")
    // {
    //     return new PresidentialPardonForm(target);
    //     std::cout <<"Intern  creates "<< name <<std::endl;
    // }
    // if(name == "RobotomyRequestForm")
    // {
    //     return new RobotomyRequestForm(target);
    //     std::cout <<"intern creates "<<name <<std::endl;
    // }
    // if(name == "ShrubberyCreationForm")
    // {
    //     return new ShrubberyCreationForm(target);
    //     std::cout <<"Intern creates "<< name <<std::endl;
    // }
    // else
    // {
    //     std::cout <<"Wrong form name"<<std::endl;
    //     return NULL;
    // }
}