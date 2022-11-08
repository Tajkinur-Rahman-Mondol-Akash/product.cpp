#include <iostream>
#include <string>
using namespace std;

class product {
public:
    string name;
    int id;
    string category;
    float price;
};

int main()
{
    int i, j;
    product temp;
    product arr[5];

    arr[0].name = "IPhone";
    arr[0].id = 1001;
    arr[0].category = "Electronics";
    arr[0].price = 56000;

    arr[1].name = "Biscuits";
    arr[1].id = 1002;
    arr[1].category = "Food";
    arr[1].price = 56;

    arr[2].name = "Laptop";
    arr[2].id = 1003;
    arr[2].category = "Electronics";
    arr[2].price = 56000;

    arr[3].name = "Soap";
    arr[3].id = 1004;
    arr[3].category = "Grocery";
    arr[3].price = 30;

    arr[4].name = "Shoes";
    arr[4].id = 1005;
    arr[4].category = "Clothing";
    arr[4].price = 3000;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (arr[j].price > arr[j + 1].price) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted list of products (in ascending order of price) : " << endl;
    for (i = 0; i < 5; i++) {
        cout << "(" << arr[i].name << ", " << arr[i].id << ", " << arr[i].category << ", " << arr[i].price << ")" << endl;
    }

    return 0;
}
