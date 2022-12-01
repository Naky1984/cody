// Prueba++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib.>
#include<time.h>
#include <string>
#include<windows.h>

using namespace std;
// Atributos del enemigo
int enemyHp = 1000;
int enemyDamage;
bool enemyIsAlive = true;
string EnemyName = "Pavon";

//Otro enemigo
int enemyTwoHp = 600;
int enemyTwoDamage;
string enemyNameTwo = "Conejero";
bool enemyTwoIsAlive = true;
// ATAQUE DE LOS DOS
int mix;
// atributos del heroe
string heroName;
int heroDamage;
int heroHp = 2000;
int swDam;
int magic;
int hit;
int magicMana = 1;
bool heroIsAlive = true;

// Atributos del juego
int chooseEnemy;
int chA;
int enemySelection;



// EMPIEZA LA HISTORIA CON FUNCIONES 

 // esto es la aparicion del enemigo donde sale el nombre y sus atributos.
 // Tambien introducimos el nombre del heroe
void startGame() {
    Sleep(500);
    cout << "El enemigo, con esa cara maliciosa y despojado de sentimientos humanos, decide aparecer,\n" << EnemyName << " Su nombre representa la encarnacion del mal\n" "curtido en muchas batallas, nuestro villano tiene estos puntos de vida " << enemyHp << "\n";
    Sleep(500);
    cout << "Pero todo villano tiene su opuesto, en este caso es un gran Heroe, y como todo Heroe merece un gran nombre \n\n";
    Sleep(500); 
    cout << "Ponle un nombre a nuestro heroe querido Player.\n";
    Sleep(500);  
    cin >> heroName;
    cout << "El nombre del heroe es " << heroName << "\n\n";
    Sleep(500);
}



//ELECCION DE ARMA 
void selA() {

    cout << "Espadon [1], Magia de la buena [2] o manotazo [3]\n";
   
}





// ATAQUES DE HEROE

int heroA() {
    return enemyHp - heroDamage;
}

int heroA2() {
    return enemyTwoHp - heroDamage;
}




// ATAQUES DEL ENEMIGO UNO


int enemyOne(int enemyDamage) {
    
    
    return heroHp - enemyDamage;    
}









//ATAQUES DEL ENEMIGO DOS

int enemyTwo(int enemyTwoDamage) {
    
    
    return heroHp - enemyTwoDamage;
}



// ATAQUE DE LOS DOS

int enemyMix(int mix) {
       
    return heroHp - mix;
}









//BOOLEANOS DE SI ESTA VIVO EL HEROE

bool herolive() {
    if (heroHp > 0) {
        return true;
        //heroIsAlive = true;
    }
    else {
        heroHp <= 0;
        return false;
        
       // heroIsAlive = false;
    }
}








//BOOLEANOS DE SI EL ENEMIGO PAVON ESTA VIVO

bool pavonLive() {
    if (enemyHp > 0) {
        return true;
       // enemyIsAlive = true;

    }
    else {
        enemyHp <= 0;
        return false;
       // enemyIsAlive = false;
    }

}






//BOOLEANOS SI ENEMIGO CONEJERO ESTA VIVO

bool conejeroLive() {
    if (enemyTwoHp > 0) {
        return true;
        //enemyTwoIsAlive = true;
    }
    else {
        return false;
        enemyTwoHp <= 0;
        //enemyTwoIsAlive = false;
    }

}



int fChooseEnemy() {
    chooseEnemy = 0;
    while(chooseEnemy !=1 && chooseEnemy != 2){
        cout << "Escoge al enemigo que quieres atacar, Pavon[1] o Conejero[2].\n";
        Sleep(500);
        cin >> chooseEnemy;
        if (chooseEnemy != 1 && chooseEnemy != 2) {
            cout << "La opcion introducida es incorrecta. Por favor, selecciona una opcion valida.\n";
        }
    }
    return chooseEnemy;
}




