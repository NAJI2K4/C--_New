#include <iostream>
int searchArray(int array[], int size, int element);

int main()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(int);
    int index;
    int myNum;

    std::cout<<"Enter the number to search for:  ";
    std::cin>>myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1){

        std::cout<< myNum<<" is at index: "<< index<<'\n';
    }
    else{
        std::cout<<myNum<<" is not in the array\n";
    }
    return 0;
}

int searchArray(int array[], int size, int element){


        for(int i =0; i<size; i++){

            if(array[i]== element){
                return i;
            }
        }

        return -1;
    

}