#include <iostream>
using namespace std;

int main() {
    // Try to execute '__init__.py', but if the user doesn't have Python installed, show a VBS dialog box error:
    try {
        system("python __init__.py");
    }
    catch () {}

    return 0;
}
