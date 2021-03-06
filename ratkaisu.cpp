/* Matematiikan tehtävän ratkaisu ohjelmoimalla

https://yle.fi/aihe/artikkeli/2015/05/22/8-vuotiaille-suunnattu-matematiikan-tehtava-osoittautui-haastavaksi

Seuraava C++ koodi selvittää edellisessä linkissä kuvatun tehtävän kaikki ratkaisut käymällä läpi kaikki mahdolliset vaihtoehdot 
Ohjelmaa voi testata helposti esim. avaamalla nettiselaimessa C++ shellin osoitteessa: http://cpp.sh/
kopioimalla koko tämän koodin tekstikenttään ja käynnistämällä ohjelman */

#include <iostream>          				
// tekstin tulostus
#include <algorithm>         				
// sort- ja next_permutation funktiot

int main()
{
float A[]={1,2,3,4,5,6,7,8,9}; 			
// kokonaisluvut 1 - 9 taulukkoon A
float T;                     				
// varataan tila desimaaliluvulle
int counter = 0;             				
// varataan tila laskurille: monesko permutaatio
int counter2 = 0;            				
// varataan tila laskurille: montako ratkaisua yhteensä
std::sort (A,A+9);           				
// tarvitaan next_permutationille
do                           				
// silmukka alkaa
{
counter ++;                  				
// lisätään joka kierroksella laskuriin yksi
T = A[0]+13*(A[1]/A[2])+A[3]+12*A[4]-A[5]+((A[6]*A[7])/A[8]); 				   
// funktion tulos
if (T == 66)                 								                             
// jos saadaan haluttu tulos
{
counter2++;
std::cout << "Jarjestys: ";  								                             
// näytetään lukujen 1 - 9 paikat ja monesko permutaatio
std::cout <<A[0]<<A[1]<<A[2]<<A[3]<<A[4]<<A[5]<<A[6]<<A[7]<<A[8];
std::cout << " " << counter << ":s permutaatio\n";
}
} while (std::next_permutation(A,A+9)); 						                     
// kunnes kaikki permutaatiot on käyty läpi
std::cout << "\n Ratkaisuja yhteensä: " << counter2 << "\n";
return 0;                    								                             
// suljetaan ohjelma
}
