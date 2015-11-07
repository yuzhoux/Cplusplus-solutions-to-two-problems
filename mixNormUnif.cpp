#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#define TINY 1e-10

static double dnorm(double x, int mu, int sigma) {
        return 1.0 / (sigma * sqrt(M_PI * 2.0))
                        * exp(-0.5 * (x - mu) * (x - mu) / sigma / sigma);
}

int find(double min, double max,std::vector<double> data ){
        int n=data.size();
        double probMax = INT_MIN;
        int mu;
        for (int i=min;i<=max;i++){
                double prob=0;
                for (int j=0; j<n;j++){
                        if (data[j]>i-3 && data[j]<i+3){
                                double input=data[j];
                                prob+=dnorm(input, i, 1);
                        }
                }
                if (prob>probMax){
                        probMax=prob;
                        mu=i;
                }
        }
        std::cout<<mu<<std::endl;
        return 1;
}


int main() {
        double input;
        std::vector<double> data;
        while (std::cin>>input)
                data.push_back(input);
        double min = INT_MAX;
        double max = INT_MIN;
        for (int i = 0; i < data.size(); ++i) {
                if (data[i]<min){min=data[i];}
                if (data[i]>max){max=data[i];}
        }
        min=floor(min);
        max=ceil(max);
        find(min, max, data);
}
