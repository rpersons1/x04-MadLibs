//Authors: Ryan Persons
#include <iostream>
#include <string>

int main()
{
    std::string name;
    char letter;
    int wholenumber;
    double decimilenumber;
    std::string noun;
    
    std::cout<<"Insert a Name\n";
    std::cin>>name;
    std::cout<<"Insert a letter\n";
    std::cin>>letter;
    std::cout<<"Insert a whole number\n";
    std::cin>>wholenumber;
    std::cout<<"Instert a decimile number\n";
    std::cin>>decimilenumber;
    std::cout<<"Insert a noun\n";
    std::cin>>noun;

std::cout<<name<<" "<<letter<<" was on his school track team.\n";
std::cout<<"He ran the "<<wholenumber<<" mile for his team.\n";
std::cout<<"His P.R. for the run was "<<decimilenumber<<".\n";
std::cout<<"He got 1st place at his first race and won a "<<noun<<".\n";

  return 0;
}
