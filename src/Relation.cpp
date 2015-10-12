//
// Created by alexis on 6/10/15.
//

#include "Relation.hpp"

// Empty Constructor
Relation::Relation(){

}

int Relation::getListAgentId(vector<int> &lista) {

    return 0;
}

int Relation::getRandomAgent(int idNodeAgent) {
    // Seed to random numbers
    srand((unsigned)time(NULL));
    // Id Random Number
    int randomAgent = (rand() % (int) (this->numberOfAgents));

}

Relation::Relation(int numberOfAgent) {

    this->numberOfAgents = numberOfAgent;

    for (int i = 0; i < numberOfAgent; i++) {
        this->listAgentId.at(i) = i;
    }
}




//