
#ifndef CSC_275_TEST1_KENO_KENONUMBERS_H
#define CSC_275_TEST1_KENO_KENONUMBERS_H
#include <vector>

class KenoNumbers {
private:
   //encapsulation
   std::vector<int> m_numbers;
public:
   //abstraction.
   void generateNumbers();
   std::vector<int> getKenoNumbers();
   void printKenoNumbers();
   void clearKenoNumbers();
};


#endif //CSC_275_TEST1_KENO_KENONUMBERS_H
