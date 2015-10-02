#include <iostream>
#include <vector>
#include "Agent.hpp"

using namespace std;

int main() {

    int poblacion = 5;
    vector<Agent> *agentes = new vector<Agent>();
    int idAgent;
    double thresholdAgent;

    cout << "Hello, World!" << endl;

    for (int i = 0; i < poblacion ; i++) {
        idAgent = i;
        thresholdAgent = 0.1*i;
        Agent agenteNuevo(idAgent,thresholdAgent);
        agentes->push_back(agenteNuevo);
        cout << idAgent << "----" << thresholdAgent << endl;
    }

    int id = 5;
    double threshold = 4.5;
    for (int i = 0; i < poblacion ; i++) {
        Agent leer = agentes->at(i);
        cout << "Agent Id:  "<< leer.getID() <<" Threshold: " << leer.getThreshold() << endl;
    }

    return 0;
}