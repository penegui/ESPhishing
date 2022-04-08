int stationConnected = 0;
int stationPhished = 0;
int ledState = 0;
// settings.json

int whiteHat;
char ssid[32];
char password[64];
int channel;
int hidden;

char local_IPstr[16];
char local_MAC[20];
char gatewaystr[16];
char subnetstr[16];

char update_username[32];
char update_password[64];

char ftp_username[32];
char ftp_password[64];
int ftpenabled;
int esportalenabled;

String total;
String used;
String freespace;

int numStationsConnected;
int numStationsHaveConnected;
int listofConnectStations[8];

char stationIP[50];
char stationMac[32];
int stationID = 0;

const char *whiteHatDefault= "0";
const char *esportalenabledDefault = "1";

const char *ssidDefault= "esphishing";
const char *passwordDefault = "esphishing";
const char *channelDefault= "11";
const char *hiddenDefault = "1";

const char *local_IPDefault = "192.168.15.1";
const char *local_MACDefault = "00:E0:4C:26:AF:C7";
const char *gatewayDefault = "192.168.15.1";
const char *subnetDefault = "255.255.255.0";

const char *update_usernameDefault = "esphishing";
const char *update_passwordDefault = "esphishing";

const char *ftp_usernameDefault = "esphishing";
const char *ftp_passwordDefault = "esphishing";
const char *ftpenabledDefault = "1";



const char *whiteHatAttack =  "0";
const char *ssidAttack = "esphishing";
const char *passwordAttack = "senha";
const char *channelAttack = "11";
const char *hiddenAttack = "1";
const char *local_IPAttack =  "192.168.15.1";
const char *local_MACAttack =  "00:E0:4C:26:AF:C7";
const char *gatewayAttack =  "192.168.15.1";
const char *subnetAttack =  "255.255.255.0";
const char *update_usernameAttack =  "esphishing";
const char *update_passwordAttack =  "esphishing";
const char *ftp_usernameAttack =  "esphishing";
const char *ftp_passwordAttack =  "esphishing";
const char *ftpenabledAttack =  "1";
const char *esportalenabledAttack =  "1";
