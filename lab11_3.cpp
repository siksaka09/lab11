#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>


using namespace std;

int main(){
    int count = 0;
    float mean = 0;
    float standevi = 0;
    float sum;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        mean += atof(textline.c_str());
        standevi += pow(atof(textline.c_str()),2);
        count++;
    }

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    sum = mean/count;
    cout << "Mean = " << sum << "\n";
    cout << "Standard deviation = " << sqrt((standevi/count) - pow(sum,2));
    source.close();
    return 0;
}