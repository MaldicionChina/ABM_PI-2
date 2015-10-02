#include <iostream>
#include <vector>
#include "Agent.hpp"

using namespace std;

int main() {

    int population = 5;
    vector<Agent> *agents = new vector<Agent>(); // Agent's Vectors
    int idAgent; // Agetn's Id
    double thresholdAgent; // Agent's threshold, between 0.0 to 1.0

    for (int i = 0; i < population; i++) {
        idAgent = i;
        thresholdAgent = 0.1*i;
        // New Agent creation
        Agent newAgent(idAgent,thresholdAgent);
        // Set a new agent into a vector 'agents'
        agents->push_back(newAgent);
        cout << idAgent << "----" << thresholdAgent << endl;
    }

    int id = 5;
    double threshold = 4.5;
    for (int i = 0; i < population; i++) {
        // Get Agents in position 'i'
        Agent readAgent = agents->at(i);
        cout << "Agent Id:  "<< readAgent.getID() <<" Threshold: " << readAgent.getThreshold() << endl;
    }

    return 0;
}