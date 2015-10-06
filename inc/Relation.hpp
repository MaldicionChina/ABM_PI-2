//
// Created by alexis on 6/10/15.
//

#include <vector>

using namespace std;

#ifndef ABM_WALL_E_RELATION_HPP
#define ABM_WALL_E_RELATION_HPP

class Relation{
public:
    Relation();
    int getListAgentId(vector<int> &lista);
private:
    vector<int> listAgentId;
};

#endif //ABM_WALL_E_RELATION_HPP
