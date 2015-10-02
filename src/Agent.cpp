//
// Created by alexis on 1/10/15.
//

#include "Agent.hpp"

Agent::Agent(){

}

int Agent::getID() {
    return id;
}

double Agent::getThreshold() {
    return threshold;
}

void Agent::setAgent(int &idAgent, double &thresholdAgent) {
    this->id = idAgent;
    this->threshold = thresholdAgent;
}

Agent::Agent(int &idAgente, double &thresholdAgent) {
    this->id = idAgente;
    this->threshold = thresholdAgent;
}
