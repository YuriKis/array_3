//Задание 3 с массивами, строим пирамиду
#include <iostream>

using namespace std;

void build_ziggurat ( int l, int Ziggurat[6][6] )
{
    for (int i = 0; i < l/2; i++)
    {
        for (int j = i; j < l-i; j++)
        {
            //horizont
            Ziggurat[i][j] = i+1;
            Ziggurat[l-i-1][j] = i+1;
        }
        for (int j = i+1; j < l-i-1; j++)
        {
            //vertical
            Ziggurat[j][i] = i+1;
            Ziggurat[j][l-i-1] = i+1;
        }
    }
}

int main()
{
    int l = 6;
    int Ziggurat[6][6];

    build_ziggurat (l, Ziggurat);

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << Ziggurat[i][j] << " ";
        }
        cout << endl;
    }
}
