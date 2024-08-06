#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    ifstream input("input.txt");
    ofstream output("output.txt");
    
    int n, dc;
    input >> n >> dc;

    int mssv[n], diem[n];
    string ten[n], quequan[n];
    
    int count; 

    for (int i = 0; i < n; i++) {
        input >> mssv[i] >> diem[i] >> ten[i] >> quequan[i];
        if (diem[i] >= dc) {
            count++;
        }
    }

    output << "Tong so thi sinh trung tuyen: " << count << endl;

    for (int i = 0; i < n; i++) {
        if(diem[i]>= dc){
        output << mssv[i] << " " << diem[i] << " " << ten[i] <<" " << quequan[i] << endl;
    }
    }
    
    input.close(); 
	output.close();
    return 0;
}