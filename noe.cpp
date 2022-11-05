#include <iostream>
#include <string>

void Bruss();
void Nuka();
void Nuka2();
void Inca();
void Coka();
void Pay_soda();

int main()
{

     Bruss();
    // pris();
    return 0;
}


void Bruss(){

    std::string greeting = "(Nuka cola, Inca cola, Coka cola)?";
    std::string  pressbut = "   (N)        (I)        (C)";

    std::cout << greeting << std::endl;
    std::cout << pressbut << std::endl;
    char input;
    std::cin >> input;

    if(input == 'N'|| input == 'n'){
        std::cout << "28caps" << std::endl;
        return Nuka2();
    }

    else if( input == 'I'|| input == 'i'){
        //std::cout << "28kr" << std:: endl;
        return Inca();

    }

    else if( input == 'C'|| input == 'c'){
        //std::cout << "28kr" << std:: endl;
        return Coka();
    }
    else {
        return Bruss();
    }
}


void Nuka(){
    std::string Hei = "Are you aparto of the NCR?";

    std::cout << Hei << std::endl;
    char input;
    std::cin >> input;

    if(input == 'Y' || input == 'y'){
        std::cout << "Free Cola" << std::endl;
    }

    else if( input == 'N'|| input =='n' ){
        std::cout << "Welcom to the braterhood of steel" << std::endl;
    }

    else {
        return Bruss();
    }




}

void Nuka2(){
    std::string Hei = "Are you aparto of the NCR?";

    std::cout << Hei << std::endl;
    char input;
    std::cin >> input;

    if(input == 'Y' || input == 'y'){
        return Pay_soda();
    }

    else if( input == 'N'|| input =='n' ){
        std::cout << "Welcom to the braterhood of steel" << std::endl;
    }

    else {
        return Bruss();
    }




}


void Pay_soda(){
    int b = 0;
    int pris = 28;
    int mynt;

    while (b < pris) {
         std::cout << std::endl << pris - b<< "kr å betale." << std::endl << "bare mynt"<<std::endl;
         std::cin >> mynt;
         if (mynt >= 1) {
             b = b + mynt;
         }
         else {
             break;
         }
    }
//  Bruss();

//Nils
    bool condition = false;
    do {
        std::cout << "Have a Nuka day ( ° ͜ʖ °) " << b - pris << "kr This is you chash back" << std::endl <<std::endl;


   }while (condition);


}




void Inca(){
    // Harald

    int b = 0;
    int pris = 28;
    int mynt;

    while (b < pris) {
         std::cout << std::endl << pris - b<< "kr å betale." << std::endl << "bare mynt"<<std::endl;
         std::cin >> mynt;
         if (mynt == 1) {
             b = b + mynt;
         }
         else if (mynt == 5) {
                 b = b + mynt;
         }
         else if (mynt == 10) {
                 b= b + mynt;
         }
         else if (mynt == 20) {
                 b = b + mynt;
         }

    }

        if (pris < b){
            std::cout << "Betaler ut " << b - pris << "kr i veklsepenger" << std::endl <<std::endl;
    }

//Nils
    bool condition = false;
    do {
        std::cout <<"gi soda" << std::endl;

   }while (condition);


}

void Coka(){
    // Harald

    int b = 0;
    int pris = 32;
    int mynt;

    while (b < pris) {
         std::cout << std::endl << pris - b<< "kr å betale." << std::endl << "bare mynt"<<std::endl;
         std::cin >> mynt;
         if (mynt == 1) {
             b = b + mynt;
         }
         else if (mynt == 5) {
                 b = b + mynt;
         }
         else if (mynt == 10) {
                 b= b + mynt;
         }
         else if (mynt == 20) {
                 b = b + mynt;
         }

    }


        if (pris < b){
            std::cout << "Betaler ut " << b - pris << "kr i veklsepenger" << std::endl <<std::endl;
    }




//Nils
    bool condition = false;
    do {
        std::cout <<"Refreshing" << std::endl;

       }while (condition);

}