int main()
{
    srand(time(NULL));
   
    enemyDamage = (100 + rand() % (150 - 100));
    enemyTwoDamage = 50 + rand() % (100 - 50);
    mix = (200 + rand() % (300 - 200));

    // Empieza la pelea

    startGame();

   // Empezamos con los  condicionales de esta pelea

    if (enemyIsAlive && heroIsAlive) {
        Sleep(500);
        cout << "En cuanto sus miradas se cruzaron, nuestro heroe saco su espada de adamantio\n" "y estaba dispuesto a romperle el orto al enemigo. Pon los puntos de damage que le quieres hacer a Pavon\n";
        Sleep(500);
        cin >> heroDamage;
        enemyHp = heroA();
        cout << "Despues de este ataque destructivo y con la cabeza sangrando, a Pavon le quedan esto puntos de vida puntos de vida " << enemyHp << " \n";
        enemyIsAlive = pavonLive();
    }
    

    //"Si no" la pelea se acaba con pavon pero sigue con conejero
   
   if(enemyIsAlive==false) {
        enemyHp <= 0;
        enemyIsAlive = false;

        cout << "ZAKATRUSKA! menudo golpetazo. Apenas tuvo tiempo a reaccionar cuando ya estaba hundido en el suelo y su alma en el infierno\n";
       
    }
    
   

   

    // Si sigue vivo la pelea continua
    
    
    if (enemyIsAlive && heroIsAlive) {
        
        Sleep(500);
        cout << "El enemigo no se iba a quedar parado y va con su melena al viento hacerle pupita a nuestro heroe\n";
        Sleep(500);
        heroHp = enemyOne(enemyDamage);
        Sleep(500);
        cout << "El cruel y despiadado " << EnemyName << " Te a hecho estos puntos de damage " <<enemyDamage<< " \n" "y te quedan estos puntos de vida " << heroHp << " \n";
        Sleep(500);
        cout << "\n";



        //CONDICIONES DE VIDA
        
        
    if (heroHp >= 1800 && (enemyIsAlive)) {
            Sleep(500);
            cout << "Buahh, golpes de insecto. Eres insignificante ante mi poder\n";
            Sleep(500);
    }
        
        Sleep(500);
        cout << "Nuestro heroe sabia que la batalla no iba a ser facil. Cogio aire y cargo con todo\n" "Cuantos puntos de damage quieres hacer a " << EnemyName << " ?\n";
        Sleep(500);
        cin >> heroDamage;
        enemyHp = heroA();
        Beep(1500, 700);
        Sleep(500);
        cout << "A nuestro maligno enemigo le quedan estos puntos de vida " << enemyHp << " \n\n";
        Sleep(500);
        enemyIsAlive = pavonLive();
    }








    //Aqui entra en accion otro enemigo. Condicion de  enemigo 1 sigue vivo o enemigo 2 esta vivo

    if (heroIsAlive && (enemyIsAlive || enemyTwoIsAlive)) {
        Sleep(500);
        cout << "Nadie sospechaba que nuestro malvado enemigo tenia un aliado. su nombre es " << enemyNameTwo << "\n" "y tiene estos hp " << enemyTwoHp << " de vida\n";
        Sleep(500);
        cout << "\nSin pensarlo dos veces nuestro heroe se dispuso a atacar a este otro villano que aun lucia peor que el primero.\n""Cuanto damage quieres hacer al enemigo Conejero?\n";
        Sleep(500);
        cin >> heroDamage;
        enemyTwoHp = heroA2();
        Sleep(500);
        cout << "El golpe le causo estos puntos "<<heroDamage<<" La vida de Conejero bajo drasticamente " << enemyTwoHp << " \n\n";
        Sleep(500);
        enemyTwoIsAlive = conejeroLive();
    }
    if (enemyTwoHp > 0) {
        Sleep(500);
        
        cout << "Aunque su apariencia oscura  era peor que la de Pavon, nuestro nuevo enemigo era muy debil\n";
        Sleep(500);
    }
    else
    {
        enemyTwoHp = 0;
        enemyTwoIsAlive = false;
        Sleep(500);
        cout << "Conejero salio disparado contra un muro, destrozado ya no puedo levantarse mas y cerro los ojos\n";
        Sleep(500);
    }








    // Esto solo pasa si el enemigo uno esta muerto

    if (enemyIsAlive == false && (enemyTwoIsAlive && heroIsAlive)) {
        Sleep(500);
        cout << "Con ojos dubitativos " << enemyNameTwo << " sabia que le iba a ser dificl luchar a el solo\n";
        Sleep(500);
        cout << "Lleno de rabia por la muerte de su mentor, cargo contra nuestro heroe\n";
        Sleep(500);
        heroHp = enemyTwo(enemyTwoDamage);
        Sleep(500);
        cout << "A nuestro heroe le han hecho " << enemyTwoDamage << " y le quedan estos hp de vida " << heroHp << " \n\n";
        Sleep(500);
    }
    if (enemyIsAlive == false && (enemyTwoIsAlive && heroIsAlive)) {
        Sleep(500);
        cout << "Cansado de la pelea y con sangre por todo su cuerpo, el heroe se preparo para su ultimo ataque\n";
        Sleep(500);
        cin >> heroDamage;
        enemyTwoHp = heroA2();
        Sleep(500);
        cout << "malherido " << enemyNameTwo << " le quedan ahora estos puntos de hp de vida " << enemyTwoHp << "\n\n";
        Sleep(500);
        enemyTwoIsAlive = conejeroLive();
    }

    //Si el enemigo 2 muere la pelea termina
if (enemyTwoHp > 0) {
        enemyTwoHp > 0;
        enemyTwoIsAlive = true;
        Sleep(500);
        cout << "El enemigo Conejero es muy peleon y quiere mas sangre \n\n";
        Sleep(500);
    }
      
    if (enemyIsAlive == false && (enemyTwoIsAlive && heroIsAlive)) {
        Sleep(500);
        cout << "Medio inconsciente por el ataque, el enemigo conejero sabia que era su final\n";       
        Sleep(500);
        cout << "Nuestro heroe, impresionado por el aguante de nuestro enemigo, reconocio su determinacion\n";
        Sleep(500);
        cout << "y se propuso a darle el remate final\n";
        Sleep(500);
        cout << "Levanto la espada y con un tajo seco le hizo estos puntos de damage \n";
        Sleep(500);
        cin >> heroDamage;
        enemyTwoHp = heroA2();
        Sleep(500);
        cout << "El golpe fue de "<<heroDamage<<" Ahora los puntos de vida de conejero eran " << enemyTwoHp << "\n";
        Sleep(500);
        enemyTwoIsAlive = conejeroLive();
    }

    if (enemyTwoHp <= 0) {
        enemyTwoHp = 0;
        enemyTwoIsAlive = false;
        cout << "La pelea con el debilucho acabo por fin!\n";
    }









    // Esto sucede si el enemigo Conejero esta muerto

    if (enemyTwoIsAlive == false && (heroIsAlive && enemyIsAlive)) {
        Sleep(500);
        cout << "Pavon no creia que su pupilo habia caido tan pronto.Inundado por la ira empezo atacar sin cuartel\n";
        Sleep(500);
        heroHp = enemyOne(enemyDamage);
        cout << "El heroe sorprendido por los ataques devastadores de Pavon,que fueron un total de\n" << enemyDamage << " puntos y le quedaba esta vida " << heroHp << " \n\n";
        Sleep(500);
        cout << "Le dolian todos los huesos del cuerpo pero sabia que si se rendia, dejaria el mundo en malas manos\n";
        Sleep(500);
        cout << "Con ese sentimiento y pensando en toda la gente que queria, le lanzo la espada directamente al cuello de Pavon\n";
        Sleep(500);
        cout << "La espada llevaba tal potencia que le hizo esto de damage\n";
        Sleep(500);
        cin >> heroDamage;
        enemyHp = heroA();
        cout << "Le ha hecho esto de damage "<<heroDamage<< " Ahora le quedan esto puntos de vida al condenado" <<enemyHp<< " \n\n";
        Sleep(500);
        enemyIsAlive = pavonLive();      
    }

    if (enemyHp > 0) {
        enemyIsAlive = true;
        Sleep(500);
        cout << "La pelea debe seguir. Vamos querido heroe! no te rindas\n\n";
        Sleep(500);

    }
    else {
        enemyIsAlive = false;
        Sleep(500);
        cout << "El ataque fue certero. Su ultimo anhelo desaparecia con su vida\n";
        Sleep(500);
        cout << "\n";
    }
    
    
    
    
    
    if (enemyTwoIsAlive == false && (enemyIsAlive)) {
        Sleep(500);
        cout << "Ahora le tocaba a Pavon contratacar. Tenia una sonrisa en su boca y parecia poseido por un saiyajin\n";
        Sleep(500);
        heroHp = enemyOne(enemyDamage);
        Sleep(500);
        cout << "MALDITOOOO!! Eso ha dolido. He recibido " << enemyDamage << " y me quedan estos puntos de vida " << heroHp << " \n";
        Sleep(500);





        // CONDICION DE VIDA DE MI HEROE MIENTRAS DURA LA PELEA CON PAVON.

        if (heroHp > 1500) {
            cout << " Creo que esto va a ser pan comido...\n";
        }






        // SIGUE LA PELEA CON PAVON.   EL ENEMIGO CONEJERO MUERTO

    }if (heroIsAlive && enemyIsAlive && (enemyTwoIsAlive == false)) {
        Sleep(500);
        cout << "Querido lector, ya se que disfrutas pero venga dale un golpe de gracia o esto no acaba nunca \n";
        Sleep(500);
        cin >> heroDamage;
        enemyHp = heroA();
        cout << "Espero que lo hayas matado porque sino el juego ya no tiene sentido.\n";
        Sleep(500);  
        cout << "el ataque le ha hecho esto: " << heroDamage << " y le queda esto de vida " << enemyHp << " \n\n";
        Sleep(500);
        enemyIsAlive = pavonLive();
        
        
        if (heroHp > 1800) {
            Sleep(500);
            cout << "No sois nada comparados con mi poder\n";
            Sleep(500);
        }

    }if (enemyIsAlive==false) {
        enemyHp = 0;
        enemyIsAlive = false;
        Sleep(500);
        cout << "Grandeeee, bien hecho! :) \n";
        Sleep(500);
    }









    // AQUI SI LOS DOS ENEMIGO ESTAN MUERTOS

    if (heroIsAlive && (enemyIsAlive == false && enemyTwoIsAlive == false))
    {
        //CONDICIONES DE VIDA
        if (heroHp >= 2000) {
            cout << "Bostezando pensaba que habia sido muy facil. El entrenamiento dio sus frutos\n";
            cout << "\n";
        }
        else if (heroHp > 1900) {
            cout << "Que tristeza de persona..\n";
            cout << "\n";
        }
        else if (heroHp > 1800) {
            cout << "No sois nada comparados con mi poder\n";
            cout << "\n";
        }
        else if (heroHp > 1700) {
            cout << "Por que no lo dejais de una vez? dais pena..\n";
            cout << "\n";
        }
        else if (heroHp > 1600) {
            cout << "Esto no es nada comparado con lo que he tenido que entrenar\n";
            cout << "\n";
        }
        else if (heroHp > 1500) {
            cout << "Ha costado un poco pero esto ya estaba solucionado. La gente podra dormir tranquila\n";
            cout << "\n";
        }




        // Aqui hago un comentario que si los dos enemigos mueren el heroe salga triunfante
        
        
        
        Sleep(500);
        cout << "Nuestro heroe se alza triunfante, se queda reflexivo mirando los cuerpos\n";
        Sleep(500);
        cout << "da media vuelta y con la luz del alba se marcha hacia un nuevo destino\n";
        Sleep(500);
    }











    // "Sino" la pelea sigue y ahora me atacan los dos a la vez

    if (heroIsAlive && enemyIsAlive && enemyTwoIsAlive) {
        Sleep(500);
        cout << "Los muy villanos se alian para darte por todas las diagonales. Sin verlas venir te hacen\n";
        Sleep(500);

        heroHp = enemyMix(mix);
        Sleep(500);
        cout << enemyDamage + enemyTwoDamage << " puntos de damage y te quedan estos puntos de vida " << heroHp << " \n\n";
        Sleep(500);


        // CONDICIONALES DE VIDA


        if (heroHp >= 1700 && (enemyIsAlive || enemyTwoIsAlive)) {
            Sleep(500);
            cout << "MMMM eso me ha dolido algo, pero lo escondo con cara de poker\n\n";
            Sleep(500);
        }
        else if (heroHp >= 1600 && (enemyIsAlive || enemyTwoIsAlive)) {
            Sleep(500);
            cout << "Es hora de ponerse serio o esto puede ir a peor\n\n";
            Sleep(500);
        }
        else if (heroHp >= 1500 && (enemyIsAlive || enemyTwoIsAlive)) {
            Sleep(500);
            cout << "MAMONESSSSS, me tenis harto! os vais a CAGAR\n\n";
            Sleep(500);
        }
        Sleep(500);
        cout << "Dolorido y con su armadura hecha un trapo, nuestro heroe seguia en pie \n";
        Sleep(500);

      heroIsAlive = herolive();
    }
    if (heroHp <= 0) {
        heroHp <= 0;
        heroIsAlive = false;
        Sleep(500);
        cout << "El magnifico heroe ha muerto. La pelea ha terminado\n";
        Sleep(500);
    }
    if (enemyIsAlive && enemyTwoIsAlive) {
        Sleep(500);
        cout << "Yabadabaduuuuu Sigo vivo malpariooossss!!! ahora vais a sentir el miedo de verdad JO JO JO \n\n";
        Sleep(500);
    }



    // Vamos con la parte en que tenemos que elegir si atacar a uno o a otro
    Sleep(500);
    cout << "La pelea es cuando se pone seria de verdad\n";
    Sleep(500);
    cout << "\n";

   
    
    
    
    
    
    
    
    while (heroIsAlive && (enemyIsAlive && enemyTwoIsAlive)) {
        srand(time(NULL));
        enemyDamage = (100 + rand() % (150 - 100));
        enemyTwoDamage = 50 + rand() % (100 - 50);
    

        // Aqui pondremos los daños aleatorios del heroe en espada,magia, y puñetazo
       
        
        int swDam = 75 + rand() % (140 - 75);
        int magic = 150 + rand() % (200 - 150);
        int hit = 30 + rand() % (60 - 30);
        
        //AQUI HAGO UN SWITCH PARA INDICAR A QUE ENEMIGO ESCOGER
        
        Sleep(500);


        switch (fChooseEnemy())
        {


         // AQUI ESCOJO AL ENEMIGO PAVON
        case 1:
            Sleep(500);
            cout << "Has escogido a Pavon. Vas a tener que elegir con que quieres atacar\n";         
            Sleep(500);


           

         // OTRO SWITCH PARA ELEGIR CON QUE ATACAR

            selA();
            Sleep(500);
            cin >> chA;
           
            switch (chA)
            {

                //ELIJO ESPADA
            case 1:
                Sleep(500);
                cout << "Has elegido el espadon y estos son los puntos de damage \n";
                Sleep(500);               
                enemyHp = enemyHp - swDam;
                Sleep(500);
                cout << swDam << " y le quedan estos puntos de vida " << enemyHp << " \n";
                Sleep(500);
                break;


                // ELIJO MAGIA
            case 2:
                Sleep(500);
                cout << "Has elegido la magia y estos son los puntos de damage \n";
                Sleep(500);             
                if (magicMana > 0) {
                    Sleep(500);
                    cout << "Han salido rayos de Sith!\n";
                    Sleep(500);
                    magicMana = magicMana - 1;
                    enemyHp = enemyHp - magic;
                    Sleep(500);
                    cout << magic << " y le quedan estos puntos de vida " << enemyHp << " \n";
                    Sleep(500);
                    
                }
                else {
                    Sleep(500);
                    cout << "De tanta concentracion y fuerza, se me escapo un pedo. Que ridiculo mas grande, no le he hecho nada\n";
                    Sleep(500);
                    
                }
                break;


             // ELIJO NUDILLOS
            case 3:
                Sleep(500);
                cout << "Has elegido tus nudillos y estos son los puntos de damage \n";
                Sleep(500);
               
                enemyHp = enemyHp - hit;
                Sleep(500);
                cout << hit << " y le quedan estos puntos de vida " << enemyHp << " \n";
                Sleep(500);
               
                break;
            default:
                Sleep(500);
                cout << " Sigue la historia como dios manda querido lector\n";
                Sleep(500);
                
                break;
            }if (enemyHp <= 0) {
                enemyHp = 0;
                enemyIsAlive = false;
                Sleep(500);
                cout << "acabado y enterrado, el vivo al bollo y el muerto al hoyo. Quien toca ahora?\n";
                Sleep(500);
               
            }
            else {
                Sleep(1100);
                cout << "Ahora Pavon se retira para un descanso, mientras yo ataco al otro \n\n";
                Sleep(1100);
                
            }



            // ESTO SUCEDE CUANDO ATACO AL ENEMIGO 1 PAVON. EL ME DEVUELVE EL GOLPE
            if (heroIsAlive && enemyIsAlive) {
                Sleep(500);
                cout << "Que mala pata la del heroe no acabar la pelea antes! cansado sabia lo que se le venia encima\n";
                Sleep(500);
               
                Sleep(500);
                cout << EnemyName << " se prepara y ahi va el ataque!\n";
                Sleep(500);
                
                heroHp = enemyOne(enemyDamage);
                Sleep(500);
                cout << "Ayyy que dolor mas doloroso gritaba el heroe. El moscardon me ha hecho esto de pupa\n";
                Sleep(500);
                
                Sleep(500);
                cout << enemyDamage << " y ahora me quedan " << heroHp << " puntos de vida\n\n";
                Sleep(500);
                







                //Aqui pongo condiciones de vida, Si al heroe le va bajando la vida van sucediendo estas opciones

                if (heroHp > 1500 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "tenia la armadura fatal, tambien heridas por todo el cuerpo y alguna herida profunda pero puedo con todo!\n\n";
                }
                else if (heroHp > 1300 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Esto esta siendo intensito.. quien dijo que iba a ser facil?\n\n";
                }
                else if (heroHp > 1000 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Eran mas resistentes de lo que creia y me estan haciendo papilla!\n\n";
                    cout << "Pavon con su ataque de pelo principesco y conejero con sus vilezas\n\n";
                }
                else if (heroHp > 800 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Empezaban los mareos y las nauseas. Chorreaba sangre, pero tengo un deber para con todos\n\n";
                }
                else if (heroHp > 600 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Estos adversarios son temibles, tengo heridas que no se si podre llegar a curar... se acerca mi muerte?\n\n";
                }
                else if (heroHp > 400 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Sangre a montones y perdidas de conocimiento..no me daban un respiro. En mi mente se arremolinan muchos pensamientos\n\n";
                }
                else if (heroHp > 200 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Suerte que hice un testamento... Mi nombre se recordara en la historia?\n\n";
                }
                else if (heroHp <= 100 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Me han destrozado el brazo izquierdo y la pierna derecha pero pienso seguir hasta las ultimas consecuencias\n\n";

                }
                else if (heroHp <= 50 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Estoy tendido en el suelo, bajo mi espalda hay un charco de sangre, oigo risas pero ya no me importa\n\n";
                    cout << "Con las pocas fuerzas que me quedan, intento cantar mi cancion favorita\n\n";
                    cout << "Que sera que sera que seraaaaa. Que sera de mi vida que seraaaaaa.....\n\n";

                }
                else if (heroHp <= 0 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Sangre y un cuerpo mutilado es lo que quedaba de nuestro querido heroe. Rip\n\n";
                }
                heroIsAlive = herolive();
               
                if (heroIsAlive==false) {
                    heroHp = 0;
                    heroIsAlive = false;
                    cout << "La pelea llego a su fin y nuestro maravilloso heroe ha sido vencido\n";

                }
                else {

                    cout << "La pelea sigue y hay que darle un final! no te despistes \n";
                }
            }
            break;




         //ESTO ESTA DENTRO DE MI SWITCH PRINCIPAL Y AQUI ELIGO AL ENEMIGO 2
        

case 2:
            Sleep(500);
            cout << "Has elegido a conejero. Al pobre se le ponen los pelos de punta\n";
            Sleep(500);
            ;
            Sleep(500);
            cout << "Vas a tener que elegir con que quieres atacar\n";
            Sleep(500);
           


            // VUELVO HACER OTRO SWITCH PARA QUE PUEDA ELEGIR CON QUE ATACAR

            Sleep(500);
            selA();
            Sleep(500);           
            cin >> chA;
            switch (chA)
            {


                //ELIJO ESPADA


            case 1:
                Sleep(500);
                cout << "Has elegido el espadon y estos son los puntos de damage\n";
                Sleep(500);
                
                enemyTwoHp = enemyTwoHp - swDam;
                Sleep(500);
                cout << swDam << " y le quedan estos puntos de vida " << enemyTwoHp << " \n";
                Sleep(500);
                
                break;


              // ELIJO MAGIA


            case 2:
                Sleep(500);
                cout << "Has elegido la magia y estos son los puntos de damage\n";
                Sleep(500);
               
                if (magicMana > 0) {
                    Sleep(500);
                    cout << "Han salido rayos de Sith!\n";
                    Sleep(500);
                    magicMana = magicMana - 1;
                    enemyTwoHp = enemyTwoHp - magic;
                    Sleep(500);
                    cout << magic << " y le quedan estos puntos de vida " << enemyTwoHp << " \n";
                    Sleep(500);
                    
                }
                else {
                    Sleep(500);
                    cout << "De tanta concentracion y fuerza, se me escapo un pedo. Que ridiculo mas grande, no le he hecho nada\n";
                    Sleep(500);
                }
                break;

               
                // ELIJO NUDILLOS


            case 3:
                Sleep(500);
                cout << "Has elegido tus nudillos y estos son los puntos de damage \n";
                Sleep(500);                
                enemyTwoHp = enemyTwoHp - hit;
                Sleep(500);
                cout << hit << " y le quedan estos puntos de vida " << enemyTwoHp << " \n";
                Sleep(500);            
                break;


            default:
                Sleep(500);
                cout << "Elige bien el ataque y deja de estropear la historia\n\n";
                Sleep(500);
                
                break;
            }if (enemyTwoHp <= 0) {
                enemyTwoIsAlive = false;
                Sleep(500);
                cout << "Muerto y acabado, nuestro heroe va a Pavon si sigue vivo \n\n";
                Sleep(500);
               
            }
            else {
                Sleep(500);
                cout << "Con la lagrimilla en los ojos mira desesperadamente a su socio para ver si le ayuda \n\n";
                Sleep(500);
                
            }

            // ESTO SUCEDE  CUANDO ATACO AL ENEMIGO 2. EL ME DEVUELVE EL GOLPE
            if (heroIsAlive && enemyTwoIsAlive) {
                Sleep(500);
                cout << "Que mala pata la del heroe no acabar la pelea antes! cansado sabia lo que se le venia encima\n";
                Sleep(500);
                
                Sleep(500);
                cout << enemyNameTwo << " se prepara y ahi va el ataque!\n";
                Sleep(500);
                
                heroHp = enemyTwo(enemyTwoDamage);
                Sleep(500);
                cout << "Ayyy que dolor mas doloroso gritaba el heroe. El moscardon me ha hecho esto de pupa\n";
                Sleep(500);
                
                Sleep(1100);
                cout << enemyDamage << " y ahora me quedan " << heroHp << " puntos de vida\n\n";
                Sleep(500);
                







                //Aqui pongo condiciones de vida, Si al heroe le va bajando la vida van sucediendo estas opciones

                if (heroHp > 1500 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "tenia la armadura fatal, tambien heridas por todo el cuerpo y alguna herida profunda pero puedo con todo!\n\n";
                }
                else if (heroHp > 1300 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Esto esta siendo intensito.. quien dijo que iba a ser facil?\n\n";
                }
                else if (heroHp > 1000 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Eran mas resistentes de lo que creia y me estan haciendo papilla!\n\n";
                    cout << "Pavon con su ataque de pelo principesco y conejero con sus vilezas\n\n";
                }
                else if (heroHp > 800 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Empezaban los mareos y las nauseas. Chorreaba sangre, pero tengo un deber para con todos\n\n";
                }
                else if (heroHp > 600 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Estos adversarios son temibles, tengo heridas que no se si podre llegar a curar... se acerca mi muerte?\n\n";
                }
                else if (heroHp > 400 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Sangre a montones y perdidas de conocimiento..no me daban un respiro. En mi mente se arremolinan muchos pensamientos\n\n";
                }
                else if (heroHp > 200 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Suerte que hice un testamento... Mi nombre se recordara en la historia?\n\n";
                }
                else if (heroHp <= 100 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Me han destrozado el brazo izquierdo y la pierna derecha pero pienso seguir hasta las ultimas consecuencias\n\n";
                }
                else if (heroHp <= 50 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Estoy tendido en el suelo, bajo mi espalda hay un charco de sangre, oigo risas pero ya no me importa\n";
                    cout << "Con las pocas fuerzas que me quedan, intento cantar mi cancion favorita\n";
                    cout << "Que sera que sera que seraaaaa. Que sera de mi vida que seraaaaaa.....\n\n";
                }
                else if (heroHp <= 0 && (enemyIsAlive || enemyTwoIsAlive)) {
                    cout << "Sangre y un cuerpo mutilado es lo que quedaba de nuestro querido heroe. Rip\n";
                }
                heroIsAlive = herolive();

                if (heroHp > 0) {
                    heroIsAlive = true;
                    cout << "La pelea sigue y hay que darle un final! no te despistes \n";
                }
                else {
                    heroIsAlive = false;
                    cout << "La pelea llego a su fin y nuestro maravilloso heroe ha sido vencido";
                }
            }

        }




        //Aqui pongo si el enemigo 1 PAVON esta vivo y el heroe tambien

        if (heroIsAlive && enemyIsAlive && (enemyTwoIsAlive == false))
        {
            Sleep(500);
            cout << "Enfurecido por la muerte de su camarada.Nose como pero Pavon saco el FUA de su interior \n";
            Sleep(500);
            heroHp = enemyOne(enemyDamage);
            Sleep(500);
            
            cout << enemyDamage << " Auuuu mala bestiaaa! como osas. Mi vida ahora es esta " << heroHp << " \n";
            Sleep(500);
            heroIsAlive = herolive();

            if (heroHp > 0) {
                heroIsAlive = true;
                Sleep(500);
                cout << "La pelea sigue con Pavon para darle un final a esto \n";
                Sleep(500);
                
            }
            else {
                heroIsAlive = false;
                Sleep(500);
                cout << "La pelea llego a su fin y nuestro maravilloso heroe ha sido vencido";
                Sleep(500);
                
            }
        }
        if (heroIsAlive && enemyIsAlive && (enemyTwoIsAlive == false)) {
            Sleep(500);
            cout << "Bastardo! como te atreves! ahora pillas! este es el golpe que te llevas\n";
            Sleep(500);           
            cin >> heroDamage;
            enemyHp = heroA();
            Sleep(500);
            cout << "se ha llevado un golpe de mil demonios " << heroDamage << " y le queda esto de vida: " << enemyHp << " \n";
            Sleep(500);
            
           enemyIsAlive = pavonLive();

            if (enemyHp <= 0)
            {
                enemyHp = 0;
                enemyIsAlive = false;
                Sleep(500);
                cout << "AUUUU aullo como un lobo maldito y chorreando sangre por su boca y bien empalado murio";
                Sleep(500);
                cout << "\n";
            }

            else {
                Sleep(500);
                cout << "Esto sigue pero no por mucho mas tiempo\n";
                Sleep(500);
                cout << "\n";
            }
        }if (heroIsAlive && enemyIsAlive && (enemyTwoIsAlive == false))
        {
            Sleep(500);
            cout << "Pavon estaba cansado tambien y queria finalizar esto. Se dispuso hacer su ultimo ataque llamado, 'ATAQUE DE PELO PAVON'\n";
            Sleep(500);           
            heroHp = enemyOne(enemyDamage);
            cout << "menudo ataque, de donde sacaba semejante melena? ... me ha hecho esto: " << enemyDamage << " y me queda esto de vida " << heroHp << " \n";
            Sleep(500);

           heroIsAlive = herolive();


            if (heroHp > 0) {
                heroIsAlive = true;
                Sleep(500);
                cout << "Losiento por ti. pero ha llegado tu final \n";
                Sleep(500);
                cout << "\n";
            }
            else {
                heroIsAlive = false;
                Sleep(500);
                cout << "La pelea llego a su fin y nuestro maravilloso heroe ha sido vencido\n";
                Sleep(500);
                cout << "\n";
            }
        }
        if (heroIsAlive && enemyIsAlive && (enemyTwoIsAlive == false)) {
            Sleep(500);
            cout << "Este tambien sera mi ataque final, asi que preparate. Pon el damage\n";
            Sleep(500);
            cin >> heroDamage;
            enemyHp = heroA();
            Sleep(500);
            cout << "Pavon recibio este golpetazo: " << heroDamage << " y le quedan estos puntos de vida" << enemyHp << " \n\n";
            Sleep(500);

            if (enemyHp <= 0)
            {
                enemyHp = 0;
                enemyIsAlive = false;
                Sleep(500);
                cout << "AUUUU!! aullo como un lobo maldito. Chorreando sangre por su boca y bien empalado murio\n";
                Sleep(500);
            }
            else {
                Sleep(500);
                cout << "Esto sigue pero no por mucho mas tiempo\n";
                Sleep(500);
               
            }
        }








        //El enemigo Conejero me ataca si pavon esta muerto

        if (heroIsAlive && enemyIsAlive == false && enemyTwoIsAlive == true)
        {
            Sleep(500);
            cout << "Pavon habia muerto y con eso solo me quedaba un enemigo. El mas debilucho de los dos... vamos heroe, a muerte a por el otro!\n\n";
            Sleep(500);
        }
        if (heroIsAlive && enemyTwoIsAlive && (enemyIsAlive == false)) {
            Sleep(500);
            cout << "Pero como es posible que este Don nadie me ataque? \n";
            Sleep(500);
            heroHp = enemyTwo(enemyTwoDamage);
            Sleep(500);
            cout << enemyTwoDamage << " Creo que deberia abrirle el craneo despues de lo que me ha hecho. puntos de vida: " << heroHp << " me quedan de vida\n\n";
            Sleep(500);
            heroIsAlive = herolive();
            if (heroHp > 0) {
                heroIsAlive = true;
                Sleep(500);
                cout << "La pelea sigue con Conejero que esta acojonao\n";
                Sleep(500);
            }
            else {
            heroIsAlive: false;
                Sleep(500);
                cout << "La pelea llego a su fin y nuestro maravilloso heroe ha sido vencido\n";
                Sleep(500);
            }
        }

        if (heroIsAlive && enemyIsAlive == false && enemyTwoIsAlive == true)
        {
            Sleep(500);
            cout << "El heroe enfadado y decidido atacaria con todo! pon el damage\n";
            Sleep(500);           
            cin >> heroDamage;
            enemyTwoHp = heroA2();
            Sleep(500);
            cout << "El devastador golpe que fue directo a su cara conejil le ha hecho esto: " << heroDamage << " y le quedan estos puntos de hp" << enemyTwoHp << " \n";           
            Sleep(500);
            enemyTwoIsAlive = conejeroLive();
            if (enemyTwoHp <= 0) {
                enemyTwoHp = 0;
                enemyTwoIsAlive = false;
                Sleep(500);
                cout << "Empalado y destrosaito conejero dejo de respirar\n";
                Sleep(500);
            }
            else {
                Sleep(500);
                cout << "Pues venga! seguimos la pelea\n";
                Sleep(500);
            }
        }
        
        if (heroIsAlive && enemyIsAlive == false && enemyTwoIsAlive == true) {
            cout << "Estoy sorprendido como has podido aguantar el ataque pero del proximo no te escapas..\n";
            cout << "Conejero fundido y tumbado en el suelo espera su final\n";
            cout << "Pon los puntos del ultimo ataque:\n\n";
            cin >> heroDamage;
            enemyTwoHp = heroA2();
            cout << "el golpe brutal fue de : " << heroDamage << " y ahora le quedan estos hp: " << enemyTwoHp << " \n";         
            enemyTwoIsAlive = conejeroLive();
            
            if (enemyHp <= 0)
            {
                enemyTwoHp = 0;
                enemyTwoIsAlive = false;
                cout << "cantidades de sangre salian de su cuerpo\n";
            }
            else {
                cout << "No puede ser. hay que seguir el guion querido player..";
            }
        }








        //ESTO OCURRE SI LOS DOS ENEMIGOS MUEREN O EL HEROE MUERE
        if (heroIsAlive && enemyIsAlive == false && enemyTwoIsAlive == false)
        {
            Sleep(500);
            cout << "No se esperaba menos de mi. Malherido me tumbe un rato en el campo de batalla junto a los cadaveres\n";
            cout << "No era el mejor lugar pero esque ya no podia mas. Creo que me cogere unas vacaciones cuando me recupere\n";
            cout << "Y hasta aqui la historia. Espero que te haya gustado querido Player\n";
            Sleep(500);
        }





        //ESTO OCURRE SI EL HEROE A MUERTO Y ELENEMIGO 1 TAMBIEN HA MUERTO
        if (heroIsAlive == false && enemyIsAlive == false && (enemyTwoIsAlive == true))
        {
            Sleep(500);
            cout << "Ahora que el heroe habia caido y mi maestro muerto creo que me dedicare a mi sueño\n";
            cout << "Montare una aerolinea y explotare al personal jaja\n";
            Sleep(500);
        }




        //ESTO OCURRE SI EL HEROE ESTA MUERTO Y EL ENEMIGO 2 ESTA MUERTO
        if (heroIsAlive == false && enemyIsAlive == true && (enemyTwoIsAlive == false))
        {
            Sleep(500);
            cout << "Ha sido una pelea dificil pero lo que me molesta es que ahora quien me va a abanicar por la noche, si mi pupilo esta muerto?\n";
            cout << "Bahh es igual encontrare a otro";
            Sleep(500);
        }





        // ESTO OCURRE SI EL HEROE A MUERTO
        if (enemyIsAlive && enemyTwoIsAlive && (heroIsAlive == false)) {
            Sleep(500);
            cout << "Malditas serpientes. Entre risas se marchan a su cueva para recuperarse y planear su proximo ataque\n";
            Sleep(500);
        }


    }

}

