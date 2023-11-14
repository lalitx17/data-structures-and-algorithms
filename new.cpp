#include <iostream>

using namespace std;


int longRep(string text){
     int longestRepetition = 1;
     int currentLongest = 1;
     char oldChar = text[0];
    for (int i = 1; i < text.length(); i++){
     if (text[i] == oldChar){
      currentLongest += 1;
     }else{
      currentLongest = 1;
      oldChar = text[i];
     }
     if (currentLongest > longestRepetition){
       longestRepetition = currentLongest;
     }
    }
    return longestRepetition;
}

int main(){
    string text;
    getline(cin,text);
    cout << longRep(text);

    return 0;
}