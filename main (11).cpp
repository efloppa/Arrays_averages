#include <iostream>

using namespace std;

int main(){

int numbers [5] = {78,70,69,73,100};
int sum = 0;
  
for (int i=0; i<5; i++){
  sum += numbers[i];
  
}
int average = sum/5;
cout << "Average of your test scores: : " << average << endl;

if (average >= 90){

  cout << "Good job! Your average is an A!" << endl;
  
}

if (average <= 90){

  cout << "Your average isn't an A :(";
  
}

  
  return 0;
}