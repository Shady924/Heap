#pragma once

#include<iostream>

template <class T>
class Heap{
private:

    T *arr;
    int count;
    int capacity;  
     
    void ResizeHeap(){
        T *arr_old = this->arr;
        this->arr = new T[this->capacity * 2];
        for(int i = 0 ; i < this->count ; i++)
            arr[i] = arr_old[i];

        this->capacity*=2; 
        delete [] arr_old;     
    }

public:
    Heap(int c) {
        count = 0; 
        this->capacity = c; 
        arr = new T[c];
    }

    void Insert(T data){

        int i;
        if(this->count == this->capacity)
            ResizeHeap();
        
        this->count++;
    
        i = this->count - 1;
        while(i > 0 && data > this->arr[(i-1)/2]){
            this->arr[i] = this->arr[(i-1)/2];
            i=(i-1)/2; 
        }
        this->arr[i] = data;
    }

    
    void Delete(){
      
        if(this->count == 0){
            std::cout<<"Heap Is Empty.\n";
            return;
        }
      
        int i , j ;T val; 
        val = this->arr[0];
        this->arr[0] = this->arr[this->count-1];
        this->arr[this->count - 1] = val;
        i = 0;
        j = (2*i)+1;
        while(j<this->count-2){
            if(this->arr[j+1] > this->arr[j])
                j=j+1;
            
            if(this->arr[i] < this->arr[j]){
                std::swap(this->arr[i] , this->arr[j]);
                i = j; 
                j = (i*2)+1;
            }    
            else
                break;
        }  
        this->count--; 
    }


    void DisplayHeap() const{
        
        if(this->count == 0){
            std::cout<<"Heap Is Empty.\n";
            return;
        }
        
        for(int i = 0 ; i< this->count ; i++)
            std::cout<<this->arr[i] <<' ' ;

        std::cout<<std::endl;
    }

    T PeekMax() const{
        
        if(this->count==0)
            throw std::runtime_error("Stack is empty");        
        
        return this->arr[0];
    }

    bool IsEmpty() const{
        return this->count == 0;     
    }

    int Size() const {
        return this->count;
    }

    int Capacity() const {
        return this->capacity;
    }

    ~Heap(){
        delete [] arr;
        arr = nullptr;
    }

};
