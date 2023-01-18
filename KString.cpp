#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int K;
    cin >> K;

    int frequency[26] = {0};

    int len = str.length();

    for (int i = 0; i < len; i++)
    {

        frequency[str[i] - 'a']++;
    }

    string single_copy = "";

    for (int i = 0; i < 26; i++)
    {

        if (frequency[i] != 0)
        {

            if ((frequency[i] % K) != 0)
            {

                cout << "-1" << endl;
                 return 0;
            }
            else
            {

                int total_occurrences = (frequency[i] / K);

                for (int j = 0; j < total_occurrences; j++)
                {
                    single_copy += char(i + 97);
                }
            }
        }
    }

    string kString;

    for (int i = 0; i < K; i++)
    {
        kString += single_copy;
    }
    cout << kString << endl;
}
