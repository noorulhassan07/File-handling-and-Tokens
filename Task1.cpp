//#include <iostream>  
//#include <string>  
//using namespace std;
//
//int main()
//{
//    string token;
//    string userPara;
//
//  
//    cout << "Enter the paragraph: ";
//    getline(cin, userPara); 
//    cout << endl << "\t" << "Tokens: " << endl;
//
//    
//    for (size_t i = 0; i < userPara.length(); i++)
//    {  
//        if (isspace(userPara[i]) || ispunct(userPara[i]))
//        {
//           
//            if (!token.empty())
//            {
//                cout << token << endl;  
//                token.clear();   
//            }
//        }
//        else
//        {
//        
//            token += userPara[i];
//        }
//    }
//
//    if (!token.empty())
//    {
//        cout <<"\t" << token << endl;
//    }
//
//    return 0;
//}