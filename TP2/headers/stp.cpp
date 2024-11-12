#include "StepGenerator.h"

StepGenerator::StepGenerator(int seed_value):TimeSeriesGenerator(seed_value){}

vector<double> StepGenerator::generateTimeSeries(int size){
    vector<double> serie;
    serie.reserve(size);

}