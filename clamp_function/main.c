#include <stdio.h>
/**



 */

int clamp(int val, int low, int high){
    int result = 0;
    if (val <= low)
        result = low;
    else if(val > low && val < high)
        result = val;
    else if(val >= high)
        result = high;

    return result;
}

int main() {

    int low, high;
    int val;
    printf("Please enter a integer : \n");
    scanf("%d",&val);

    printf("Please enter a value range : \n");
    scanf("%d%d", &low, &high);

    printf("Your value is %d and your range is %d-%d\n", val, low, high);
    printf("Clamp value result is %d for %d", clamp(val, low, high), val);





    return 0;
}
