#include <iostream>
#include "PPZ.h"

int size(int *A){
    int i=0;
    while(*(A+i) != -1)
        ++i;
    return i;
}

char q, D[100];
int n, m;
int mini, maxi, card;
double a, h;
int A[20000], B[5000], C[5000];

int main(){
    std::cin>>q;
    if (q=='A'){//Add
        int x=0;
        while(true) {
            std::cin>>*(A+x);
            if (*(A+x++)==-1)
                break;
        }
        std::cin>>m;
        std::cout<<m<<"\n";
        Add(m, A);
        x=0;
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";

    }//Add
    else if (q=='B'){//Create
        std::cin>>n;
        for (int i=0; i<n; ++i)
            std::cin>>*(A+i);
        Create(n, A, B);
        for (int i=0; i<n; ++i)
            std::cout<<*(A+i)<<" ";
        std::cout<<"\n";
        int x=0;
        while(*(B+x) != -1)
            std::cout<<*(B+x++)<<" ";
        std::cout<<*(B+x);
    }//Create
    else if (q=='C'){//Union
        int x=0;
        while(true){
            std::cin>>*(A+x);
            if (*(A+x++)==-1)
                break;
        }
        x=0;
        while(true){
            std::cin>>*(B+x);
            if (*(B+x++)==-1)
                break;
        }
        Union(A, B, C);
        x=0;
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
        x=0;
        while(*(B+x) != -1)
            std::cout<<*(B+x++)<<" ";
        std::cout<<*(B+x)<<"\n";
        x=0;
        while(*(C+x) != -1)
            std::cout<<*(C+x++)<<" ";
        std::cout<<*(C+x)<<"\n";
    }//Union
    else if (q=='D'){
        int x=0;
        while(true){
            std::cin>>*(A+x);
            if (*(A+x++)==-1)
                break;
        }
        x=0;
        while(true){
            std::cin>>*(B+x);
            if (*(B+x++)==-1)
                break;
        }
        Intersection(A, B, C);
        x=0;
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
        x=0;
        while(*(B+x) != -1)
            std::cout<<*(B+x++)<<" ";
        std::cout<<*(B+x)<<"\n";
        x=0;
        while(*(C+x) != -1)
            std::cout<<*(C+x++)<<" ";
        std::cout<<*(C+x)<<"\n";
    }//Intersection
    else if (q=='E'){
        int x=0;
        while(true){
            std::cin>>*(A+x);
            if (*(A+x++)==-1)
                break;
        }
        x=0;
        while(true){
            std::cin>>*(B+x);
            if (*(B+x++)==-1)
                break;
        }
        Difference(A, B, C);
        x=0;
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
        x=0;
        while(*(B+x) != -1)
            std::cout<<*(B+x++)<<" ";
        std::cout<<*(B+x)<<"\n";
        x=0;
        while(*(C+x) != -1)
            std::cout<<*(C+x++)<<" ";
        std::cout<<*(C+x)<<"\n";
    }//Difference
    else if (q=='F'){
        int x=0;
        while(true){
            std::cin>>*(A+x);
            if (*(A+x++)==-1)
                break;
        }
        x=0;
        while(true){
            std::cin>>*(B+x);
            if (*(B+x++)==-1)
                break;
        }
        Symmetric(A, B, C);
        x=0;
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
        x=0;
        while(*(B+x) != -1)
            std::cout<<*(B+x++)<<" ";
        std::cout<<*(B+x)<<"\n";
        x=0;
        while(*(C+x) != -1)
            std::cout<<*(C+x++)<<" ";
        std::cout<<*(C+x)<<"\n";
    }//Symmetric
    else if (q=='G'){
        int x=0;
        while(true){
            std::cin>>*(A+x);
            if (*(A+x++)==-1)
                break;
        }
        Complement(A, B);
        x=0;
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
        x=0;
        while(*(B+x) != -1)
            std::cout<<*(B+x++)<<" ";
        std::cout<<*(B+x)<<"\n";
    }//Complement
    else if (q=='H'){
        int x=0;
        while(true){
            std::cin>>*(A+x);
            if (*(A+x++)==-1)
                break;
        }
        x=0;
        while(true){
            std::cin>>*(B+x);
            if (*(B+x++)==-1)
                break;
        }
        std::cout<<Subset(A, B)<<"\n";
        x=0;
        for (int i=0; i<=size(A); ++i)
            std::cout<<*(A+i)<<" ";
        std::cout<<"\n";
        for (int i=0; i<=size(B); ++i)
            std::cout<<*(B+i)<<" ";
    }//Subset
    else if (q=='I'){
        int x=0;
        while(true){
            std::cin>>*(A+x);
            if (*(A+x++)==-1)
                break;
        }
        x=0;
        while(true){
            std::cin>>*(B+x);
            if (*(B+x++)==-1)
                break;
        }
        int y = Equal(A, B);
        x=0;
        for (int i=0; i<=size(A); ++i)
            std::cout<<*(A+i)<<" ";
        std::cout<<"\n";
        for (int i=0; *(B+i) != -1; ++i)
            std::cout<<*(B+i)<<" ";
        std::cout<<"\n"<<y;
    }//Equal
    else if (q=='J'){
        int x=0;
        while(true){
            std::cin>>*(A+x);
            if (*(A+x++)==-1)
                break;
        }
        std::cout<<Empty(A)<<"\n";
        x=0;
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
    }//Empty
    else if (q=='K'){
        int x=0;
        while(true){
            std::cin>>*(A+x);
            if (*(A+x++)==-1)
                break;
        }
        std::cout<<Nonempty(A)<<"\n";
        x=0;
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
    }//Nonempty
    else if (q=='L'){
        int x=0;
        while(true){
            std::cin>>*(A+x);
            if (*(A+x++)==-1)
                break;
        }
        std::cin>>n;
        std::cout<<Element(n, A)<<"\n";
        x=0;
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
    }//Element
    else if (q=='M') {
        int x = 0;
        while (true) {
            std::cin >> *(A + x);
            if (*(A + x++) == -1)
                break;
        }
        std::cout<<Arithmetic(A)<<"\n";
        x=0;
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
    }//Arithmetic
    else if (q=='N'){
        int x=0;
        while(true) {
            std::cin >> *(A + x);
            if (*(A + x++) == -1)
                break;
        }
        std::cout<<Harmonic(A)<<"\n";
        x=0;
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
    }//Harmonic
    else if (q=='O'){
        int x=0;
        std::cin>>n>>m;
        while(true) {
            std::cin >> *(A + x);
            if (*(A + x++) == -1)
                break;
        }
        MinMax(A, &n, m);
        std::cout<<n<<" "<<m<<"\n";
        x=0;
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
    }//MinMax
    else if (q=='P'){
        int x=0;
        while(true) {
            std::cin >> *(A + x);
            if (*(A + x++) == -1)
                break;
        }
        Cardinality(A, &n);
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
        std::cout<<n;
    }//Cardinality
    else{
        int x=0;
        while(true) {
            std::cin >> *(A + x);
            if (*(A + x++) == -1)
                break;
        }
        x=0;
        while(*(D+x)) {
            std::cin >> *(D + x);
            if (*(D+x)=='a')
                a = Arithmetic(A);
            else if (*(D+x)=='h')
                h = Harmonic(A);
            else if (*(D+x)=='m')
                MinMax(A, &mini, maxi);
            else
                Cardinality(A, &card);
        }
        while(*(A+x) != -1)
            std::cout<<*(A+x++)<<" ";
        std::cout<<*(A+x)<<"\n";
        std::cout<<a<<" "<<h<<" "<<mini<<" "<<maxi<<" "<<card;
    }//Properties*/
    /*...*/
}