#include "GaussianGenerator.h"

GaussianGenerator::GaussianGenerator(int seed, double standard_deviation_value, double mean_value):TimeSeriesGenerator(seed), standard_deviation(standard_deviation_value),mean(mean_value){}

vector<double> generateTimeSeries(int size) override{
    vector<double> serie;
    serie.reserve(size);

    mt19937 generator(seed);
    uniform_real_distribution<double> distribution(0.0,1.0);

    for (int i = 0; i<size; i+=2){
        double u1 = distribution(generator);
        double u2 = distribution(generator);

        double z0 = sqrt(-2 * log(u1)) * cos(2.0 * M_PI* u2);
        double z1 = sqrt(-2 * log(u1)) * sin(2.0 * M_PI* u2);

        serie.push_back(mean+z0*standard_deviation_value);
        if (i+1<size){
            serie.push_back(mean+z1*standard_deviation_value);
        }
    }
    return serie;
}