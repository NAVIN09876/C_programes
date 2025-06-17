//Structure Pointer with Array of Structures
#include<stdio.h>
struct struct_pointer_arra_of_structure{
    int roll_NO;
    char Name[100];

};
int main(){
    struct struct_pointer_arra_of_structure student[2]={{1,"naveen"},{2,"ravi"}};

    struct struct_pointer_arra_of_structure *ptr= student;// it pointing to the first element of array
  for (int i = 0; i < 2; i++) {
        printf("roll_no: %d, Name: %s\n", (ptr + i)->roll_NO, (ptr + i)->Name);
    }


}