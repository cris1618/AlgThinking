#include <stdio.h>






// Create a simple function to find identical integers in an array
void identify_identical(int values[], int n){
  int i, j;

  for(i = 0; i<n; ++i){
    for(j = i + 1; i<n; ++i){
      if(values[i] == values[j]){
        printf("Twin integers found.\n");
        return;
      }

    }

  }
  printf("No Twin Integers are alike.\n");

}


int main(){
  int a[5] = {1, 2, 3, 1, 5};
  identify_identical(a, 5);
  return 0;


}
