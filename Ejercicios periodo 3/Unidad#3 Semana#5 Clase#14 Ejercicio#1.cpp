#include <iostream>
using namespace std;

int main(){
	int n = 5;
	int i = 1;
	while(i<=5){
		int j = 1;
		while (j <= i){
			cout << j << " ";
			j++;
		}
		cout << "\n";
		i++;
	}
}
