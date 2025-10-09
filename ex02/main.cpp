#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form b("Relatorio", true, 11, 10 );
        Bureaucrat a("Ana", 12);
        std::cout <<a<<std::endl;
        a.signForm(b);
    }
    catch(std::exception &e)
    {
        std::cout <<"Erro: "<<e.what()<<std::endl;
    }

    return 0;
}