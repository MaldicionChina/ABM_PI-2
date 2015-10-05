//
// Created by alexis on 4/10/15.
//

#include <vector>
#include "Agent.hpp"
#include <random>

using namespace std;

#ifndef ABM_WALL_E_POPULATION_H
#define ABM_WALL_E_POPULATION_H

class Population{
public:
    Population(); // Empty Constructor
    int createPopulation(int population); // Create Agent's population
    int getPopulation(vector<Agent> &totalAgents); // Get whole Agent's population
    int starSimulation(int timeSimulation, double threshold); // Start Agent's Simulation
//    int questionTo(int idAgent);
//    double averageThreshold();
private:
    int totalPopulation;
    vector<Agent> listOfAgent;
    double averageAgentThreshold;
    double thresholdToBuy;
    int totalBuy = 0;
};

#endif //ABM_WALL_E_POPULATION_H
