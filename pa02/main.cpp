#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argv, char** argc){
  if(argv < 3){
    cout << "Please provide 2 file names" << endl;
    return 1;
  }
  
  ifstream cardFile1 (argc[1]);
  ifstream cardFile2 (argc[2]);
  
  string line;
  if (cardFile1.is_open()){
    while (getline (cardFile1, line)){
     //FILL THIS IN
    }
    cardFile1.close();
  }
  else{
    cout << "Could not open file " << argc[1];
    return 1;
  }

  if (cardFile2.is_open()){
    while (getline (cardFile2, line)){
      //FILL THIS IN
    }
    cardFile2.close();
  }
  else{
    cout << "Could not open file " << argc[2];
    return 1;
  }
}