//
// Created by alexis on 4/10/15.
//

#include "Population.hpp"
#include <iostream>

using namespace std;

// Empty Constructor
Population::Population() {
}

// Create Agent's Population
int Population::createPopulation(int population) {

    this->totalPopulation = population;
    Agent newAgent;
    int idAgent = 0;
    double agentThreshold = 0.0;

    // Loop/For to initialize Agent's properties
    for (int i = 0; i < totalPopulation; i++) {

        idAgent = i;
        agentThreshold = 0.1*i;
        // Set Agent Properties
        newAgent.setAgent(idAgent,agentThreshold);
        // Set a new agent into a vector 'agents'
        this->listOfAgent.push_back(newAgent);

    }

    return 0;
}

int Population::getPopulation(vector<Agent> &totalAgents) {
    totalAgents = this->listOfAgent;
}

int Population::starSimulation(){

}