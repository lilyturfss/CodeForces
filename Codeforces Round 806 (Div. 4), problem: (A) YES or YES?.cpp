#include <iostream>  // library for input/output
#include <vector>    // library for using vectors
#include <algorithm> // library for std::transform
#include <cctype>    // library for std::tolower
 
// function to check if "yes" is present in the string and print "YES" or "NO"
void yes(int n, const std::vector<std::string>& strings) {
    
    for (int i = 0; i < n; ++i) { // loop through each string in the vector
        // convert the string to lowercase
        std::string lowercaseStr = strings[i]; // create a copy of the string
        std::transform(lowercaseStr.begin(), lowercaseStr.end(), lowercaseStr.begin(), ::tolower);
        
        // check if "yes" is present in the lowercase string
        if (lowercaseStr.find("yes") != std::string::npos) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
}
 
// input main function
int main() {
    int n;
    std::cin >> n;
 
    // read input strings into a vector
    std::vector<std::string> strings(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> strings[i];
    }
 
    // call the 'yes' function to process and print the results
    yes(n, strings);
 
    return 0;
}
