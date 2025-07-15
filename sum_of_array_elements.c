/*Calculate the sum of all elements in an array*/
#include <stdio.h>
int sum_of_array(int arr[],int size){
    int sum=0;
    for(int i = 0; i < size; i++) {
        sum+=arr[i];
    }
    printf("sum of array : %d\n",sum);


}
int main() {
    int name[5];
    int size = sizeof(name)/sizeof(name[0]);
     // same for all data types
    for(int i = 0; i < 5; i++) {
        scanf("%d", &name[i]); 
    }
    sum_of_array(name,size);

   
    return 0;
}
