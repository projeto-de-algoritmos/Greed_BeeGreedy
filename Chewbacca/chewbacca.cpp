#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    int digit;
    vector<int> num;

    cin >> n;
    
    while (n != 0)
    {
        digit = n % 10;
        if(digit >= 5 and n != 9){
            num.push_back(9-digit);
        }else
        {
            num.push_back(digit);
        }
        n = n/10;
    }
    
    while (!num.empty())
    {
        cout << num.back();
        num.pop_back();
    }
    
    
return 0;
}