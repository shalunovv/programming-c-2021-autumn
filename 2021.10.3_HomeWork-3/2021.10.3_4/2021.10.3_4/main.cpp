#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    long long n = 0;
    long long k = 0;
    long long c_n_k = 0;
    long long f_n = 1;
    long long f_k = 1;
    long long f_n_k = 1;
    
    cin >> n >> k;
    
    for (int i = 0; i < n; ++i)
    {
        f_n *= (i + 1);
    }
    for (int i = 0; i < k; ++i)
    {
        f_k *= (i + 1);
    }
    for (int i = 0; i < n - k; ++i)
    {
        f_n_k *= (i + 1);
    }

    c_n_k = f_n / (f_k * f_n_k);
    
    cout << c_n_k << endl;
    
    return EXIT_SUCCESS;
}
