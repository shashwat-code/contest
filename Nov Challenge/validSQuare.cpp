#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<cstring>
#include<math.h>
using namespace std;
int distance(std::vector<int> v1,std::vector<int> v2){
	return pow((v1[1]-v2[1]),2)+pow((v1[0]-v2[10]),2);
}

bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4){
	set<int> connect;
	connect.insert(distance(p1,p2));
	connect.insert(distance(p1,p3));
	connect.insert(distance(p1,p4));
	connect.insert(distance(p2,p3));
	connect.insert(distance(p2,p4));
	connect.insert(distance(p3,p4));
	const bool is_in = connect.find(0) != connect.end();
	if(connect.size()==2 && is_in){return true;}else return false;
	
}
int main(){

	return 0;
}