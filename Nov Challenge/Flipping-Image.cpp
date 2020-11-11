#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<cstring>
//#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > flipAndInvertImage(vector<vector<int> >& A){
	std::vector<std::vector<int> > v1;

	for(auto itr=A.begin();itr!=A.end();itr++){
		std::vector<int> v=*itr;
		std::vector<int> push;
		for(auto inner =v.rbegin();inner!=v.rend();inner++){
			if(*inner==1){
				push.push_back(0);
			}else{push.push_back(1);}
		}
		v1.push_back(push);
	}
	return v1;
}


int main(){

	return 0;
}