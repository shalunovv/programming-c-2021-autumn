#include "mylib.hpp"
using namespace std;


int main(int argc, const char * argv[])
{
    int n = 0;
    cin >> n;
    
    cout << three_n_plus_one(n) << endl;
    
    int r = 0;
    cin >> r;
    
    radius(r);
    
    return EXIT_SUCCESS;
}
