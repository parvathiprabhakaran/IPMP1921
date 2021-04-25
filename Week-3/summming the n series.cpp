#include <bits/stdc++.h>
#define M 1000000007
using namespace std;

/*
 * Complete the summingSeries function below.
 */
int summingSeries(long n) {
   return ((n%M)*((n+1)%M)-(n%M)+M)%M;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = summingSeries(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
