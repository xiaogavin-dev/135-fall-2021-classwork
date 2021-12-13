1.1: Declare a class Doctor, subclass of Person and inherits 
    class Doctor : public Person {};
1.2: Declare a vector of strings called greetings, init with "Hello", "Hi", "Morning".
    std::vector<std::string> greetings("Hello", "Hi", "Morning");
1.3: Suppose int arr[] = { 2, 3, 4 }; what is *(arr + 2)?
    4
1.4: Write the header of a function, for two given strings, return their total number of characters 
    int total_chars(std::string s1, std::string s2) {}
1.5: What is the possible values for rand() % 5 - 1?
    -1 to 3 inclusive 
1.6: Declare a struct called Window, has three parts, length and width as integers, and style as a string 
    struct Window { 
        int length;
        int width;
        std::string style; 
    };
1.7: What is output for the following code?
int ticket(int age) {
    int price;
    if (age >= 65)
       price = 2;
    else if (age >= 18)
        price = 5;
    else if (age >= 12)
        price = 3;
    else if (age >= 5)
        price = 2;
    else price = 0;
    
    return price;
}

int main() {
    int total = 0;
    int ages[] = {5, 20, 65};
    int size = sizeof(ages) / sizeof(ages[0]);
    for (int i = 0; i < size; i++)
        total += ticket(ages[i]);
    cout << "total = " << total << endl;

    return 0;
}

total = 2
total = 7
total = 9
1.8: Read the following code. What is the output?
class Computer {
    private:
        static int num_computers;
    public:   
        Computer() {     
            num_computers++;
        }

        ~Computer() {     
            num_computers--;
        }

        static int get_num_computers() {
            return num_computers;
        }
};

int Computer::num_computers = 0;

int main()
{   
    Computer* first = new Computer;
    delete first;
    first = nullptr;

    Computer* second = new Computer;
    cout << Computer::get_num_computers();
    delete second;
    second = nullptr;
    return 0;
}

0
1.9: Declare and initialize a two-dimensional int array called arr with the first row 1, 2, 3, the second row 4, 5, 6, and the third row 7, 8, 9.
    int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
1.10: What is the output for the following code?
for (int i = 1; i <= 3; i++)
    for (int j = 1; j <= i; j++)
        cout << i - j << endl;

0
1
0
2
1
0
2.1: Declare an int variable called it size and initialize it to be 100. Create a one-dimensional dynamic allocated memory array, call it data, of ints whose capacity is size.
    int size = 100; 
    int *data = new int[size];

2.1: Set each element of data to be a random int in [-15, 90].
    for(int i = 0; i < size; i++) { 
        data[i] = rand() % (90 + 15 + 1) - 15
    }
2.1: Write code to find out the minimum of data.
    int min = INT_MAX;
    for(int i = 0; i < size; i++) { 
        if(data[i] < min) { 
            min = data[i];
        }
    }
    std::cout << "min = " << min << std::endl;
2.1: Delete dynamically allocated memory data and handle dangling pointer problem.
    delete[] data; 
    data = nullptr; 
2.2: Define a recursive function that takes a string, return its reversed version. For example, if the input is “abc”, the return is “cba”.
Define function header. Suppose the function name is reverse, the given parameter is called str.
    std::string reverse(std::string str) {}
2.2: If str has at most one char, return str. You can use size() function from string class.
    if(str.length() == 1) { 
        return str;
    }
2.2: Now str has more than one char. Write a code to reverse the string using based on reversed substring. Return the result.
    return str[str.length() - 1] + reverse(str.substr(0, str.length() - 1));
2.2: In main function, print the reverse string of “Hello”. You should apply reverse function.
    std::cout << reverse("Hello") << std::endl;
2.3: Define a function foo, for a given array arr of ints and its size, return type is empty.
Define the function header.
    void foo(int *arr, int size) {}
2.3: For each adjacent pair arr[i] and arr[i+1] in arr, where 0 <= i < size-1, swap arr[i] with arr[i+1] when arr[i+1] < arr[i]. Write a code.
    for(int i = 0; i < size - 1; i++) { 
        if(arr[i + 1] < arr[i]) { 
            int temp = arr[i]; 
            arr[i] = arr[i + 1]; 
            arr[i + 1] = temp; 
        }
    }

2.3: After apply foo on array [2, 1, 6, 3], what does array looks like?
    [1, 2, 3, 6]

