//
// Created by alexis on 1/10/15.
//

#include "Agent.hpp"

Agent::Agent(){

}

int Agent::getID() {
    return ID;
}

double Agent::getThreshold() {
    return threshold;
}

void Agent::setAgent(int &idAgente, double &thresholdAgent) {
    this->ID = idAgente;
    this->threshold = thresholdAgent;
}

Agent::Agent(int &idAgente, double &thresholdAgent) {
    this->ID = idAgente;
    this->threshold = thresholdAgent;
}
