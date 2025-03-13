void main(){
    List fruits = ["Apple", "Cherry", "Mango"];
    List vegetables = ["Carrots", "Potato", "Beetroot"];

    List food = [...fruits, ...vegetables];
    print(food);

    List? empty;
    List combined = [...?empty, 10, 20];
    print(combined);
}