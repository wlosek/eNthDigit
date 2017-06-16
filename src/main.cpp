#include <iostream>
#include <math.h>
#include <iomanip>

int main(int argc, char *argv[])
{
    int precision {0};

    do
    {
        std::cout << "Set precision: ";
        std::cin >> precision;

        precision ++;

        if(precision < 0 || precision > 30)
        {
            std::cout << "Too big precision" << std::endl;
            continue;
        }

        std::cout << std::setprecision(precision);
        std::cout << "e: " << exp(1) << std::endl;
        break;
    } while(true);

    return 0;
}
