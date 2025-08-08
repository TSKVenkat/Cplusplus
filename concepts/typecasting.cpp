#include <iostream>

int main() {
    int correct = 8;
    int question = 20;

    double score  = correct/question * 100;//we wont get 0.8, we get 0 * 100 since correct and question are both integers so floor dvision happens
    //float is not returned !!!! stay smart gng
    double score1 = correct/(double)question  * 100;// here correct is int but question is double, since one of the values dividing is float/decimal
    //we will get 0.8 and no floor division and into 100 will give 40 as the answer!! booyah!!! explicit typecsting ftw

    std::cout << score << std::endl;
    std::cout << score1 << std::endl;
}