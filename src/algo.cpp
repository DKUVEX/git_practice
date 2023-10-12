#include "../include/algo.hpp"

 /**
  * @brief           find the Greatest Common Divisor
  * @param[in]       a: one of the integer
  * @param[in]       b: one of the integer
  * @return          int
  * @retval          the result of gcd
  */
 int gcd(int a, int b);
 /**
  * @brief           find the Least Common Multiple
  * @param[in]       a: one of the integer
  * @param[in]       b: one of the integer
  * @return          int
  * @retval          the result of lcm
  */
 int lcmm(int a,int b);
 /**
  * @brief           find the Greatest Common Divisor
  * @param[in]       a: one of the integer
  * @param[in]       b: one of the integer
  * @return          int
  * @retval          the result of gcd
  */
 int gcd(int a, int b) {
     int r;
     while (a%b!=0)
     {
         r=a%b;
         a=b;
         b=r;    
     }
     return b; 
 }
  /**
  * @brief           find the Least Common Multiple
  * @param[in]       a: one of the integer
  * @param[in]       b: one of the integer
  * @return          int
  * @retval          the result of lcm
  */
 int lcmm(int a, int b)
 {
         return a/gcd(a,b)*b;
 }
 // code from "modify_algo"