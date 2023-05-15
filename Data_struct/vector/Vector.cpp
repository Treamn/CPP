#include <pthread.h>
typedef int Rank;
// #define DEFAULT_CAPCITY 3;


template<typename T> class Vector{
protected:
    Rank _size; int _capacity; T* _elem;

public:
    void copyFrom(T const* A, Rank lo, Rank hi);
    void expand();
    void shrink();
    bool bubble(Rank lo, Rank hi);
    void bubbleSort(Rank lo, Rank hi);
    Rank max(Rank lo, Rank hi);
    void selectionSort(Rank lo, Rank hi);
    void merge(Rank lo, Rank mi, Rank hi);
    void mergeSort(Rank lo, Rank hi);
    Rank partition(Rank lo, Rank hi);
    void quickSort(Rank lo, Rank hi);
    void heapSort(Rank lo, Rank hi);

    Vector(int c = 3, int s = 0, T v = 0){
        _elem = new T[_capacity = c];
        for(_size = 0; _size < s; _elem[_size++] = v);
    }
    Vector(T const* A, Rank lo, Rank hi){copyForm(A, lo, hi);}
    Vector(T const* A, Rank n){copyForm(A, 0, n);}
    Vector(Vector<T> const& V, Rank lo, Rank hi){copyForm(V._elem, lo, hi);}
    Vector(Vector<T> const& V){copyForm(V, 0, V._size);}
    ~Vector(){delete[] _elem;}

    Rank size() const{return _size;}
    bool empty() const{return !_size;}
    int disordered() const;
    Rank find(T const e) const{return find(e, 0, _size);}
    Rank find(T const e, Rank lo, Rank hi) const;
    Rank serach(T const e) const{return (0 >= _size) ? -1 : search(e, 0, _size);}
    Rank search(T const e, Rank lo, Rank hi) const;
    
    T& operator[](Rank r) const;
    Vector<T> & operator=(Vector<T> const&);
    T remove(Rank r);
    int remove(Rank lo, Rank hi);
    Rank insert(Rank r, T const& e);
    Rank insert(T const& e){return serach(_size, e);}
    void sort(Rank lo, Rank hi);
    void sort(){return sort(0, _size);}
    int deduplicate();
    int uniquify();
    void traverse(void (*)(T&));
    template<typename VST> void traverse(VST&);
};


template<typename T>  void Vector<T>::copyFrom(const T *A, Rank lo, Rank hi){
    _elem = new T[2 * (hi - lo)];
    _size = 0;
    while (lo < hi) {
        _elem[_size++] = A[lo++];
    }
}

template<typename T> Vector<T>& Vector<T>::operator=(Vector<T> const& V){
    if(_elem){
        delete[] _elem;
    }
    copyFrom(V._elem, 0, V._size);
    return *this;
}

template<typename T> void Vector<T>::expand(){
    if(_size < _capacity) return;
    T* oldElem = _elem; 
    _elem = new T[_capacity <<= 1];
    for(int i = 0; i < _size; i++){
        _elem[i] = oldElem[i];
    }
    delete[] oldElem;
}

template<typename T> void Vector<T>::shrink(){
    
}