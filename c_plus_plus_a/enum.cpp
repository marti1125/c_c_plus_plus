#include <iostream>
#include <cstdint>

using namespace std; 

enum Answers{Yess, Noo, Maybe};
enum {FahrenheitBoiling = 100, CelsiusBoiling = 212};
enum Permissions {Yesj, Noj};

enum class Per {Yesu, Nou};
enum class AnswerClassEnum {YesN, No, Maybe};

enum class CarType:short{Sedan, Coupe, SUV, Convertible};

enum UrlTableErrors { kOK = 0, kErrorOutOfMemory, kErrorMalformedInput, }; 
enum AlternateUrlTableErrors { OK = 0, OUT_OF_MEMORY = 1, MALFORMED_INPUT = 2, }; 

int main(void)
{
    int i = Answers::Yess;
    AnswerClassEnum j;
    j = AnswerClassEnum::YesN;

    cout << i << '\n' << static_cast<int>(j) << endl;

}
