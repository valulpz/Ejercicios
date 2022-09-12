#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> nums;
	nums.push_back(53);
	nums.push_back(47);
	nums.push_back(85);
	nums.push_back(92);
	
	int i=0;
	while (i< nums.size()){
		cout<< nums[i] << endl;
		i++;
	}
}
