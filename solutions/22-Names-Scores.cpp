#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int name_value(string s){
    int sum = 0; 
    
    for(int i = 0; i < s.length(); i++){
        sum += s[i] - 'A' + 1;
    }
    return sum;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t; 
    cin >> t; 
    
    vector<string> names;
    
    for(int i = 0; i < t; i++){
        string name; 
        cin >> name; 
        
        names.push_back(name);
    }
    
    int q; 
    cin >> q;
    
    vector<string> names_needing_scores;
    
    for(int i = 0; i < q; i++){
        string names;
        cin >> names;
        
        names_needing_scores.push_back(names);
    }
    
    sort(names.begin(), names.end());
    
    unordered_map<string, int> place_values;
    
    for(int i = 0; i < names.size(); i++){
        place_values.insert({names[i], i+1});
    }
    
    vector<int> scores;
    
    for(int j = 0; j < names_needing_scores.size(); j++){
        string st = names_needing_scores[j];
        int n = 0; 
        
        auto it = place_values.find(st);
        n = it->second;
        
        scores.push_back(n * name_value(st));
    }
    
    for(int i : scores){
        cout << i << endl;
    }
    
    
    
    
    return 0;
}
