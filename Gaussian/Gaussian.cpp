#include <stdio.h>
#include <iostream>
#include <chrono>

#include "Gaussian.h"

Gaussian::Gaussian(float mean_value, float sigma_value, long long num_events_value)
{
  mean = mean_value;
  sigma = sigma_value;
  num_events = num_events_value;
  array = {};
  generate();
};

Gaussian::~Gaussian(){
};

void Gaussian::dump()
{
    for(float num : array)
        std::cout << num << std::endl;
};

void Gaussian::dump_params()
{
    std::cout << "mean:       " << mean << std::endl;
    std::cout << "sigma:      " << sigma << std::endl;
    std::cout << "num_events: " << num_events << std::endl;
}

void Gaussian::dump_real_params()
{
    std::cout << "mean:       " << Gaussian::Mean() << std::endl;
    std::cout << "stDev:      " << Gaussian::stDev() << std::endl;
}


std::vector<float> Gaussian::get_values()
{
    return array;
};

void Gaussian::generate()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);
    std::normal_distribution<float> distribution(mean, sigma);
    float number;
    array.clear();
    for (int i=0; i<num_events; ++i) {
      number = distribution(generator);
      array.push_back(number);
    }
};


float Gaussian::Mean() {
        return  std::accumulate(array.begin(), array.end(), 0.0) / array.size();
}

float Gaussian::Variance() {
        float xBar = Mean();
        float sqSum = std::inner_product(array.begin(), array.end(), array.begin(), 0.0);
        return sqSum / array.size() - xBar * xBar;
}

float Gaussian::stDev() {
     return std::sqrt(Variance());
}
