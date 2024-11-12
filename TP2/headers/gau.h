#ifndef GAUSSIANGENERATOR_H
#define GAUSSIANGENERATOR_H

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <cmath>
#include "TimeSeriesGenerator.h"

using namespace std;

class GaussianGenerator : public TimeSeriesGenerator
{
protected:
    double mean;
    double standard_deviation;

public:
    GaussianGenerator(int seed, double standard_deviation_value, double mean_value);

    vector<double> generateTimeSeries(int size) override;
};


#endif