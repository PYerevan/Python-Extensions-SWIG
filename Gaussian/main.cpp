#include <iostream>
#include <iomanip>
#include <time.h>
#include "Gaussian.h"

int main()
{
    const clock_t begin_time = clock();
    Gaussian g(5,2,1000000);
    std::cout <<  std::setprecision(1)  << "Elapsed time " << float( clock () - begin_time ) /  CLOCKS_PER_SEC << " seconds"<< std::endl;
    g.dump_params();
    g.dump_real_params();
    return 0;
}
