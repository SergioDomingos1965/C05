#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("Ana", 1);
        std::cout <<a<<std::endl;
        a.incremetGrade();
    }
    catch(std::exception &e)
    {
        std::cout <<"Erro: "<<e.what()<<std::endl;
    }

    return 0;
}