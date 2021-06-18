#include <string>
#include <vector>
#include "../lex/aLex.h"

struct createStmt
{
    std::string stmt;
    
    createStmt(std::string query){
        stmt = query;
        std::pair<std::vector<int>, std::vector<std::string>> par = lex(query);
        std::vector<int> tokVec = par.first; 
        std::vector<std::string> strVec = par.second; 
        int sz = tokVec.size();
        if(tokVec[0]!=CREATETABLE){
            std::cout<<"ERROR: Not a CREATE TABLE statement!"<<std::endl;
        }
        if(tokVec[sz-1]!=SEMICOLON){
            std::cout<<"ERROR: Needs a ; at the end!"<<std::endl;
        }
        for(int i = 1; i<sz-1; i++){
            switch(tokVec[i]){
                case STRINGNOQUOTES:
                    //name = strVec[i];
                    break;
            }
            
        }
    }
};