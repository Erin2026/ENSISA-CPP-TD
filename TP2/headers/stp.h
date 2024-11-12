#ifndef STEPGENERATOR_H
#define STEPGENERATOR_H

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "tsg.h"

using namespace std;

class StepGenerator : public TimeSeriesGenerator
{
public:
    StepGenerator(int seed_value);

    vector<double> generateTimeSeries(int size) override;
};

#endif
