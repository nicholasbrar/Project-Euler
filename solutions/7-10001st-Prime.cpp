#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

vector<bool>sieve(int n){
    vector<bool> primes(n + 1, true);
    
    primes[0] = primes[1] = false;
    
    for(int i = 2; i * i <= n; i++){
        if(primes[i] == true){
            for(int k = i * i; k <= n; k += i){
                primes[k] = false;
            } 
        }
    }
    return primes;
}

int main()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));
    
    vector<bool>temp = sieve(100000000);
    vector<int>primes;
        
    for(int i = 2; i < temp.size(); i++){
        if(temp[i] == true){
            primes.push_back(i);
        }
    }

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));
        
      
        cout << primes[n - 1] << endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
