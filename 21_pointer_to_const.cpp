#include <iostream>

void printScore(const int* score_ptr) {
    if(score_ptr) {                                         
    std::cout<<"Player's Score: "<<*score_ptr<<'\n';    
    } else {
    std::cout<<"Error: Score pointer is empty!\n";
    }
}

int main(){
    int high_score{9900};
    int* ptr_hight_score{&high_score};
    printScore(ptr_hight_score);

    int* null_ptr{};
    printScore(null_ptr);

return 0;
}