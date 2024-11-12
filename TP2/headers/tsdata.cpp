#include "TimeSeriesGenerator.h"

TimeSeriesGenerator::TimeSeriesGenerator():seed(0) {}

TimeSeriesGenerator::TimeSeriesGenerator(int seed_value):seed(seed_value) {}

void TimeSeriesGenerator::printTimeSeries(const vector<double> serie){
    for (double value : serie){
        cout<<value<<" ";
    }
    cout<<endl;
}