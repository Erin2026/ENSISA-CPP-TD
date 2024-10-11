#ifndef SEARCHINGALGORITHM_H
#define SEARCHINGALGORTIHM_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class SearchingAlgorithm
{
private:
    
public:
    SearchingAlgorithm();

    static int totalSearch;
    static double averageComparsions;
    static int totalComparisons;

    int numberComparisons(int nbr);

    virtual int search(const vector<int>& elements,int searching)=0;
    void displaySearchResults(ostream& os, int results, int target);
};



#endif