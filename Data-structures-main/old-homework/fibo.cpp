#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");

    int n;
    input>>n;
    int array[n];
    for(int i = 0; i < n; i++){
        input>>array[i];
    }
    for(int i = 0; i < n; i++){
        output<<array[i]<<" ";
    }
    input.close(); 
	output.close();
    return 0;
}
