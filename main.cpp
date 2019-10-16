#include <iostream>


void calculateAnswers(long *array);

using namespace std;


int main(){
    long array[14];
    calculateAnswers(array);
    int a;
    while(cin >> a){
        if(a > 0)
            cout << array[a] << endl;
    }
    return 0;
}

void calculateAnswers(long *array) {
    for (int k = 0; k < 14; ++k)
    {
        long m;
        for (m = k+1; true ; m++)
        {
            int posicion = 0;
            bool seEncontro = true;
            for (int i = 0; i < k; i++)
            {
                posicion = (posicion + m - 1) % ((2 * k) - i);
                if (posicion < k) {
                    seEncontro = false;
                    break;
                }
            }
            if(seEncontro) break;
        }
        array[k] = m;
    }
}
