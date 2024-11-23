#include<iostream>
using namespace std;

float addition(float a, float b, float c,float d, float e){
    float result=(a+((b*c)*d))/e;
    return result;
}
int main(){

cout<<addition(50,10,10,3,4);


    return 0;
}