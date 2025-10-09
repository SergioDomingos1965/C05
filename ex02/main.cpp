#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"    
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
    try
    {
        /*Bureaucrat bob("Ana", 10);
        ShrubberyCreationForm f1("relatorio");
        bob.signForm(f1);
        bob.executeForm(f1);*/

        /*Bureaucrat a("Alice", 10);
        RobotomyRequestForm f2("Ficha");
        a.signForm(f2);
        a.executeForm(f2);*/
        Bureaucrat b("Alice", 1);
        PresidentialPardonForm f3("Despacho");
        b.signForm(f3);
        b.executeForm(f3);
    }
    catch(const std::exception& e)
    {
        std::cout <<"erro "<< e.what();
    }
    
    return 0;
}