#include<stdio.h>
#include<math.h>

int main(){
    float first_number, last_number, result;
    printf("Enter your two numbers: ");
    scanf("%f %f", &first_number, &last_number);

    int choice;
    printf("Enter your choice (1,2,3,4): ");
    scanf("%d", &choice);

    if (choice == 1){
        result = first_number + last_number;
        printf("Addition: %.2f\n", result);
    }
    else if (choice == 2){
        result = first_number - last_number;
        printf("Subtraction: %.2f\n", result);
    }
    else if (choice == 3){
        result = first_number * last_number;
        printf("Multiplication: %.2f\n", result);
    }
    else if (choice == 4){
        int c;
        printf("Enter your Case-(1,2): ");
        scanf("%d", &c);

        if (c == 1){
            result = first_number / last_number;
            if(result<0){
                result = -result;
            }
            printf("Quotient: %.2f\n", floor(result));
        }
        else if (c == 2){
            int remainder;
            remainder = (int)first_number % (int)last_number;
            printf("Reminder: %d\n", remainder);
        }
        else{
            printf("Wrong Input!\n");
        }
    }

    return 0;
}
