#include <iostream>
#include <vector>
#include <cstdio>

void print(std::vector<double>& A) {
        for (int i=0; i< (int) A.size(); i++) {
                std::cout<<" "<<A[i];
        }
        std::cout<<std::endl;
}

double min(double a, double b){
        if (a>b){return b;} else {return a;}
}
double max(double a, double b){
        if (a>b){return a;} else {return b;}
}

double proportion(double location, std::vector<double> X, std::vector<double> Y, std::vector<double> Z, std::vector<double> W){
        double prop;
        double wallgrid=20000;
        std::vector<double> wall;
        for (double i=0; i<wallgrid; i++){
                wall.push_back(i/(wallgrid-1));
        }
        std::vector<double> light (20000,1);
        int nWalls=X.size();
        for (int i=0; i<nWalls; i++){
                double shadowone=(Y[i]-location)/X[i]+location;
                double shadowtwo=(W[i]-location)/Z[i]+location;
                if (shadowone>shadowtwo){
                        double up= min(shadowone,1);
                        double low=max(shadowtwo,0);
                        for (unsigned int i=0;i<wall.size();i++){
                                if (wall[i]>=low && wall[i]<=up){
                                        light[i]=0;
                                }
                        }
                }
                else if (shadowone<shadowtwo){
                        double up=min(shadowtwo,1);
                        double low=max(shadowone,0);
                        for (unsigned int i=0;i<wall.size();i++){
                                if (wall[i]>=low && wall[i]<=up){
                                        light[i]=0;
                                }
                        }
                }
        }
        for (unsigned int i=0; i<wall.size();i++){
                prop += light[i]/20000;
        }
        return prop;
