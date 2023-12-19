#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int count =0;
    float sum =0;
    float sumdeviation =0;
    float mean,deviation;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        sum +=atof(textline.c_str()); 
        sumdeviation += pow(atof(textline.c_str()),2.0);
        count++;
    
    }
    mean = (1.0/count)*sum;
    deviation = sqrt(((1.0/count)*sumdeviation)-pow(mean,2.0));

    cout << "Number of data = " << count;
    cout << setprecision(3);
    cout << "\nMean = " << mean;
    cout << "\nStandard deviation = " << deviation;
}