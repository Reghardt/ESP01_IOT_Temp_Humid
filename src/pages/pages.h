
#ifndef PAGES_H
#define PAGES_H

#include <Arduino.h>



String connect_html = "<!DOCTYPE html><html lang=\"en\" style=\"width: 100%;\"><head><meta charset=\"UTF-8\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0 shrink-to-fit=no\"><title>Document</title></head><body style=\"margin: 0; padding: 5px; box-sizing: border-box; width: 100%; font-family: system-ui, -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;\"><div style=\"display: flex; flex-direction: column; align-items: center;\"><h3>WiFi Setup</h3><p style=\"text-align: center; text-wrap: balance\">Type the name and password of the WiFi hotspot the unit should connect to.</p><form action=\"http://localhost:8000/api/connect\" style=\" display: flex; flex-direction: column; gap: 10px;\"><div style=\"display: flex; flex-direction: column;\"><label for=\"hotspot_name\">Hotspot Name:</label><input type=\"text\" id=\"hotspot_name\" name=\"hotspot_name\" style=\"height: 25px; font-size:medium\"></div><div style=\"display: flex; flex-direction: column;\"><label for=\"hotspot_pass\">Hotspot Password:</label><input type=\"text\" id=\"hotspot_pass\" name=\"hotspot_pass\" style=\"height: 25px; font-size:medium\"></div><input type=\"submit\" style=\"margin-top: 16px; height: 32px;\" value=\"Connect\"></input></form></div></body></html>";
String connectionError_html = "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"><title>Document</title></head><body>Connection Error</body></html>";
String connectionSuccess_html = "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"><title>Document</title></head><body>Connection Success</body></html>";


#endif