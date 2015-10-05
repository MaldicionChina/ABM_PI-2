#include <iostream>
#include <vector>
#include "Agent.hpp"
#include "Population.hpp"

using namespace std;

int main() {

    int population = 5;
    vector<Agent> *agents = new vector<Agent>(); // Agent's Vectors
    int idAgent; // Agetn's Id
    double thresholdAgent; // Agent's threshold, between 0.0 to 1.0
    Population *allPopulation = new Population();

    allPopulation->createPopulation(population);
    allPopulation->getPopulation(*agents);

    for (int i = 0; i < population; i++) {
        // Get Agents in position 'i'
        Agent readAgent = agents->at(i);
        cout << "Agent Id:  "<< readAgent.getID() <<" Threshold: " << readAgent.getThreshold() << endl;
    }

    return 0;
}