#include "../include/algo.hpp"
/**
 * @brief           find the Least Common Multiple
 * @param[in]       a: one of the integer
 * @param[in]       b: one of the integer
 * @return          int
 * @retval          the result of lcm
 */
int lcm(int a,int b);

/**
 * @brief           find the Least Common Multiple
 * @param[in]       a: one of the integer
 * @param[in]       b: one of the integer
 * @return          int
 * @retval          the result of lcm
 */
int lcm(int a, int b)
{
        return a/gcd(a,b)*b;
}
#include <iostream>
using namespace std;
int main() {
    cout << "Hello World!";
    return 0;
}