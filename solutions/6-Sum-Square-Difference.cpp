#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

long long sum_of_squares(int num){
    long long sum = 0;
    for(long i = num; i > 0; i--){
        sum += (i * i);
    }
    return sum;
}

long long square_of_sum(int num){
    long long sum = 0;
    for(long i = num; i > 0; i--){
        sum += i; 
    }
    
    return (sum * sum);
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
        
        long long sum_squares = sum_of_squares(n);
        long long square_sum = square_of_sum(n);
        
        long long difference = sum_squares - square_sum;
        
        if(difference >= 0){
            cout << difference << endl;
        }
        else{
            difference *= -1;
            cout << difference << endl;
        }
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
