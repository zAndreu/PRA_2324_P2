#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int cambio(vector<int> &v, int monedasN, vector<int> &dp)
{
    dp[0] = 0;
    if (v[0] > monedasN)
        return -1;
    for (int i = 1; i <= monedasN; ++i)
    {
        for (int moneda : v)
        {
            if (i - moneda >= 0)
                dp[i] = min(dp[i], dp[i - moneda] + 1);
        }
    }

    return dp[monedasN] == numeric_limits<int>::max() ? -1 : dp[monedasN];
}

int main()
{
    vector<int> monedas = {1, 3, 4, 6};
    int cantidad = 8;
    vector<int> dp(cantidad + 1, numeric_limits<int>::max());
    int resultado = cambio(monedas, cantidad, dp);

    if (resultado != -1)
    {
        cout << "Número mínimo de monedas para hacer " << cantidad << " es: " << resultado << endl;
    }
    else
    {
        cout << "No es posible hacer la cantidad con las monedas dadas." << endl;
    }

    return 0;
}