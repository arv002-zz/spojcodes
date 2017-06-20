#include<iostream>
#include<cstdio>
#include<map>

using namespace std;
map<long long,long long> Map;
long long coins(long long num)
{
    if(Map.count(num))
        return Map[num];
    else
    {
        Map[num]=coins(num/2)+coins(num/3)+coins(num/4);
        return Map[num];
    }

}
int main()
{
    long long num,ans;

    for(int i=0; i<=11; i++)
        Map[i]=i;

    while(scanf("%lld",&num) != EOF)
    {
        cout<<coins(num)<<"\n";
    }
    return 0;
}
