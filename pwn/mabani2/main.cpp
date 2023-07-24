#include <iostream>
#include <string>

using namespace std;

struct timeValuePair{
    float time;
    float dataValue;
};

void getDerivative(struct timeValuePair a,struct timeValuePair b, int size)
{

}

int main()
{
    int tSize= 10;
    struct timeValuePair xt[tSize];
    struct timeValuePair vt[tSize]={{0.0,0.0}};
    float timeStep = 0.1;
    float velocityThreshold = 4.0;

    xt[0].time = 0.0;
    xt[0].dataValue = 0.0;
    for(int i = 1; i < tSize ; i++)
    {
        xt[i].time = xt[i-1].time + timeStep;
        xt[i].dataValue = 5.0*xt[i].time*xt[i].time;

    }
    getDerivative(xt, vt , tSize);
    return 0;
}
