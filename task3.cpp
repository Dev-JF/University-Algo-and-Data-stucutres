#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>
#include <vector>
#include <algorithm>
#include <chrono>


using namespace std;





// initialise the selection sort algorithm
void swap(int x, int y);
void selectionSort(vector<int> a);


void sortTenTimes(vector<int> a);
void selectionSortTenTimes(vector<int> a);



int main() {

    vector<int> v;
    int num;
    int i = 0;


    // reads the RF1 file and stores it into a vector
    ifstream input_file("RF1.txt");

    while (input_file >> num) {


        v.push_back(num);

        i++;
    }

    cout << "sort algorithm: " << endl;

    // tracks the sort runtime and starts the sort algorithm
    auto start = chrono::high_resolution_clock::now();


    sort(v.begin(), v.end());

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, std::micro> time_ms = end - start;


    cout << endl << "first attempt: ";
    cout << time_ms.count() << " micorseconds\n" << endl;


    cout << "sort algoritm ten times: " << endl;

    sortTenTimes(v);

    // calling the selection sort

    cout << endl << "select sort algorithm:" << endl;

    auto startSelect = chrono::high_resolution_clock::now();

    selectionSort(v);

    auto endSelect = chrono::high_resolution_clock::now();
    chrono::duration<double, std::micro> timeSelectMicroSec = endSelect - startSelect;

    cout << endl << "First attempt of the select sort: ";
    cout << timeSelectMicroSec.count() << " micorseconds\n" << endl;

    cout << "select sort ten times: " << endl;
    selectionSortTenTimes(v);
}








// selection sort algorithm
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
int min_position(vector<int> a, int from, int to) {
    int min_pos = from;
    int i;
    for (i = from + 1; i <= to; i++)
        if (a[i] < a[min_pos]) min_pos = i;
    return min_pos;
}

void selectionSort(vector<int> a) {
    int next;
    for (next = 0; next < a.size() - 1; next++) {
        int min_pos = min_position(a, next, a.size() - 1);
        if (min_pos != next)
            swap(a[min_pos], a[next]);
    }
}

void sortTenTimes(vector<int> a) {

    float total = 0;
    float average;


    for (int i = 0; i < 10; i++) {


        auto start = chrono::high_resolution_clock::now();


        sort(a.begin(), a.end());

        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double, std::micro> time_ms = end - start;





        cout << time_ms.count() << " micorseconds\n";


        total = total + time_ms.count();


    }

    average = total / 10;

    cout << endl << "The average time taken for 10 runs is: ";
    cout << average << " microseconds" << endl;

}


void selectionSortTenTimes(vector<int> a) {

    float total = 0;
    float average;


    for (int i = 0; i < 10; i++) {


        auto start = chrono::high_resolution_clock::now();


        selectionSort(a);

        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double, std::micro> time_ms = end - start;





        cout << time_ms.count() << " micorseconds\n";


        total = total + time_ms.count();


    }

    average = total / 10;

    cout << endl << "The average time taken for 10 runs is: ";
    cout << average << " microseconds" << endl;

}

