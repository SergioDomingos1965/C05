#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"    
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
        /*Bureaucrat b("Alice", 1);
        PresidentialPardonForm f3("Despacho");
        b.signForm(f3);
        b.executeForm(f3);*/

        Bureaucrat b("Pedro", 1);
        Intern i;
        AForm *f1 = i.makeForm("PresidentialPardonForm", "Despacho");
        b.signForm(*f1);
        b.executeForm(*f1); 
        
    }
    catch(const std::exception& e)
    {
        std::cout <<"erro "<< e.what();
    }
    
    return 0;
}