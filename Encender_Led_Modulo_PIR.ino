/*************************************************Capitulo 9 - Sensor Infrarrojo PIR***********************************************
*                                                                                                                                 *
*     En este noveno capitulo aprenderemos a utilizar el sensor Infrarrojo PIR. Este es un dispositivo electronico optoelectrico  *                                                                      *
*  capaz de medir la radiacion electromagnetica infrarroja ya que todos los cuerpos emiten cierta cantidad de radiacion la cual   *
*  resulta ser invisible para nuestros ojos pero no para este sensor. El sensor esta compuesto por un Fototransistor que es el    *
*  encargado de recibir la luz infrarroja que rebota hacia abajo cuando encuentra un objeto, esta luz es emitida por un Diodo     *
*  LED Infrarrojo. A este conjunto se le llama optoacopladores. La difencia de el PIR es su campo de vision ya que este viene     *
*  cubierto con una capa que hace que tenga una vision de 180 grados                                                                                                                                *
*                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa arduino Uno                                                                                                             *
*  -1 Sensor Infrarrojo.                                                                                                          *
*  -1 LED                                                                                                                         *
*  -1 Resistencia de 1k ohm (Si no tienen de 1k pueden variar el valor entre 100 ohm a 2.2 K omh)                                 *
*  -Protoboard                                                                                                                    *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/ 

int sensorPIR = 12; //Declaramos la variable que usaremos para la entrada digital de nuestro sensor PIR
int led = 13;  //Declaramos la variable que usaremos para la salida digital de nuestro led

void setup(){ 
pinMode(13,OUTPUT); // Declaramos el pin 13 como salida del led   
pinMode(12,INPUT); // Declaramos el pin 12 como entrada del senror PIR
}
void loop(){
int valor = digitalRead(12); //Declaramos la variable valor y le asignamos la lectura digital del sensor PIR

if(valor == HIGH){ //Comparamos si el valor es un estado alto  
  while(valor == HIGH){ // Antirebote
  valor = digitalRead(12); 
  }
  digitalWrite(led,HIGH);
}
  while(valor == LOW){ //Si no detecta nada solo leera el valor del sensor PIR
  valor = digitalRead(12);  
  digitalWrite(led,LOW);
  }
}
