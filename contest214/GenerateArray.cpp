/*
LINK  
https://leetcode.com/contest/weekly-contest-214/problems/get-maximum-in-generated-array/
*/

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<cstring>
//#include<bits/stdc++.h>
using namespace std;
 int getMaximumGenerated(int n){
 	if(n==0) return 0;
 	int num[n+1];
 	num[0]=0;
 	num[1]=1;
 	int m=1;
 	for(int i=2;i<=n;i++){
 		if(i%2==0)num[i]=num[i/2];
 		else num[i]=num[i/2]+num[(i/2)+1];
 		m=max(m,num[i]);
 	}
 	return m;

 }
int main(){
	int n;cin>>n;
	cout<<getMaximumGenerated(n);
	return 0;
}