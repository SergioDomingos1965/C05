#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm",false, 145, 137),target(target)
{
    std::cout <<"Parametrized constructor ShrubberyCreationForm called ."<<std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):AForm(src)
{
    *this = src;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout <<"ShrubberyCreationForm destructor called ."<<std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
    if(this != &src)
    {
        this->isSigned = src.get_isSigned();
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)const
{
    if(!this->get_isSigned())
        throw FormNotSignedException();
    if(executor.getGrade() > this->get_gradeToExecute())
        throw GradeTooLowException();

    std::ofstream file ((target + "_shrubbery").c_str());
    std::cout <<executor.getName() <<" executed "<< this->target <<std::endl;

    file << "       oxoxoo    ooxoo\n";
    file << "    ooxoxo oo  oxoxooo\n";
    file << "   oooo xxoxoo ooo ooox\n";
    file << "   oxo o oxoxo  xoxxoxo\n";
    file << "     oxo xooxoooo o ooo\n";
    file << "        ooo\\\\oo\\\\  /o/o\n";
    file << "            \\\\  \\\\/ /\n";
    file << "             |   /\n";
    file << "             |  |\n";
    file << "             | D|\n";
    file << "             |  |\n";
    file << "             |  |\n";
    file << "  ________/____\\\\_____";

    file.close();
    std::cout <<" -- Shrubbery created successfully --"<<std::endl;
}
