void main(){
    int number = 15;

    // if statement
    if(number > 10){
        print("Number $number is greater than 10");
    }

    // if else statement
    if(number%2 == 0){
        print("Number $number is even");
    }
    else{
        print("Number $number is odd");
    }

    // if else-if else statement
    if(number < 0){
        print("Number $number is negative");
    }
    else if(number == 0){
        print("Number $number is zero");
    }
    else{
        print("Number $number is positive");
    }
}