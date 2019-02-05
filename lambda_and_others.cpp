#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;
using std::find_if;

void ShowVect (vector<int> &Vect){

    for (vector<int>::iterator it=Vect.begin(); it!=Vect.end(); ++it){
        cout<< "Element: "<< *it << endl;
    }
}

auto main (int argc, char *argv[])->int{

vector<int> Vect = {3,6,1,3,9,3,4,4,4,2,11};


Vect.push_back(4);
cout << "Size of vector: " << Vect.size() << endl;

vector<int> Vect_copy = Vect;
cout << "Unsorted vector\n";
ShowVect(Vect_copy);

sort(Vect_copy.begin(), Vect_copy.end());
cout << "Sorted vector\n";
ShowVect(Vect_copy);

Vect_copy.insert(Vect_copy.begin()+5, 45);
cout << "Element has been added.\n";
ShowVect(Vect_copy);

cout << "Our new vector with that same elements:\n";
vector<int> Vect_all_same(5,11);
ShowVect(Vect_all_same);

auto odd = find_if(Vect.begin(), Vect.end(), [](int x)-> int { return x%2 == 1; });

//int odd = [](int x)-> int { return x%2==1; } (6);
cout << "My first odd in vector: ";
cout<< *odd;


cout << "\n\nFor loop: \n";
for (int &a:Vect){
    cout<< a << " ";
}

sort(Vect.begin(), Vect.end());
vector<int>::iterator ptr;
ptr = std::unique(Vect.begin(), Vect.end());
Vect.resize(distance(Vect.begin(), ptr));
cout << "Vect with only unique elements.\n";
ShowVect(Vect);

cout << "\n\n\n";

for (int a : {4,7,1,3,5,7,8,9,9,9,9,9,})cout<< a << " " ;

//std::cout<< [](int a, int b)-> int { return a*b; } (3,6) << std::endl;

auto funkcja = [](int a, int b)-> int { return a*b; };
cout << "\n\nFunction result: " << funkcja(4,2);


int x{};
cout << "\n\n x = " << x << endl;
int x1(2);
cout << "x1 = " << x1 << endl;
int x2;
cout << "x2 = " << x2 << endl;

bool cos = 65;  // cos == true
cout << "cos: " << cos << endl;

auto &ref = cos;
int *ptrres;
ptrres = &x2;
int *ptr2;
ptr2 = new int (43);
const int &refaa = 8;
cout << refaa << " " << &refaa;

    //return 0;
}
