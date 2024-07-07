#include <iostream>
#include "common.h"

void DisplayMap(std::vector<std::vector<int>> x)
{
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[i].size(); j++)
        {
            std::cout << x[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

void DisplayVector(std::vector<std::string> x)
{
    for (int i = 0; i < x.size(); i++)
        std::cout << x[i] << "::";
    std::cout << std::endl;
}