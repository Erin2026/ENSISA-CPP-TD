#include <iostream>
#include <vector>
#include <map>

using namespace std;

void countFrequencyBruteForce( const vector<int>& numbers ) {
    vector<int> done;
    for (int i=0; i<numbers.size();i++){
        int counting = numbers[i];
        int thereis =0;
        int count =0;

        for (int j=0; j<done.size();j++){
            if (done[j]==counting){
                thereis ++;
            }
        }
        if (thereis == 0){
            for (int j=i; j<numbers.size();j++){
                if (numbers[j]==counting){
                    count++;
                }
            }
            cout<<"il y a "<<count<<" "<<counting<<endl;
            done.push_back(counting);
        }
        
    }
    cout<<endl;
}

map<int,int> countFrequencyOptimal( const vector<int>& numbers ) {
    map<int,int> mapping;
    for (int i=0;i<numbers.size();i++){
        mapping[numbers[i]]++;
    }
    return mapping;
}

int main() {
    vector<int> numbers = {1 , 2 , 3 , 2 , 4 , 1 , 5 , 5 , 6 } ;
    // Test countFrequencyBruteForce
    cout << "Frequency(Brute Force) : " << endl ;
    countFrequencyBruteForce(numbers) ;
    // Tes t coun tFrequencyOp t imal
    cout << "\nFrequency ( Optimal ) : " << endl ;
    map<int,int> frequencyMapOptimal = countFrequencyOptimal(numbers) ;
    for (const auto& entry : frequencyMapOptimal ) {
        cout << entry.first << " : " << entry.second << " times " << endl ;
    }
    return 0 ;
}
