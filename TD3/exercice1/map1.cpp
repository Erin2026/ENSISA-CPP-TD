#include <iostream>
#include <vector>
#include <map>

using namespace std;

void countFrequencyBruteForce( const vector<int>& numbers ) {
    vector<int> done;
    /* parcours le vecteur (la liste) en entier */
    for (int i=0; i<numbers.size();i++){
        int counting = numbers[i];          /*nombre actuel*/
        int thereis =0;                     /*as t-on déjà vu le nombre ?*/
        int count =0;                       /*combien de fois y est-il dans le vecteur ?*/

        /* parcours du vecteur des nombres déjà vus */
        for (int j=0; j<done.size();j++){
            if (done[j]==counting){ 
                thereis ++;
            }
        }

        /* si on n'a pas déjà vu le nombre*/
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
    vector<int> numbers = {1, 2, 3, 2, 4, 1, 5, 5, 6} ;
    // Test countFrequencyBruteForce
    cout << "Frequency(Brute Force) : " << endl ;
    countFrequencyBruteForce(numbers) ;
    // Tes t coun tFrequencyOptimal
    cout << "\nFrequency ( Optimal ) : " << endl ;
    map<int,int> frequencyMapOptimal = countFrequencyOptimal(numbers) ;
    for (const auto& entry : frequencyMapOptimal ) {
        cout << entry.first << " : " << entry.second << " times " << endl ;
    }
    return 0 ;
}
