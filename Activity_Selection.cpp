#include<bits/stdc++.h>
using namespace std;

void Selection_Sort(vector<pair<int,int>>& activity , int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(activity.at(i).second>activity.at(j).second)
            {
                activity.at(i).swap(activity.at(j));
            }
        }
    }
    return;
}


int main()
{
    int n=3;
    vector<pair<int,int>> activity;

    int start,end;
    for(int i=0 ; i<n ; i++)
    {
        cin>>start;
        cin>>end;
        pair<int,int>p(start,end);
        activity.push_back(p);
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<activity.at(i).first<<"  "<<activity.at(i).second<<endl;
    }
    vector<int>res;
    
    Selection_Sort(activity,n);
    
    // res.push_back(activity.at(0).second);
    int task=1;
    int min=activity.at(0).second;
    for(int i=1 ; i<n ; i++)
    {
        if(activity.at(i).first>=min)
        {
            // res.push_back(activity.at(i).first);
            task++;
            min=activity.at(i).second;
        }
    }
    
    // for(int i=0 ; i<res.size() ; i++)
    // {
    //     cout<<res.at(i)<<"  ";
    // }
    cout<<task;
    return 0;
}