#include <fstream>
#include <string>
#include <iostream>
#include <string>
#include "extractor.h"

void extract(std::string filename) {
    std::ifstream file(filename);
    std::string patterns [] = {
        "COMPOUND NUCLEUS ENERGY",
        "isomer state population",
        "ground state population"
    };


    std::string line;
     while (std::getline(file, line))
    {
        for(std::string pattern : patterns)
        if (line.find(pattern) != std::string::npos) {
            std::cout<< line <<std::endl;

        }
    }
}

int main(int argc, char** argv)
{
    if(argc != 2)
    {
        std::cout << "ERROR\nPlease run by the following command.\n";
        std::cout << "./executable input.txt\n";
        return 0;
    }

    std::string filename = argv[1];
    const clock_t begin_time = clock();
    extract(filename);
    float elapsed_time  = float( clock () - begin_time ) /  CLOCKS_PER_SEC;
    std::cout<<"Elapsed time: "<<elapsed_time<<" seconds\n";
}