#ifndef DEAUTH_H
#define DEAUTH_H

void start_deauth(int wifi_number, int attack_type, uint16_t reason);
void stop_deauth();

extern int eliminated_stations;
extern int deauth_type;

#endif