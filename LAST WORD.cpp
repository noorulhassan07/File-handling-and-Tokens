//#include <iostream>
//#include <fstream>
//#include <cctype> // For isspace()
//using namespace std;
//
//int main()
//{
//    char b1[10000], b2[10000];
//    ifstream obj("qwe.txt");
//    if (!obj) {
//        cout << "Unable to open file" << endl; 
//        return 1; 
//    }
//
//    char* curr_buff = b1; // Start with buffer 1
//    int count = 0, starting = 0, ending = 0, previousBuffer = 0;
//    string lastWord = "";
//
//    obj.get(curr_buff, 10000, EOF); // Read the first buffer
//
//    while (true) {
//        
//        if (curr_buff[count] == '\0') {
//            
//            if (previousBuffer == 2) {
//                break;
//            }
//
//            
//            if (curr_buff == b1) {
//                curr_buff = b2;
//                previousBuffer = 1;
//                count = 0;
//                obj.get(curr_buff, 10000, EOF);
//            }
//            else if (curr_buff == b2) {
//                curr_buff = b1;
//                previousBuffer = 2;
//                count = 0;
//                obj.get(curr_buff, 10000, EOF); 
//            }
//            starting = 0;
//            ending = 0;
//            continue;
//        }
//        count++;
//        cout << "The total count is : " << count << endl;
//
//    obj.close();
//    return 0;
//}