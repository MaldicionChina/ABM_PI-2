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

    // Seed to random numbers
    srand((unsigned)time(NULL));

    // Loop/For to initialize Agent's properties
    for (int i = 0; i < totalPopulation; i++) {

        idAgent = i;
        // Random Agent's Threshold
        agentThreshold = ((double)rand()/(double)RAND_MAX);
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

int Population::starSimulation(int timeSimulation, double maxThreshold){

    this->thresholdToBuy = maxThreshold;
    srand((unsigned)time(NULL));

    // Loop for time
    for(int time = 0; time < timeSimulation; time++) {
        // Loop for evaluate every agent
        cout << "Iteration #: " << time << endl;
        for (int i = 0; i < this->totalPopulation; i++) {
            Agent *testAgent = &listOfAgent.at(i);

                /*First, if Agent threshold is less than global threshold, Agent buys
                 if not, then Agent will question random agent
                 */
            if(!testAgent->getBuyState()) {
                if (testAgent->getThreshold() < thresholdToBuy) {
                    // Change Agent's buy state to TRUE
                    testAgent->setBuyState(true);
                    cout << "   Agent #: " << i << " Bought without ask" << endl;
                } else {

                    //Chose a random Agent
                    int randomAgent = (rand() % (int) (this->totalPopulation));
                    // Get a random Agent
                    Agent *toAskAgent = &listOfAgent.at(randomAgent);

                    // After Agent ask, It will take a desicion based on Random Agent's threshold
                    if (toAskAgent->getThreshold() < thresholdToBuy) {
                        // Change Agent's buy state to TRUE
                        testAgent->setBuyState(true);
                        cout << "   Agent #: " << i << " Bought asking to Agent " << randomAgent << endl;
                    }
                }
            }


        }
    }
}