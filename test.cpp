#include <iostream>
#include <string>

void printServerIP(const std::string* ip_ptr){      
    if(!ip_ptr){                                                    //Null pointer check
        std::cout << "No Ip detected." << '\n';
    } else {
        std::cout << *ip_ptr << '\n';
        //*ip_ptr = "192.168.1.100";                                //ERROR: This line causes a compiler error because 'ip_ptr' points to a const string, so we cannot modify its value.
    }
}

int main() {
    
    const std::string main_server_ip{ "10.0.0.5" };

    printServerIP(&main_server_ip);

    return 0;
}