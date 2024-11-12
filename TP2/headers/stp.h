#ifndef STEPGENERATOR_H
#define STEPGENERATOR_H

class StepGenerator
{

public:
    StepGenerator(int seed_value);

    vector<double> generateTimeSeries(int size) override;
};

#endif
