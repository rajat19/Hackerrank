#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    map<string, string> db;   /*to create a map to store nested-tag-name-                                                       attribute same as in input queries as keys and                                                 respective values */
    vector <string> tagstack;  /*tagstack to keep track of the tags which are currently open*/
    
    cin.ignore();                //Ignores whitespaces
    
    
    //to process INPUT
    while(n-- > 0){
        string input;
        getline(cin,input);     //gets whole line of input as a string
        
        if(input[1] == '/'){    //to identify a closing tag
            /*We remove the tags from the stack of open tags as we encounter their closing                  tags. This helps in creating keys for nested tags.*/
            tagstack.pop_back();
            
        }else {                //else it's an opening tag
            regex tagR("<([a-zA-Z0-9]+)"); smatch tagM;         //RegEx to identify tags
            regex attR("\\s([a-zA-Z0-9_%.!$]+)\\s"); smatch attSM;   //RegEx to identify attributes
            regex valR("\"([a-zA-Z0-9_%.!$]+)\""); smatch valSM;      //RegEx to identify values
            
            //To store these values in smatch
            regex_search(input, tagM, tagR);
            
            tagstack.push_back(tagM[1]);    //Entering tagname finally in tag-stack
            
            vector <string> attM;
            string input1 = input;
            while (regex_search(input1, attSM, attR)) {
                attM.push_back(attSM.str(1));
                input1 = attSM.suffix();
            }
            
            vector <string> valM;
            string input2 = input;
            while (regex_search(input2, valSM, valR)) {
                valM.push_back(valSM.str(1));
                input2 = valSM.suffix();
            }
            
            
            string tagnested = "";
            for(int i = 0; i < tagstack.size(); i++){
                tagnested += tagstack[i] + ".";
            }
            tagnested.pop_back();           //to remove the extra '.'
            tagnested += "~";               //and add the '~'
            
            //to append attributes to tagnested string and add this into db alongwith value
            for(int i = 0; i < attM.size(); i++){
                db[tagnested + attM[i]] = valM[i];
            }
        }
        
    }
    
    
    //to process QUERIES
    while(q-- > 0){
        string quer;
        cin >> quer;
        if(db.find(quer) != db.end())
            cout << db[quer] << endl;
        else 
            cout << "Not Found!" << endl;
    }
    return 0;
}