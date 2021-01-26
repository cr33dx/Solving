#include <iostream>
#include <cmath>
using namespace std;

int main(){
	unsigned int t;
	cin >> t;
	while(t--){
		unsigned long long int a, b;
		cin >> a >> b;
		unsigned long long int n = b - a;
		bool *ptr = new bool [b-a];
		ptr[0] = 1;
		ptr[1] = 1;
		unsigned int counter = 0;
		for (unsigned int i = 2; i <= ceil(sqrt(b)); i++){
			if( ptr[i] != 1){
				counter = 0;
				for (int j = i * i; j <= b; j = i * i + counter * i){	
					ptr[j] = 1;
					counter++;	
				}
			}
		}
		for (int i = a; i <= b; i++){
			if (ptr[i] == 0){
				cout << i << "\n";
			}
		}
	}
}
