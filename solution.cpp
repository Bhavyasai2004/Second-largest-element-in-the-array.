#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    auto it = unique(arr.begin(),arr.end());
    arr.resize(distance(arr.begin(),it));
    if(arr.size()>=2)
    return arr[arr.size()-2];
    else
    return -1;
}
