#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

long long sum_multiples(int mult, int num){
    long long temp = (num - 1) / mult;
    
    return (temp) * mult * (temp + 1) / 2;
}

int main()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);
        int n = stoi(ltrim(rtrim(n_temp)));
        
        long long three_sum = sum_multiples(3, n);
        long long five_sum = sum_multiples(5, n);
        long long fifteen_sum = sum_multiples(15, n);
        
        long long sum = three_sum + five_sum - fifteen_sum;
        
        cout << sum << endl; 
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
