#include "Bureaucrat.hpp"

int main()
{
    try
    {
        AForm b("Relatorio", false, 12, 10 );
        Bureaucrat a("Ana", 12);
        std::cout <<a<<std::endl;
        a.signForm(b);

        std::cout <<" "<<std::endl;
        AForm c("Ficha",false, 1, 10);
        Bureaucrat d("Bela", 2);
        std::cout <<d<<std::endl;
        d.signForm(c);
    }
    catch(std::exception &e)
    {
        std::cout <<"Erro: "<<e.what()<<std::endl;
    }

    return 0;
}