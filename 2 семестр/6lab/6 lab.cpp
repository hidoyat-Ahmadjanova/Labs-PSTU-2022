#include <iostream>
#include <cctype>
 
int main() {
    std::string text;
    std::string buffer;
    int max = 0;
    int min;
    int counter;
    bool flag;
 
    getline(std::cin, text);
 
    min = text.size();
 
    for ( int i = 0; text[i] != 0; i++ ) {
        counter = 0;
        flag = false;
        while ( isalpha(text[i]) ) {
            counter += 1;
            i += 1;
            flag = true;
        }
        if ( max < counter ) {
            max = counter;
        }
        if ( min > counter && flag == true ) {
            min = counter;
        }
    }
 
    for ( int i = 0; text[i] != 0; i++ ) {
        counter = 0;
        while ( isalpha(text[i]) ) {
            counter += 1;
            buffer += text[i];
            i += 1;
        }
        if ( max == counter ) {
            std::cout << "Max: " << buffer << std::endl;
        }
        if ( min == counter ) {
            std::cout << "Min: " << buffer << std::endl;
        }
        buffer.erase(0);
    }
 
    return 0;
}