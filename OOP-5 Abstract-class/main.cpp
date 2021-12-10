#include <iostream>
#include "Norm.h"
#include "Vector3D.h"
#include "Complex.h"

void menu();

int main()
{
    Norm* NormVector3D = new Vector3D();
    Norm* NormComplex = new Complex();
    int choise;
    Vector3D* vector = dynamic_cast<Vector3D*>(NormVector3D);
    do
    {
        menu();
        std::cin >> choise;
        switch (choise)
        {
        case 1:
        {
            float x, y, z;
            std::cout << "Input Vector:";
            std::cin >> x >> y >> z;
            vector->setX(x);
            vector->setY(y);
            vector->setZ(z);
        }break;
        case 2:
        {
            std::cout << "Vector Norm:" << vector->completeNorm() << '\n';
        }break;
        case 3:
        {
            std::cout << "Vector Module:" << vector->completeModule() << '\n';
        }break;
        case 4:
        {
            std::cout << "Vector:" << vector->getX()<< ' ' << vector->getY() << ' ' << vector->getZ() << '\n';
        }break;
        case 5:
        {
            float re, im;
            std::cout << "Input Re and Im:";
            std::cin >> re >> im;
            NormComplex->setX(re);
            NormComplex->setY(im);
        }break;
        case 6:
        {
            std::cout << "Complex Norm:" << NormComplex->completeNorm() << '\n';
        }break;
        case 7:
        {
            std::cout << "Complex Module:" << NormComplex->completeModule() << '\n';
        }break;
        case 8:
        {
            std::cout << "Complex:" << NormComplex->getX() << ' ' << NormComplex->getY() << '\n';
        }break;
        case 9:
        {
            std::cout << "Exit from programm...\n";
        }break;
        default:
        {
            std::cout << "Uncorrect number\n";
        }break;
        }
    } while (choise != 9);
    return 0;
}

void menu()
{
    std::cout << "1. Vector Change" << '\n';
    std::cout << "2. Vector Norm" << '\n';
    std::cout << "3. Vector Module" << '\n';
    std::cout << "4. Vector Output" << '\n';
    std::cout << "5. Complex Change" << '\n';
    std::cout << "6. Complex Norm" << '\n';
    std::cout << "7. Complex Martix" << '\n';
    std::cout << "8. Complex Output" << '\n';
    std::cout << "9. Exit" << '\n';
}
