#include <stdio.h>
#include<string.h>
#include<stdlib.h>
//struture using dynamic mamory allocation

typedef struct mess{
    int age;
    float weight;
    char fvf[25];
};
int main() {
    struct mess *may;
   // m *mayukh = &may; 
    may = (struct mess*)malloc(sizeof(struct mess));
      may->age = 10;
    may->weight = 110.50;
    strcpy (may->fvf,"mutton");
    
    
    
    printf("age of mayukh is = %d\n",may->age);
    printf("weight of mayukh is = %f\n",may->weight);
    printf("food of mayukh is = %s",may->fvf);
    
   
    return 0;
}