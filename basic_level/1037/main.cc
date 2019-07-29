#include <iostream>
using namespace std;

typedef struct
{
    int Galleon;
    int Sickle;
    int Knut;
}Cash_t, *pCash_t;

void changeToCash(int val)
{
    int Galleon = 0, Sickle = 0, Knut = 0;
    Knut = val % 29;
    val /= 29;
    Sickle = val % 17;
    Galleon = val / 17;
    cout << Galleon << '.' << Sickle << '.' << Knut << endl;
}

void test1()
{
    char c;
    Cash_t c1, c2;
    cin >> c1.Galleon >> c >> c1.Sickle >> c >> c1.Knut
        >> c2.Galleon >> c >> c2.Sickle >> c >> c2.Knut;
    int sum1 = (c1.Galleon * 17 + c1.Sickle) * 29 + c1.Knut;
    int sum2 = (c2.Galleon * 17 + c2.Sickle) * 29 + c2.Knut;
    bool flag = 0;
    int sub = 0;
    if(sum1 <= sum2)
    {
        sub = sum2 - sum1;
    }
    else
    {
        flag = 1;
        sub = sum1 - sum2;
    }
    if(flag)
    {
        cout << "-" ;
        changeToCash(sub);
    }
    else
    {
        changeToCash(sub);
    }
}


int main(int argc, char **argv)
{
    test1();
    return 0;
}
