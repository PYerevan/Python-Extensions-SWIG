#include <iostream>
#include "factorial.h"


int main(int argc, char** argv)
{
    if(argc != 3)
    {
        std::cout << "ERROR\nPlease run by the following command.\n";
        std::cout << "./executable number times\n";
        return 0;
    }
    int val = std::stoi(argv[1]);
    int N = std::stoi(argv[2]);
    float elapsed_time, mean_time = 0;
    long long fac;

    for (int i = 0;i<N;i++){
        const clock_t begin_time = clock();
        fac = fact(val);
        elapsed_time  = float( clock () - begin_time ) /  CLOCKS_PER_SEC;
        mean_time += elapsed_time;
    }
    std::cout << "Measuring " << N << " times\n";
    std::cout << "Elapsed time " << float(mean_time)/N << " seconds "<< std::endl;
    std::cout << "Factorial(" << val << ")=" << fac << std::endl;
    return 0;
}