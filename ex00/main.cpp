#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("Ana", 2);
        std::cout <<a<<std::endl;
        a.incremetGrade();

        Bureaucrat b("Bela", 2);
        b.decrementGrade();
        std::cout <<b<<std::endl;
    }
    catch(std::exception &e)
    {
        std::cout <<"Erro: "<<e.what()<<std::endl;
    }

    return 0;
}