//
// Created by alexis on 6/10/15.
//

#include <vector>
#include <random>

using namespace std;

#ifndef ABM_WALL_E_RELATION_HPP
#define ABM_WALL_E_RELATION_HPP

class Relation{
public:
    Relation();
    Relation(int numberOfAgent);
    int getListAgentId(vector<int> &lista);
    int getRandomAgent(int idNodeAgent); // Get a random agent according to agent's id node
private:
    vector<int> listAgentId;
    int numberOfAgents;
};

#endif //ABM_WALL_E_RELATION_HPP
