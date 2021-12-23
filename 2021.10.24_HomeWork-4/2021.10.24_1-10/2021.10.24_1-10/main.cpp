#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    cin >> n;
    int a[100] = {0}; //1
    
    
    for (int i = 0; i < n; ++i) //2
    {
        cin >> a[i];
    }
    
    
    cout << "ARRAY : "; //3
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
    
    cout << "EVEN : "; //4
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    
    
    cout << "SUM : "; // 5
    int s = 0;
    
    for (int i = 0; i < n; ++i)
    {
        s += a[i];
    }
    cout << s << endl;
    
    
    cout << "PRODUCT OF NEGATIVE : "; //6
    
    int pr_neg = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] < 0)
        {
            pr_neg = 1;
            break;
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (a[i] < 0)
        {
            pr_neg *= a[i];
        }
    }
    cout << pr_neg << endl;
    
    
    cout << "FIRST MIN INDEX : "; // 7
    int f_min_ind = 0;
    int mn = a[0];
    
    for (int i = 0; i < n; ++i)
    {
        if (mn > a[i])
        {
            mn = a[i];
            f_min_ind = i;
        }
    }
    cout << f_min_ind << endl;
    
    
    cout << "SECOND MAX : "; // 8
    int mx1 = a[0];
    int mx2 = mx1 - 1;
     
    for (int i = 1; i < n; ++i)
    {
        if(a[i] > mx1)
        {
            mx2 = mx1;
            mx1 = a[i];
        }
        else
        {
            if (a[i] > mx2)
            {
                mx2 = a[i];
            }
        }
    }
    cout << mx2 << endl;
    
    
    cout << "REVERSE : "; // 9
    for (int i = 0; i < n; ++i)
    {
        cout << a[n - i - 1] << " ";
    }
    cout << endl;
    
    
    cout << "ODD INDEXES : "; // 10
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 1)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    
    return EXIT_SUCCESS;
}
