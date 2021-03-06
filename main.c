// Author: Daniel Dean dpd@psu.edu
// Collaborator: Yash Patni  yjp5077@psu.edu
// Collaborator: Cameron Ezeiraku cke5142@psu.edu
// Collaborator: Stephanie Huang ssh5302@psu.edu
// Section: 2
// Breakout: 7
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char * gradeInput;
  gradeInput = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(gradeInput);
  if(grade >= 93.0){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if(grade >= 90.0){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if(grade >= 87.0){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if(grade >= 83.0){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if(grade >= 80.0){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if(grade >= 77.0){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if(grade >= 70.0){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if(grade >= 60){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
} 