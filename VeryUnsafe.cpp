#include <cstring>
#include <iostream>

using namespace std;

class VeryUnsafe {
    public:
    VeryUnsafe() {
        strcpy(password, "HaL9124f/aa");
    }
    
    private:
    char password[100];
};

int main() {
    VeryUnsafe badguy;
    char *pass = reinterpret_cast<char*>(&badguy);
    cout << "Password: " << pass << endl;
}
