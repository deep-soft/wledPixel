#pragma once

//// MQTT settings ////
bool mqttEnable           = true;
String mqttServerAddress  = "192.168.0.1";
uint16_t mqttServerPort   = 1883;
String mqttUsername       = "mqtt_user";
String mqttPassword       = "mqtt_pass";
long lastReconnectAttempt = 0;

/// GLOBAL ///
char const *wifiAPpassword  = "12345678";

// Initialize NTP
String ntpServer = "192.168.0.1";
int8_t ntpTimeZone = 2;
