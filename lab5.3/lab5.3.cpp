
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double t(const double x);

int main()
{
    double fp, fk, f, z;
    int n;

    cout << "fp = ";
    cin >> fp;
    cout << "fk = ";
    cin >> fk;
    cout << "n = ";
    cin >> n;

    if (n <= 0 || fk < fp)
    {
        cout << "Incorrect input!" << endl;
        return 1;
    }

    double df = (fk - fp) / n;


    cout << "\nCalculation table\n";

    cout << "+--------------+----------------------+\n";
    cout << "|      f       |          z           |\n";
    cout << "+--------------+----------------------+\n";

    for (int i = 0; i <= n; i++)
    {
        f = fp + i * df;

        z = t(f * f)
            + 2 * t(2 * f + 1)
            + sqrt(t(1));

        cout << fixed << setprecision(6);
        cout << "| " << setw(12) << f
            << " | " << setw(20) << z << " |\n";
    }

    cout << "+--------------+----------------------+\n";


    return 0;
}

double t(const double x)
{
    if (abs(x) >= 1)
    {
        return (cos(x) + 1) /
               (exp(x) + pow(sin(x), 2));
    }
    else
    {
        double S = 0;
        double a = x;

        S = a;

        for (int j = 1; j <= 5; j++)
        {
            a *= -x * x / ((2 * j) * (2 * j + 1));
            S += a;
        }

        return S;
    }
}
