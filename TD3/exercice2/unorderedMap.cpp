#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSumBruteForce(const vector<int>& nums,int target){
    vector<int> couple;

    /*parcours 2 à 2 des termes du vecteur*/
    for (int i=0;i<nums.size()-1;i++){
        for (int j=i;j<nums.size();j++){
            int sum = nums[i]+nums[j];
            if (sum==target){
                couple.push_back(i);
                couple.push_back(j);
                return couple;
            }
        }
    }
    return couple;
}

vector<int> twoSumOptimal(const vector<int>& nums,int target){
    vector<int> couple;
    unordered_map<int,int> umap;

    /*transfert des termes du vecteur dans une unorderedmap*/
    for (int i=0;i<nums.size();i++){
        umap[nums[i]]=i;
    }
    cout<<'\n';
    for (const auto& entry : umap ) {
        int difference = target-entry.first;
        if (umap.count(difference)!=0){
            couple.push_back(umap[difference]);
            couple.push_back(entry.second);
            return couple;
        }
    }
    cout << "aucune somme de couple ne permet d'avoir la valeur cible" << endl;
    return couple;
}

int main(){
    vector<int>nums={2,7,11,15};
    int target=26;                  /*seg fault lorsqu'il n'y a aucun couple qui ne correspond*/
    vector<int> indicesBruteForce=twoSumBruteForce(nums,target);
    cout<<"BruteForceSolution:["
        <<indicesBruteForce[0]
        <<","
        <<indicesBruteForce[1]
        <<"]"
        <<endl;
    vector<int>indicesOptimal=twoSumOptimal(nums,target);
    cout<<"OptimalSolution:["
        <<indicesOptimal[0]
        <<","
        <<indicesOptimal[1]
        <<"]"
        <<endl;
    return 0;
}
