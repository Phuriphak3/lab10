#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;


int main()

{
    
        double mean;
        int count = 0;
        float sum = 0;
        float sum_of_square = 0;
        string textline;
        ifstream source("score.txt");

        while (getline(source,textline))
            
        {
                sum += stof(textline.c_str());
                count++;
        }
        
            mean = sum/count;
        
        source.close();
        
        
        source.open("score.txt");
        
        while (getline(source,textline))
        {
        
        sum_of_square += (pow(atof(textline.c_str())-mean,2))/float(count);
            
        }

         source.close();

        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        cout << "Mean = " << mean << "\n";
        cout << "Standard deviation = " <<  sqrt(sum_of_square) ; 

}