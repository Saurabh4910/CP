#include <bits/stdc++.h>

using namespace std;

long long a = LLONG_MAX;

long long b[5];

char c[4];

int mini(int k)

{

    if (k > 3)

    {

        return 0;

    }

    for (int i = 1; i <= 4; i++)

    {

        for (int j = i + 1; j <= 4; j++)

        {

            if (b[i] != -1 && b[j] != -1)

            {

                long long s = b[i];

                b[i] = -1;

                long long t = b[j];

                if (c[k] == '+')

                {

                    b[j] = s + t;

                }

                else if (c[k] == '*')

                {

                    b[j] = s * t;

                }

                if (k == 3 && b[j] < a)

                {

                    a = b[j];

                }

                mini(k + 1);

                b[i] = s;

                b[j] = t;

            }

        }

    }
    return 0;
}

int main(int argc, char const *argv[])

{	
	// freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);

    cin >> b[1] >> b[2] >> b[3] >> b[4];

    cin >> c[1] >> c[2] >> c[3];

    mini(1);

    cout << a << endl;

    return 0;

}

