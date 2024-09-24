//#include <iostream>  
//#include <fstream>  
//#include <cctype> // For isspace()  
//using namespace std;
//
//int main()
//{
//    char b1[10000]; char b2[10000];
//    ifstream obj("qwe.txt"); // Open the file directly  
//    if (!obj) {
//        cerr << "Unable to open file" << endl; // Check for file opening errors  
//        return 1; // Exit if unable to open file  
//    }
//
//    char* curr_buff = b1; // Start with buffer 1  
//    int count = 0, c, starting = 0, ending = 0, previousBuffer = 0;
//
//   
//    obj.get(curr_buff, 10000, EOF);
//
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
//
//         
//        if (isspace(curr_buff[count]) || curr_buff[count] == '\0') {
//            if (starting < count) {  
//                
//                for (c = starting; c < count; c++) {
//                    cout << curr_buff[c];
//                }
//                cout << "\n"; 
//            }
//            starting = count + 1;
//        }
//        count++;   
//    }
//
//    cout << "COUNT IS : " << count << endl;
//
//
//
//    obj.close();
//    return 0;
//}