#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int mochila(int n, vector<int> &p, vector<int> &beneficios, vector<vector<int>> &dp)
{

    for (int i = 1; i <= n; ++i)
    {
        for (int w = 0; w <= n; ++w)
        {
            if (p[i - 1] <= w)
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - p[i - 1]] + beneficios[i - 1]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][n];
}
int main()
{
    vector<int> pesos = {2, 3, 4, 5};
    vector<int> beneficios = {3, 4, 5, 6};
    int capacidad = 5;
    int n = pesos.size();

    vector<vector<int>> dp(n + 1, vector<int>(capacidad + 1, 0));

    int resultado = mochila(n, pesos, beneficios, dp);

    cout << "El beneficio máximo que se puede obtener es: " << resultado << endl;

    return 0;
}