#include <stdio.h>
#include <stdint.h>
#include <string>
#include <random>
#include <vector>

class Gaussian {
    public:
        Gaussian(float mean_value=0, float sigma_value=1, long long num_events_value = 10);
        ~Gaussian();

        void dump();
        void dump_params();
        void dump_real_params();
        void generate();
        float Mean();
        float Variance();
        float stDev();

        std::vector<float> get_values();

    private:
        float mean, sigma;
        int num_events;
        std::vector <float> array;
};