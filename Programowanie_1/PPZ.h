#ifndef SOURCE_CPP_SRC_H
#define SOURCE_CPP_SRC_H

//Szymon Rusiecki

int size(int *A){
    int i=0;
    while(*(A+i) != -1)
        ++i;
    return i;
}//OK

void sort(int *A){
    for (int i=0; i<size(A); ++i)
        for (int j=i+1; j<size(A); ++j)
            if (*(A+i) > *(A+j))
                std::swap(*(A+i), *(A+j));
}

bool Element(int a, int *A){
    for (int i=0; i<size(A); ++i)
        if (a == *(A+i))
            return true;
    return false;
}//OK?
bool Empty(int *A){
    return (*A == -1);
}//OK
bool Nonempty(int *A){
    return !Empty(A);
}//OK
void Add(int a, int *A){//OK
    int x = size(A);
    if (a > 0 && a < 4096 && !Element(a, A)){
        *(A + x) = a;
        *(A + ++x) = -1;
    }
    sort(A);
}//OK
void Create(int n, int *A, int *B){//OK
    *B = -1;
    int x = 0;
    for (int i=0; i<n; ++i){
        if (!Element(*(A+i), B) && *(A+i)>0 && *(A+i)<4096){
            *(B + x) = *(A+i);
            *(B + ++x) = -1;
        }
    }
    sort(B);
}//OK
void Cardinality(int *A, int *a) {//A
    *a=0;
    int i=0;
    while (*(A+i++) != -1)
        ++*a;
}//OK
double Arithmetic(int *A) {//return AM
    int sum=0;
    if (size(A)==0)
        return sum;
    for (int i=0; i<size(A); ++i)
        sum += *(A+i);
    return sum/(double)size(A);
}//OK
double Harmonic(int *A){//return HM
    if (size(A) == 0)
        return 1;
    double sum = 0;
    for (int i=0; i<size(A); ++i)
        sum += (double)1/(*(A+i));
    return (double)size(A)/sum;
}//OK
void MinMax (int *A, int *a, int &b){
    if (size(A) != 0){
        *a = *A;
        b = *A;
        for (int i=1; i<size(A); ++i){
            if (*(A+i)<*a)
                *a = *(A+i);
            if (*(A+i)>b)
                b = *(A+i);
        }
    }
}//OK
void Properties(int A[], char s[], double &am, double *hm, int &min, int *max, int &car){
    int i=0;
    while(*(s+i)) {
        if (s[i]=='m')
            MinMax(A, &min, *max);
        else if (s[i]=='a')
            am = Arithmetic(A);
        else if (s[i]=='h')
            *hm = Harmonic(A);
        else if (s[i]=='c')
            Cardinality(A, &car);
        ++i;
    }
}//OK
//OK
void Intersection(int *A, int *B, int *C){
    *C=-1;
    int i=0, j=0, x=0;
    if (size(A)==0||size(B)==0)
        return;
    while (i<size(A) && j<size(B)){
        if (*(A+i) < *(B+j))
            ++i;
        else if (*(A+i) > *(B+j))
            ++j;
        else{
            *(C+x)=*(A+i);
            ++x;
            *(C+x)=-1;
            ++i;
            ++j;
        }
    }
}//OK
void Difference(int *A, int *B, int *C) {//SetA, SetB, A - B
    *C = -1;
    int i=0, j=0, x=0;
    while(i<size(A) && j<size(B)){
        if (*(A+i) == *(B+j))
            ++i;
        else if (*(A+i) < *(B+j)){
            *(C+x)=*(A+i);
            ++x;
            *(C+x)=-1;
            ++i;
        }
        else ++j;
    }

    while(i<size(A)){
        *(C+x)=*(A+i);
        ++x;
        *(C+x)=-1;
        ++i;
    }
}//OK
void Complement(int *A, int *B){
    int i=0, j=1, x=0;
    *B=-1;
    while(i<size(A) && j<4096){
        if (*(A+i)>j){
            *(B+x)=j;
            ++x;
            *(B+x)=-1;
            ++j;
        }
        else{
            ++i;
            ++j;
        }
    }

    while (j<4096){
        *(B+x)=j;
        ++x;
        *(B+x)=-1;
        ++j;
    }
}
void Union(int *A, int *B, int *C) {
    *C=-1;
    int i=0, j=0, x=0;
    if (size(A)==0 && size(B)==0)
        return;
    else if (size(A)!=0&&size(B)==0){
        *C=*A;
        ++x;
        *(C+x)=-1;
        ++i;
    }
    else if (size(A)==0&&size(B)!=0){
        *C=*B;
        ++x;
        *(C+x)=-1;
        ++j;
    }
    else{
        if (*A < *B){
            *C=*A;
            ++x;
            *(C+x)=-1;
            ++i;
        }
        else{
            *C=*B;
            ++x;
            *(C+x)=-1;
            ++j;
        }
    }

    while (i<size(A) && j<size(B)){
        if (*(A+i)<*(B+j)){
            if (*(C+x-1) != *(A+i)){
                *(C+x) = *(A+i);
                ++x;
                *(C+x) = -1;
            }
            ++i;
        }
        else if (*(A+i)>*(B+j)){
            if (*(C+x-1) != *(B+j)){
                *(C+x) = *(B+j);
                ++x;
                *(C+x) = -1;
            }
            ++j;
        }
        else{
            if (*(C+x-1) != *(A+i)){
                *(C+x) = *(A+i);
                ++x;
                *(C+x) = -1;
            }
            ++i;
            ++j;
        }
    }
    while (i<size(A)){
        if (*(C+x-1) != *(A+i)){
            *(C+x) = *(A+i);
            ++x;
            *(C+x) = -1;
        }
        ++i;
    }
    while (j<size(B)){
        if (*(C+x-1) != *(B+j)){
            *(C+x) = *(B+j);
            ++x;
            *(C+x) = -1;
        }
        ++j;
    }
}
void Symmetric(int *A, int *B, int *C) {//SetA, SetB, A + B - (A ^ B)
    *C=-1;
    int i=0, j=0, x=0;
    while(i<size(A) && j<size(B)){
        if (*(A+i)==*(B+j)){
            ++i;
            ++j;
        }
        else if (*(A+i)<*(B+j)){
            *(C+x)=*(A+i);
            ++x;
            *(C+x)=-1;
            ++i;
        }
        else{
            *(C+x)=*(B+j);
            ++x;
            *(C+x)=-1;
            ++j;
        }
    }
    while(i<size(A)){
        *(C+x)=*(A+i);
        ++x;
        *(C+x)=-1;
        ++i;
    }
    while(j<size(B)){
        *(C+x)=*(B+j);
        ++x;
        *(C+x)=-1;
        ++j;
    }
}
//???
bool Subset(int *A, int *B){
    int n=size(A), m=size(B);
    for (int i=0; i<n; ++i) {
        bool is = false;
        for (int j=0; j < m; ++j)
            if (*(A+i) == *(B+j)){
                is = true;
                break;
            }
        if (!is)
            return false;
    }
    return true;
}
bool Equal(int *A, int *B){
    return Subset(A, B) && Subset(B, A);
}

#endif //SOURCE_CPP_SRC_H
