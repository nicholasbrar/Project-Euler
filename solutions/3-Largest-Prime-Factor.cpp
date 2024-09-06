#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        
        long largest = -1;
        
        for(long p = 2; p * p <= n; p++){
            while(n % p == 0){
                largest = p; 
                n /= p;
            }
        }
        
        if(n > 1){
            largest = n;
        }
        cout << largest << endl;
        
        
        
    }
    return 0;
}
