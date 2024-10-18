#ifndef MAP1_H
#define MAP1_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Map1
{
public:
    Map1();
    
    void countFrequencyBruteForce(const vector<int>& numbers);
    /*map<int,int> countFrequencyOptimal(const vector<int>& numbers);*/
};

#endif