#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

bool isEven(long long num){
    return (num % 2 == 0);
}

int main()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        long n = stol(ltrim(rtrim(n_temp)));
        
        long long a = 1, b = 2, c;
        long long sum = 2;
        
        if(n == 0){
            cout << "0" << endl;
        }
        else{ 
            while(true){
                c = a + b;
                if(c > n){
                    break;
                }

                a = b; 
                b = c;
                if(isEven(c)){
                    sum += c;
                }
            }
            cout << sum << endl;
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
