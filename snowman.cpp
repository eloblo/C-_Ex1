//#include <string>
#include <stdexcept>
using namespace std;

#include "snowman.hpp"
 namespace ariel {
     string snowman(long build){
         string sbuild = to_string(build);
         //check if the number matches the snowman build
         if(sbuild.size() != 8){
             throw invalid_argument("Invalid code \'" + sbuild + "\'");
         }
         string sman; //the snowman string
         char index;  //the current number of a body part
         for(int i = 0; i < 8; i++){
            index = sbuild[i];
             if(index > '4' || index < '1'){
                 throw invalid_argument("Invalid code \'" + sbuild + "\'");
             }
         }
         string head = head_tmp;
         //make a hat
         index = sbuild[0];
         sman = hat[index - '1'];
         //make a nose
         index = sbuild[1];
         head[3] = nose[index - '1'];
         //make eyes
         index = sbuild[2];
         head[2] = eyes[index - '1'];
         index = sbuild[3];
         head[4] = eyes[index - '1'];
         //make torso
         index = sbuild[6];
         string torso = body[index - '1'];
         //set left arm
         index = sbuild[4];
         if(index == '2'){  //check for the arm postion
             head[0] = '\\';
         }
         else{
             torso[0] = Larm[index - '1'];
         }
         //set right arm
         index = sbuild[5];
         if(index == '2'){    //check for the arm postion
             head[6] = '/';
         }
         else{
             torso[6] = Rarm[index - '1'];
         }
         //make a base
         index = sbuild[7];
         //connect the body parts
         sman = sman + head + torso + base[index - '1'];
         return sman;
     }
 }
