void main(){
    String? name;

    print(name ?? "Guest"); // ?? - Provide default value if null

    name ??= "John"; // ??= - Assign only if null
    print(name);

    print(name?.length); // Safe Access if variable is null

    print(name!.length); // Force non null.... Throws error if null
}