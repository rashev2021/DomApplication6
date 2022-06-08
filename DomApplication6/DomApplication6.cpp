#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*
    int code;
    char symbol;

    cout << "Введите символ или число: ";

    cin >> symbol;
    code = (int)symbol;

    if (code >= 65 && code <= 90) {
        cout << "Вы ввели английскую букву ";
        return 0;
    }
    if (code >= 97 && code <= 122) {
        cout << "Вы ввели английскую букву ";
        return 0;
    }
    if (code >= 128 && code <= 169) {
        cout << "Вы ввели русскую букву";
        return 0;  // с русскими буквами не могу разобраться. Когда я делаю как есть сейчас в коде - у меня не выводится сообщение о том, что введены русские буквы.
                  // Если я меняю code <= 128 тогда у меня выводится сообщение, что введена русская буква, но не работают цифры. при вводе цифр выводиться сообщение, что введены русские буквы.
    }
    if (code >= 160 && code <= 239) {
        cout << "Вы ввели букву";
        return 0;
    }
    if (code >= 48 && code <= 57 ) {
        cout << "Вы ввели цифру";
        return 0;
    }
     */


    /*

     cout << endl;
     cout << " Пожалуйста выберие своего оператора\n" << endl;
     cout << " \"Мегафон\"  - для выбора нажмите (1)\n"
          << " \"Билайн\"   - для выбора нажмите (2)\n"
          << " \"Tele-2\"   - для выбора нажмите (3)\n";

     int my_select_an_operator;
     int select_an_operator;
     int call_time;
     int megafon = 0, beeline = 0, tele_2 = 0;
     float tariff_megafon = 2.5;
     float tariff_beeline = 1.0;
     float tariff_tele_2 = 3;
     float price_time;
     char cancell;

     do {
         cin >> my_select_an_operator;

         switch (my_select_an_operator)
         {
         case 1: {
             cout << " Выбран оператор \"Мегафон\" \n\n";
             megafon = 1;
             cout << " Выберите оператора на которго будет совершен звонок\n";
             cout << " \"Мегафон\"  - для выбора нажмите (1)\n"
                 << " \"Билайн\"   - для выбора нажмите (2)\n"
                 << " \"Tele-2\"   - для выбора нажмите (3)\n";
             do {
                 cin >> select_an_operator;
                 switch (select_an_operator)
                 {
                 case 1: {
                     cout << " Выбран оператор \"Мегафон\" \n\n";
                     if (megafon == 1) {
                         cout << " Звонок внутри сети бесплатный.\n\n";
                         cout << " Оттменить звонок - нажмите на любую клавишу\n";
                         cout << " Начать звонок    - введите (1)\n\n";
                         cin >> cancell;

                         if (cancell != '1') {
                             return 0;
                         }
                         else if (cancell == '1') {
                             cout << " Идет вызов...";
                         }
                     }
                     break;
                 }
                 case 2: {
                     cout << " Выбран оператор \"Билайн\" \n\n";
                     megafon = 0;
                     if (megafon != 1) {
                         cout << " Звонок внутри сети платный.\n";
                         cout << " Стоимость тарифа: " << tariff_megafon << " р/мин.\n\n";
                         cout << " Введите время разговора:  ";
                             cin >> call_time;
                             price_time = call_time * tariff_megafon;

                             cout << " Стоимость разговора составит: " << price_time << " р/мин.\n\n";
                             cout << " Оттменить звонок - нажмите на любую клавишу\n";
                             cout << " Начать звонок    - введите (1)\n\n";
                             cin >> cancell;

                             if (cancell != '1') {
                                 return 0;
                             }
                             else if(cancell == '1') {
                                 cout << " Идет вызов...";
                             }
                     }
                     break;
                 }
                 case 3: {
                     cout << " Выбран оператор \"Tele-2\" \n\n";
                     megafon = 0;
                     if (megafon != 1) {
                         cout << " Звонок внутри сети платный.\n";
                         cout << " Стоимость тарифа: " << tariff_megafon << " р/мин.\n\n";
                         cout << " Введите время разговора: ";
                         cin >> call_time;
                         price_time = call_time * tariff_megafon;

                         cout << " Стоимость разговора составит: " << price_time << " р/мин.\n\n";
                         cout << " Оттменить звонок - нажмите на любую клавишу\n";
                         cout << " Начать звонок    - введите (1)\n\n";
                         cin >> cancell;

                         if (cancell != '1') {
                             return 0;
                         }
                         else if (cancell == '1') {
                             cout << " Идет вызов...";
                         }
                     }
                     break;
                 }
                 default:
                     cout << " Введены неверные значения. Пожалуйста попробуйте ещё раз\n\n";
                     break;
                 }
             } while (true);
                {}
          break;
         }
         case 2: {
             cout << " Выбран оператор \"Билайн\" \n\n";
             beeline = 1;
             cout << " Выберите оператора на которго будет совершен звонок\n";
             cout << " \"Мегафон\"  - для выбора нажмите (1)\n"
                 << " \"Билайн\"   - для выбора нажмите (2)\n"
                 << " \"Tele-2\"   - для выбора нажмите (3)\n";
             do {
                 cin >> select_an_operator;
                 switch (select_an_operator)
                 {
                 case 1: {
                     cout << " Выбран оператор \"Мегафон\" \n\n";
                     beeline = 0;
                     if (beeline != 1) {
                         cout << " Звонок внутри сети платный.\n";
                         cout << " Стоимость тарифа: " << tariff_beeline << " р/мин.\n\n";
                         cout << " Введите время разговора: ";
                         cin >> call_time;
                         price_time = call_time * tariff_beeline;

                         cout << " Стоимость разговора составит: " << price_time << " р/мин.\n\n";
                         cout << " Оттменить звонок - нажмите на любую клавишу\n";
                         cout << " Начать звонок    - введите (1)\n\n";
                         cin >> cancell;

                         if (cancell != '1') {
                             return 0;
                         }
                         else if (cancell == '1') {
                             cout << " Идет вызов...";
                         }
                     }
                     break;
                 }
                 case 2: {
                     cout << " Выбран оператор \"Билайн\" \n\n";
                     if (beeline == 1) {
                         cout << " Звонок внутри сети бесплатный.\n\n";
                         cout << " Оттменить звонок - нажмите на любую клавишу\n";
                         cout << " Начать звонок    - введите (1)\n\n";
                         cin >> cancell;

                         if (cancell != '1') {
                             return 0;
                         }
                         else if (cancell == '1') {
                             cout << " Идет вызов...";
                         }
                     }
                     break;
                 }
                 case 3: {
                     cout << " Выбран оператор \"Tele-2\" \n\n";
                     beeline = 0;
                     if (beeline != 1) {
                         cout << " Звонок внутри сети платный.\n";
                         cout << " Стоимость тарифа: " << tariff_beeline << " р/мин.\n\n";
                         cout << " Введите время разговора: ";
                         cin >> call_time;
                         price_time = call_time * tariff_beeline;

                         cout << " Стоимость разговора составит: " << price_time << " р/мин.\n\n";
                         cout << " Оттменить звонок - нажмите на любую клавишу\n";
                         cout << " Начать звонок    - введите (1)\n\n";
                         cin >> cancell;

                         if (cancell != '1') {
                             return 0;
                         }
                         else if (cancell == '1') {
                             cout << " Идет вызов...";
                         }
                     }
                     break;
                 }
                 default:
                     cout << " Введены неверные значения. Пожалуйста попробуйте ещё раз\n\n";
                     break;
                 }
             } while (true);
             {}
             break;
         }
         case 3: {
             cout << " Выбран оператор \"Tele-2\" \n\n";
             tele_2 = 1;
             cout << " Выберите оператора на которго будет совершен звонок\n";
             cout << " \"Мегафон\"  - для выбора нажмите (1)\n"
                 << " \"Билайн\"   - для выбора нажмите (2)\n"
                 << " \"Tele-2\"   - для выбора нажмите (3)\n";
             do {
                 cin >> select_an_operator;
                 switch (select_an_operator)
                 {
                 case 1: {
                     cout << " Выбран оператор \"Мегафон\" \n\n";
                     tele_2 = 0;
                     if (tele_2 != 1) {
                         cout << " Звонок внутри сети платный.\n";
                         cout << " Стоимость тарифа: " << tariff_tele_2 << " р/мин.\n\n";
                         cout << " Введите время разговора: ";
                         cin >> call_time;
                         price_time = call_time * tariff_tele_2;

                         cout << " Стоимость разговора составит: " << price_time << " р/мин.\n\n";
                         cout << " Оттменить звонок - нажмите на любую клавишу\n";
                         cout << " Начать звонок    - введите (1)\n\n";
                         cin >> cancell;

                         if (cancell != '1') {
                             return 0;
                         }
                         else if (cancell == '1') {
                             cout << " Идет вызов...";
                         }
                     }
                     break;
                 }
                 case 2: {
                     cout << " Выбран оператор \"Билайн\" \n\n";
                     tele_2 = 0;
                     if (tele_2 != 1) {
                         cout << " Звонок внутри сети платный.\n";
                         cout << " Стоимость тарифа: " << tariff_tele_2 << " р/мин.\n\n";
                         cout << " Введите время разговора: ";
                         cin >> call_time;
                         price_time = call_time * tariff_tele_2;

                         cout << " Стоимость разговора составит: " << price_time << " р/мин.\n\n";
                         cout << " Оттменить звонок - нажмите на любую клавишу\n";
                         cout << " Начать звонок    - введите (1)\n\n";
                         cin >> cancell;

                         if (cancell != '1') {
                             return 0;
                         }
                         else if (cancell == '1') {
                             cout << " Идет вызов...";
                         }
                     }
                     break;
                 }
                 case 3: {
                     cout << " Выбран оператор \"Tele-2\" \n\n";
                     if (tele_2 == 1) {
                         cout << " Звонок внутри сети бесплатный.\n\n";
                         cout << " Оттменить звонок - нажмите на любую клавишу\n";
                         cout << " Начать звонок    - введите (1)\n\n";
                         cin >> cancell;

                         if (cancell != '1') {
                             return 0;
                         }
                         else if (cancell == '1') {
                             cout << " Идет вызов...";
                         }
                     }
                     break;
                 }
                 default:
                     cout << " Введены неверные значения. Пожалуйста попробуйте ещё раз\n\n";
                     break;
                 }
             } while (true);
             {}
             break;
         }
         default:
             cout << " Введены неверные значения. Пожалуйста попробуйте ещё раз\n\n";
             break;
         }

     } while (true);
       {}
     */


    /*
    // Эту задачу я не понял как решать. Поэтому и не решил до конца...
    // Я ЕСЛИ ЧЕСТНО ЕЕ ВООБЩЕ НЕ ПОНЯЛ ПО УСЛОВИЮ


    float salary = 50;
    float fine = 0;
    float order_price;
    float code_str = 100;
    float code;
    float price;
    int delays;
    int punct;
    float price_str = salary / code_str;

    cout << " Меню\n" << " Пункт 1 - введите (1)\n" << " Пункт 2 - введите (2)\n" << " Пункт 3 - введите (3)\n\n";

    do {
        cin >> punct;
        switch (punct)
        {
        case 1: {
            cout  << " Пункт 1.\n" << " Введите желаемый доход программиста Василия: ";
            cin >> price;
            code = price / price_str;

            cout << " Введите количество опозданий Василия: ";
            cin >> delays;

            if (delays < 3) {
                cout << " Василию нужно написать " <<  code  << " строк кода.\n";  
            }
            else if (delays >= 3) {
                fine = delays / 3 * 20;
                code = code * fine / price_str;
                cout << " Василию нужно написать " << code << " строк кода.\n";  
            }
            break;
        }
        case 2: {
            cout << " Пункт 2.\n" << " Введите колличество строк кода: ";
            cin >> code;
            cout << " Введите желаемый объем зарплаты: ";
            cin >> price;
            order_price = price_str * code;
            if (price > order_price) {
                cout << " Опаздывать нельзя";
            }
            else {
                delays = (order_price - price) / 20 * 3;
                cout << " Василий может опоздать " << delays << endl;
                cout  << " или " << delays + 1 << endl;
                cout << " или " << delays + 2 << endl;
            }
            break;
        }
        default:
            cout << " Введены неверные значения. Попробуйте ещё раз \n";
            break;
        }

    } while (true);
    { }
     */


}
