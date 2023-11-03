///*#include <iostream>
//#include <typeinfo>
//#include <string.h>
//using namespace std;
//
//int main()
//{
//    int n;
//
//    cout << "input n: ";    
//    cin >> n;
//    if (n <= 0)
//        cout << "error n" << endl;
//    else
//    {
//        int max = 0;
//        while (n > 0)
//        {
//            if ((n % 10) > max)
//                max = n % 10;
//            n /= 10;
//        }
//        cout << "answer: " << max << endl;
//    }
//
//    return 0;
//}
//*/
//
//
//// ctrl + k +c     ctrl+k+u
////#include <iostream>
////
////using namespace std;
////
////int main()
////{
////    double a, b, c, d, l;
////    cout << "Enter the length(a): "; // длина кирпича
////    cin >> a;
////    cout << "Enter the width(b): "; // ширина кирпича
////    cin >> b;
////    cout << "Enter the height(c): "; // высота кирпича
////    cin >> c;
////    cout << "Enter the length of the oppenings(d): "; // вводим длину отверстия
////    cin >> d;
////    cout << "enter the height of the oppenings(l): "; // вводим высоту отверстия
////    cin >> l;
////    switch ((b <= d) && (c <= l)) // составное условие
////    {
////    case 1: {cout << "brick went into the hole by the first party" << endl; break; } // кирпич прошёл через отверстие первой стороной
////    case 2: {cout << "brick went into the hole by the second party" << endl; break; } // кирпич прошёл через отверстие второй стороной
////    case 3: {cout << "brick went into the hole by a third party" << endl; break; } // кирпич прошёл через отверстие третьей стороной
////    default: cout << "brick did not pass through the hole" << endl;          // кирпич не прошёл через отверстие
////    }
////    return 0;
////}
//
//
//
//
//
//
//
//#define _crt_secure_no_warnings
//#include <iostream>
//#include <locale>
//#include <conio.h>
//float a, b, c;
//char d;
//int p, num1;
//using namespace std; 
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    while (p != 2)
//    {
//        cout << "1 - calculator \n2 - exit \n" << endl;
//        cin >> p;
//        switch (p)
//        {
//        case 1:
//        {
//            cout << "-----------------вы в калькуляторе-----------------" << endl;
//            float c;
//
//            printf("first number ");
//            cin >> a;
////            cout << "a = " << a << endl;
////            printf("action with numbers ");
////            cin >> d;
////            cout << "d = " << d << endl;
////            printf("second number ");
////            cin >> b;
////            cout << "b = " << b << endl;
////           
////            if (d == '+') {
////                cout << "c = a + b;" << endl;
////                c = a + b;
////                cout << "c = " << c << endl;
////            }
////            if (d == '-') {
////                cout << "c = a - b;" << endl;
////                c = a - b;
////                cout << "c = " << c << endl;
////            }
////            if (d == '*') {
////                cout << " c = a * b;" << endl;
////                c = a * b;
////                cout << "c = " << c << endl;
////            }
////            if (d == '/') {
////                cout << " c = a * b;" << endl;
////                c = a * b;
////                cout << "c = " << c << endl;
////            }
////         
////            cout << "--------- result = " << c << "--------------------\n \n" << endl;
////        }
////        case 2:
////        {
////            cout << "-----------------вы вышли-----------------" << endl;
////            break;
////        }
////        }
////        
////    }
////}
////
////
////
////
/////*
////
////int main()
////{
////    
////    setlocale(LC_ALL, "RUS");
////    cout << "\t\t\t------------- калькулятор ---------------\n\n\n";
////    float num1, num2; // сначала определим строку
////    string operation;
////
////    cout << "Введите первое число: ";
////    cin >> num1;
////    
////    //вот она отладочная печать
////    cout << "\n ваше число " << "num1 = " << num1 << "и у него тип" << typeid(num1).name() << endl;
////
////
////
////
////    cout << "Введите первое число: ";
////    cin >> num2;
////
////    //вот она отладочная печать
////    cout << "\n ваше число " << "num2 = " << num2 << "и у него тип" << typeid(num2).name() << endl;
////
////
////    if (a >= 0) {
////        cout << a << " метр будет " << a / 1000 << " километра " << endl;
////    }
////    else
////    {
////        cout << "Введены неверные данные";
////    }
////
////
////    
////    return 0;
////
////}*/
//
//
//
///*#include <iostream>
//#include <typeinfo>
//#include <string.h>
//using namespace std;
//
//int main()
//{
//    int n;
//
//    cout << "input n: ";    
//    cin >> n;
//    if (n <= 0)
//        cout << "error n" << endl;
//    else
//    {
//        int max = 0;
//        while (n > 0)
//        {
//            if ((n % 10) > max)
//                max = n % 10;
//            n /= 10;
//        }
//        cout << "answer: " << max << endl;
//    }
//
//    return 0;
//}
//*/
//
//
//// ctrl + k +c     ctrl+k+u
////#include <iostream>
////
////using namespace std;
////
////int main()
////{
////    double a, b, c, d, l;
////    cout << "Enter the length(a): "; // длина кирпича
////    cin >> a;
////    cout << "Enter the width(b): "; // ширина кирпича
////    cin >> b;
////    cout << "Enter the height(c): "; // высота кирпича
////    cin >> c;
////    cout << "Enter the length of the oppenings(d): "; // вводим длину отверстия
////    cin >> d;
////    cout << "enter the height of the oppenings(l): "; // вводим высоту отверстия
////    cin >> l;
////    switch ((b <= d) && (c <= l)) // составное условие
////    {
////    case 1: {cout << "brick went into the hole by the first party" << endl; break; } // кирпич прошёл через отверстие первой стороной
////    case 2: {cout << "brick went into the hole by the second party" << endl; break; } // кирпич прошёл через отверстие второй стороной
////    case 3: {cout << "brick went into the hole by a third party" << endl; break; } // кирпич прошёл через отверстие третьей стороной
////    default: cout << "brick did not pass through the hole" << endl;          // кирпич не прошёл через отверстие
////    }
////    return 0;
////}
//
//
//
//
//
//
//
//#define _crt_secure_no_warnings
//#include <iostream>
//#include <locale>
//#include <conio.h>
//float a, b, c;
//char d;
//int p, num1;
//using namespace std; 
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    while (p != 2)
//    {
//        cout << "1 - calculator \n2 - exit \n" << endl;
//        cin >> p;
//        switch (p)
//        {
//        case 1:
//        {
//            cout << "-----------------вы в калькуляторе-----------------" << endl;
//            float c;
//
//            printf("first number ");
//            cin >> a;
//            cout << "a = " << a << endl;
//            printf("action with numbers ");
//            cin >> d;
//            cout << "d = " << d << endl;
//            printf("second number ");
//            cin >> b;
//            cout << "b = " << b << endl;
//           
//            if (d == '+') {
//                cout << "c = a + b;" << endl;
//                c = a + b;
//                cout << "c = " << c << endl;
//            }
//            if (d == '-') {
//                cout << "c = a - b;" << endl;
//                c = a - b;
//                cout << "c = " << c << endl;
//            }
//            if (d == '*') {
//                cout << " c = a * b;" << endl;
//                c = a * b;
//                cout << "c = " << c << endl;
//            }
//            if (d == '/') {
//                cout << " c = a * b;" << endl;
//                c = a * b;
//                cout << "c = " << c << endl;
//            }
//         
//            cout << "--------- result = " << c << "--------------------\n \n" << endl;
//        }
//        case 2:
//        {
//            cout << "-----------------вы вышли-----------------" << endl;
//            break;
//        }
//        }
//        
//    }
//}




/*

int main()
{
    
    setlocale(LC_ALL, "RUS");
    cout << "\t\t\t------------- калькулятор ---------------\n\n\n";
    float num1, num2; // сначала определим строку
    string operation;

    cout << "Введите первое число: ";
    cin >> num1;
    
    //вот она отладочная печать
    cout << "\n ваше число " << "num1 = " << num1 << "и у него тип" << typeid(num1).name() << endl;




    cout << "Введите первое число: ";
    cin >> num2;

    //вот она отладочная печать
    cout << "\n ваше число " << "num2 = " << num2 << "и у него тип" << typeid(num2).name() << endl;


    if (a >= 0) {
        cout << a << " метр будет " << a / 1000 << " километра " << endl;
    }
    else
    {
        cout << "Введены неверные данные";
    }


    
    return 0;

}*/


#include <cmath>
#include <iostream>
#include <windows.h>


int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;

    if (std::abs(x1 - x2) == std::abs(y1 - y2)) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }
    Sleep(100000);
}