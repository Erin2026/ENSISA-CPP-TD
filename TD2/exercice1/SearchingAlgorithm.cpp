#include "SearchingAlgorithm.h"

int SearchingAlgorithm::totalSearch=0;
int SearchingAlgorithm::totalComparisons=0;
double SearchingAlgorithm::averageComparsions= 0.0;

SearchingAlgorithm::SearchingAlgorithm():numberComparisons(0){}

int SearchingAlgorithm::numberComparisons(int nbr){
    
}

void SearchingAlgorithm::displaySearchResults(ostream& os, int results, int target){
    totalSearch ++;

    if (results ==-1){
        os<<"Searching for the element" << target << "was not successfull"
    } else {
        totalComparisons += numberComparisons;
        averageComparsions = static_cast<double>(totalComparisons)/totalSearch;
        os << "It took a total of " << numberComparisons << " comparisons to find the thing"
    }
}