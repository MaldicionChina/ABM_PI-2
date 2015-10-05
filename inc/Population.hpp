//
// Created by alexis on 4/10/15.
//

#include <vector>
#include "Agent.hpp"

using namespace std;

#ifndef ABM_WALL_E_POPULATION_H
#define ABM_WALL_E_POPULATION_H

class Population{
public:
    Population(); // Empty Constructor
    int createPopulation(int population); // Create Agent's population
    int getPopulation(vector<Agent> &totalAgents); // Get whole Agent's population
    int starSimulation(); // Start Agent's Simulation
private:
    int totalPopulation;
    vector<Agent> listOfAgent;
};

#endif //ABM_WALL_E_POPULATION_H
