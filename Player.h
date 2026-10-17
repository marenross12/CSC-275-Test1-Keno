#ifndef CSC_275_TEST1_KENO_PLAYER_H
#define CSC_275_TEST1_KENO_PLAYER_H
#include <vector>

class Player {
private:
    //encapsulation. Cannot interact with variable directly. Must use public methods.
    std::vector <int> m_playerNumbers;
public:
//abstraction. Provides information on what an object does but not HOW it does it. Hides details of implementation.
    void inputPlayerNumbers();
    std::vector <int> getPlayerNumbers();
    void printPlayerNumbers();
    void clearPlayerNumbers();

};


#endif //CSC_275_TEST1_KENO_PLAYER_H
