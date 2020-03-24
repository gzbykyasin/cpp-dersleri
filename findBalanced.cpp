/*
 * @brief 
 *      you're given a string that contains opening and closing brackets.
 *      you need to parse through the string and determine if the brackets are balanced
 *      exampleBalance = "[[()[]{}[]())(]}{{()}][({";
 *  Created on: 24 Mar 2020
 *      Author: YASIN GOZUBUYUK
 */

#include <iostream>
#include <vector>
#include <map>

std::vector<char> findBalance = {'[',']','(',')','{','}'};
std::map<char,int> balanceCompare;
int  count_balance = 0;
std::string exampleBalance;

int main(int argc, char **argv)
{
    if (argc < 2)
        exampleBalance = "[[()[]{}[]())(]}{{()}][({";
    else
        exampleBalance = argv[1];

    std::cout << "Find Balance Training!\n"; 
    
    for (auto i : exampleBalance) {        
        if (i == findBalance[0]) {            
            balanceCompare[findBalance[0]]++;              
        }
        else if (i == findBalance[1]) { 
            if(balanceCompare[findBalance[0]])
                balanceCompare[findBalance[0]]--;
            else
                balanceCompare[i]--;            
        }
        else if (i == findBalance[2]) {            
            balanceCompare[findBalance[2]]++;            
        }
        else if (i == findBalance[3]) {       
            if (balanceCompare[findBalance[2]])
                balanceCompare[findBalance[2]]--;
            else
                balanceCompare[i]--;           
        }
        else if (i == findBalance[4]) {            
            balanceCompare[findBalance[4]]++;
           
        }
        else if (i == findBalance[5]) {                        
            if (balanceCompare[findBalance[4]])
                balanceCompare[findBalance[4]]--;
            else
                balanceCompare[i]--;           
        } 
    }
    
    for (auto i : balanceCompare) {
        if(i.second!=0){
            std::cout << i.first << ":\t" << i.second<<std::endl;
            count_balance++;
        }
    }

    if(count_balance<1)
        std::cout << "Example for Balanced" << std::endl;
    else
        std::cout << "Example for Not Balanced" << std::endl;

    return 0;
}
