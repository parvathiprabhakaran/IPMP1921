#include <bits/stdc++.h>
#define ll long long 
using namespace std;

vector<string> split_string(string);
ll f(ll n){
  ll p=0,q,r;if(n>=5){p+=n/5;n=n%5;}if(n>=2){p+=n/2;n=n%2;}
if(n>=1){p+=n;}return p;}
ll equal(vector<ll> a) {
  ll n=(ll)a.size();ll s=10001,t=10000000001,k=0;for(auto i=0;i<n;i++){s=min(s,a[i]);}
for(auto i=0;i<=4;i++){k=0;for(auto j=0;j<n;j++){k+=(f(a[j]-s+i));}t=min(t,k);}return t;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    ll t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (auto t_itr = 0; t_itr < t; t_itr++) {
        ll n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split_string(arr_temp_temp);

        vector<ll> arr(n);

        for (auto i = 0; i < n; i++) {
            ll arr_item = stoi(arr_temp[i]);

            arr[i] = arr_item;
        }

        ll result = equal(arr);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
