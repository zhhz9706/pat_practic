#include <cctype>

#include <iostream>
#include <map>
#include <string>
using namespace std;
   
map<string, string> mp;

string getName(const string str)
{
    string temp;
    int i = 0;
    while(isalpha(str[i]))
    {
        i++;
        if(!str[i])
        {
            break;
        }
    }
    temp = str.substr(0, i);
    return temp;
}

int judgeBirth(const string str)
{
    int num = 0; 
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            num = num * 10 + (str[i] - '0');
            i++;
        }
        else
        {
            i++;
        }
        if(str[i] == '/')
        {
            break;
        }
    }
    string birth = str.substr(i - 4);
    if(birth >= "1814/09/06" && birth <= "2014/09/06")
    {
        mp[birth] = getName(str);  
        return 0;
    }
    else
    {
        return -1;
    }
}


int main(int argc, char **argv)
{
    int N = 0;
    string str;
    cin >> N;
    cin.ignore();
    int count = 0;
    for(int i = 0; i < N ; i++)
    {
        getline(cin, str);
        int ret = judgeBirth(str);
        if(!ret)
        {
            count++;
        }
    }
    cout << count;
    if(count)
    {
        auto it = mp.begin();
        cout << " " <<  it->second;
        while(it != mp.end())
        {
            it++;
        }
        it--;
        cout << " " << it->second << endl;
    }
    return 0;
}

