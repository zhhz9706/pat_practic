#include <iostream>
#include <string>

using namespace std;

bool judge(const string str)
{
    if(str >= "1814/09/06" && str <= "2014/09/06")
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main(int argc, char **argv)
{
    int N; 
    cin >> N;
    cin.ignore();
    int count = 0;
    string name, birth, maxName, minName, maxBirth = "1814/09/06", minBirth = "2014/09/06";
    for(int i = 0; i < N; i++)
    {
        cin >> name >> birth;
        if(judge(birth))
        {
            count++;
            if(birth >= maxBirth)
            {
                maxBirth = birth;
                maxName = name;
            }
            if(birth <= minBirth)
            {
                minBirth = birth;
                minName = name;
            }
        }
    }
    cout << count;
    if(count)
    {
        cout << " " << maxName << " " << minName << endl;
    }
    return 0;
}

