#include <stdio.h>

int main (void) {
    /*
    int num;
    num = 5;
    char name[] = "MasterCraft";
    char adrress[] = "here sstreet";
    char phone[] = "123456789";
    printf("%s \n", name);
    printf("%s \n", adrress);
    printf("%s \n", phone);
    */

    // int index = 0;
    /*
    while (index < 10) {
        printf("%d: ", index + 1);
        printf("%s \n", name);
        index = index + 1;
    }
   do {
       printf("%d: ", index + 1);
       printf("%s \n", name);
       index++;
   } while (index < 10);
   
    for (int index = 0; index < 10; index++) {
        printf("%d: ", index + 1);
        printf("%s \n", name);
    }
    

    for (int count = 1; count <= 10; count++) {
        printf("Count: %d;\n", count);
        if (count == 3) {
            printf("Hey I just met with 3\n");
        } 
        if (count == 7) {
            printf("Now I've met with 7\n");
        }
    }

    int array_length = 12;
    int container[array_length];
    for (int index = 0; index < 12; index++) {
        container[index] = (index == 0) ? 1 : container[index - 1] + 3;
    }

    for (int index = 0; index < 12; index++) {
        printf("CONTAINER[%d]: %d\n", index, container[index]);
    }
    */
    
    // char location[6] = {'N', 'O', 'R', 'T', 'H', '\0'};
    // printf("Result: %s", location);
    int data;
    for (data = 0; data < 10; data++)
    {
        if (data == 2)
        printf("Data is now equal to %d\n",data);
        if (data < 5)
        printf("Data is now %d, which is less than 5\n",data);
        else
        printf("Data is now %d, which is greater than 4\n",data);
    }
    
    return 0;
}
