//
// Created by cristian on 5/17/19.
//

#ifndef QUICKSORT_QUICKSORT_H
#define QUICKSORT_QUICKSORT_H
#include <vector>

using namespace std;
template <typename T1>
class quicksort {
    vector<T1> listaordenada;
public:
    quicksort()=default;
    void ordenar(vector<T1> list)
    {
    vector<T1>menor1;
    vector<T1>mayor1;
    T1 piv=list[list.size()-1];
    if(list.size()>1){
    for(int i=0;list.size();i++)
    {
        if(list[i]<=piv)menor1[i]=(list[i]);
        else mayor1[i]=(list[i]);
    }
        for(int i=0;list.size();i++)
    {
            cout<<list[i]<<" ";
    }
    cout<<endl;
    ordenar(menor1);
    ordenar(mayor1);}
}


    void imprimir();

};



#endif //QUICKSORT_QUICKSORT_H
