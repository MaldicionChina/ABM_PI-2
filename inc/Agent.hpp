//
// Created by alexis on 1/10/15.
//

// Fuzzy Logic's Library
#include "fl/Headers.h"

#ifndef ABM_WALL_E_AGENT_H
#define ABM_WALL_E_AGENT_H

class Agent{
private:
    int id; // Agent's Unique Id
    double threshold;
    bool buy = false;
public:
    Agent(); // Empty Constructor
    Agent(int &idAgente, double &thresholdAgent); // Constructor with parameters

    int getID(); // Get Agent's Id
    double getThreshold(); // Get Agent's threshold

    bool getBuyState();
    void setBuyState(bool newState);

    void setAgent(int &idAgente, double &thresholdAgent ); // Set Agent's properties


};

#endif //ABM_WALL_E_AGENT_H
