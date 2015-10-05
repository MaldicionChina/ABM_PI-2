//
// Created by alexis on 1/10/15.
//

#include "Agent.hpp"

// Empty Constructor
Agent::Agent(){

}
bool Agent::getBuyState() {
    return this->buy;
}

void Agent::setBuyState(bool newState) {
    this->buy = newState;
}
//Get agent's id
int Agent::getID() {
    return id;
}

//Get agent's threshold
double Agent::getThreshold() {
    return threshold;
}

// Set agent's properties
void Agent::setAgent(int &idAgent, double &thresholdAgent) {
    this->id = idAgent;
    this->threshold = thresholdAgent;
}

// Constructor with parameters
Agent::Agent(int &idAgente, double &thresholdAgent) {
    this->id = idAgente;
    this->threshold = thresholdAgent;
}
