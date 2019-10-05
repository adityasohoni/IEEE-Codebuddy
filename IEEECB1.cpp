#include<iostream> 
#include<string> // for string and to_string() 
using namespace std;
bool comp(string str1, string str2)
{
    string str12 = str1+str2;
    string str21 = str2+str1;
    if(str12.compare(str21)>=0)
        return true;
    return false;
}
string Solution::largestNumber(const vector<int> &A) {
    int i;
    string k;
    vector<string> ans;
    //vector<string> str[10];
    /*for (auto x : A) 
    {
        k=to_string(x);
        str[((int)(k[0]))-48].push_back(k);
    }*/
    for (auto x : A) 
    {
        ans.push_back(to_string(x));
    }
    /*for(i=0;i<=9;i++)
    {
        sort(str[i].begin(), str[i].end(), comp);
    }
    
    for(i=9;i>=0;i--)
    {
        for (auto x : str[i]) 
        {
            ans+=x;
        }
    }
    */
    sort(ans.begin(), ans.end(), comp);
    //return ans;
    int flag=0;
    for (const auto &piece : ans) 
        if(piece!="0")
        {
            flag=1;
            break;
        }
        
    if (flag==0)
        return "0";
            
    
    std::string s;
    for (const auto &piece : ans) s += piece;
    
    return s;
    
    
}