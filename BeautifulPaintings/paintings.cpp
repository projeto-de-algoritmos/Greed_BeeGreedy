#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a;
    int count = 0;
    int num_rpt = 1;
    int max_rpt = 1;
    vector<int> p;
    
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> a;
        p.push_back(a);
    }
    
    sort(p.begin(), p.end());
    
    for (size_t i = 0; i < p.size(); i++)
    {
        if(i != p.size()-1){
            if(p[i+1] == p[i]) 
            {
                num_rpt++;

                if (max_rpt < num_rpt)
                {
                    max_rpt = num_rpt;
                }
            }else 
            {   
                num_rpt = 1;
            } 
        }
    }

    cout << n - max_rpt;
    
return 0;
}