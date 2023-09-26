#include <stdio.h>
#include <string.h>
struct intro
{
    int id;
    char section[20];
    int marks;


};
int main(){
    struct intro ravi;
    ravi.id = 2212973;
    strcpy(ravi.section, "New_Group_2");
    ravi.marks = 90;
    printf("%s", ravi.section); 

}