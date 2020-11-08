/* LINK
 https://leetcode.com/contest/weekly-contest-214/problems/minimum-deletions-to-make-character-frequencies-unique/
*/

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<cstring>

using namespace std;
int UniqueFreq(string s){
	std::map<char, int> map;
	for(int i=0;i<s.length();i++){map[s[i]]++;}
	int l=map.size();	
	int freq[l];
	int j=0;
	for(auto itr=map.begin();itr!=map.end();itr++){freq[j]=itr->second;j++;}
	sort(freq,freq+l,greater<int>());
    int count=0;
	for(int i=1;i<l;i++){
		if(freq[i-1]==freq[i]){
			count++;
			freq[i]--;
		}else if(freq[i-1]<freq[i]){
			if(freq[i-1]==0){
				count+=freq[i];
				freq[i]=0;
				continue;
			}
				count+=(freq[i]-freq[i-1]+1);
				freq[i]=freq[i-1]-1;
		}
	}
	return count;		
}

int main(){
	string s;
	cin>>s;
	cout<<UniqueFreq(s);
	return 0;
}