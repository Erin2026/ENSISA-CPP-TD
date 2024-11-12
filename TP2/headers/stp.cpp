#include "stp.h"

StepGenerator::StepGenerator(int seed_value):TimeSeriesGenerator(seed_value){}

vector<double> StepGenerator::generateTimeSeries(int size){
    vector<double> serie;
    serie.reserve(size);
    float current_value =0;

    mt19937 generator(seed);
    uniform_int_distribution<int> step(0,100);
    uniform_real_distribution<double> probabilite(0.0,1.0);

    serie.push_back(current_value);
    for (int i=1; i<size; i++){
        if (probabilite(generator)<0.5){
            current_value = step(generator);
        }
        serie.push_back(current_value);
    }
    return serie;
}