#ifndef SETTINGS_PAGE_h
#define SETTINGS_PAGE_h

#include <Arduino.h>

const char settingsPage[] PROGMEM = R"=====(<!doctype html>
<html lang="en">
  <head>
    <link rel="icon" href="data:image/svg+xml,%3C%3Fxml version='1.0' encoding='UTF-8'%3F%3E%3C!DOCTYPE svg PUBLIC '-//W3C//DTD SVG 1.1//EN' 'http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd'%3E%3Csvg height='24' viewBox='0 0 24 24' width='24' xmlns='http://www.w3.org/2000/svg'%3E%3Cpath d='M3,9H7V5H3V9M3,14H7V10H3V14M8,14H12V10H8V14M13,14H17V10H13V14M8,9H12V5H8V9M13,5V9H17V5H13M18,14H22V10H18V14M3,19H7V15H3V19M8,19H12V15H8V19M13,19H17V15H13V19M18,19H22V15H18V19M18,5V9H22V5H18Z'/%3E%3C/svg%3E" type="image/svg+xml" />
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3" crossorigin="anonymous">
    <title>Wled-pixel</title>
  </head>
  <body>
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.0/jquery.min.js"></script>
  <header>
    <div class="px-3 py-2 bg-dark text-white">
      <div class="container">
        <div class="d-flex flex-wrap align-items-center justify-content-center justify-content-lg-start">
          <a href="/" class="d-flex align-items-center my-2 my-lg-0 me-lg-auto text-white text-decoration-none">
            <h1 class="mb-3 fw-bold font-monospace">wledPixel</h1>
          </a>

          <ul class="nav col-12 col-lg-auto my-2 justify-content-center my-md-0 text-small">
            <li>
                <a href="/" class="nav-link text-white">
                  Home
                </a>
              </li>
              <li>
                <span class="nav-link text-secondary">
                  Settings
                </span>
              </li>
              <li>
                <a href="/update" class="nav-link text-white">
                  Update firmware
                </a>
              </li>
          </ul>
        </div>
      </div>
    </div>
  </header>
  <div class="container">
    <main>
        <div class="py-5 text-center">
            <h2>Settings</h2>
            <p class="lead">The configuration page allows making changes in the settings on the fly. Using this page you can choose different device work modes.</p>
        </div>
        <div class="row g-5">
            <div class="col-md-5 col-lg-4 order-md-last">
              <h4 class="d-flex justify-content-between align-items-center mb-3">
                <span class="text-primary">Info</span>
              </h4>
              <ul class="list-group mb-3">
                <li class="list-group-item d-flex justify-content-between lh-sm">
                  <div>
                    <h6 class="my-0">wledPixel</h6>
                    <small class="text-muted">wledPixel dot led Display</small>
                  </div>
                  <span class="text-muted">%firmwareVer%</span>
                </li>
                <li class="list-group-item d-flex justify-content-between lh-sm">
                    <div>
                      <h6 class="my-0">Wifi SSID:</h6>
                    </div>
                    <span class="text-muted">%wifiSsid%</span>
                </li>
                <li class="list-group-item d-flex justify-content-between lh-sm">
                    <div>
                      <h6 class="my-0">Wifi IP:</h6>
                    </div>
                    <span class="text-muted">%wifiIp%</span>
                </li>
                <li class="list-group-item d-flex justify-content-between lh-sm">
                    <div>
                      <h6 class="my-0">Wifi Gateway:</h6>
                    </div>
                    <span class="text-muted">%wifiGateway%</span>
                </li>
                <li class="list-group-item d-flex justify-content-between lh-sm">
                    <div>
                      <h6 class="my-0">MQTT device prefix:</h6>
                    </div>
                    <span class="text-muted">%mqttDevicePrefix%</span>
                </li>
                <li class="list-group-item d-flex justify-content-between lh-sm">
                    <div>
                      <h6 class="my-0">ds18b20 Temperature:</h6>
                    </div>
                    <span class="text-muted">%ds18b20Temp%</span>
                </li>
              </ul>

              <h4 class="d-flex justify-content-between align-items-center mb-3">
                <span class="text-primary">Help</span>
              </h4>
              <div>
                    <h6 class="my-2">Font</h6>
                    <small class="text-muted"><b>Cyrillic</b> - compact neat font<br><b>Wled</b> - fundamental font<br><b>Default</b> - standard display library font</small>
              </div>
              <hr>
              <div>
                    <h6 class="my-2">Character spacing</h6>
                    <small class="text-muted">Distance between characters on the display. The default is exactly 1. It is useful to set 0 if you need to fit a lot of text on the display or you can use the Cyrillic font.</small>
              </div>
              <hr>
              <div>
                    <h6 class="my-2">Wall clock</h6>
                    <small class="text-muted">Clock mode. It has the following display options:
                        <br><b>yyyy.mm.dd HH:MM:SS</b> - Year.Month.Day Hours:Minutes:Seconds [2022.06.21 21:43:00]
                        <br><b>yyyy.mm.dd</b>          - Year.Month.Day [2022.06.21]
                        <br><b>dd.mm.yyyy</b>          - Day.Month.Year [21.06.2022]
                        <br><b>dd.mm aa</b>            - Day.Month weekday name (e.g., Sun) [21.06 Tue] <b>*</b><i>in Cyrillic font weekday name will be in Cyrillic</i>
                        <br><b>dd.mm</b>               - Day.Month [21.06]
                        <br><b>HH:MM:SS</b>            - Hours : Minutes : Seconds [21:43:54]
                        <br><b>HH:MM</b>               - Hours : Minutes [21:43]
                        <br><b>HH</b>                  - Hours [21]
                        <br><b>MM</b>                  - Minutes [43]
                        <br><b>aa</b>                  - weekday name (e.g., Sun) <b>*</b><i>in Cyrillic font weekday name will be in Cyrillic</i>
                        <br><b>dd.mm aa HH:MM</b>      - Day.Month weekday name Hours : Minutes (e.g., Sun) [21.06 Tue] [21:43] <b>*</b><i>in Cyrillic font weekday name will be in Cyrillic</i>
                        <br><br><b>Advice</b><br>In <b>HH:MM</b> and <b>HH:MM:SS</b> mode, two dots flash every second. For correct operation, it is recommended to set the <b>effectIN</b> and <b>OUT</b> to the value <b>NO_EFFECT</b>.
                    </small>
              </div>
              <hr>
              <div>
                    <h6 class="my-2">Open Weather map</h6>
                    <small class="text-muted">First, configure all the settings at the bottom of the page, and then turn on the work mode in the desired zone.
                        <br><br>A free API token allows you to make requests no more than once every <b>60 seconds</b>! Otherwise, your token will be <b>blocked</b> for 24 hours.
                        <br><br>Each zone makes its own request to the API, consider this when calculating the update interval (2 zones - 120 seconds, etc.)</small>
              </div>
              <hr>
              <div>
                    <h6 class="my-2">Home Assistant client</h6>
                    <small class="text-muted">Use a <a href="https://www.home-assistant.io/docs/authentication/">Long-lived access token</a>.
                    <br><br>Only display of sensor value is supported.
                    <br><br>Sensor ID copy from your Home Assistant (e.g. sensor.lumi_weather)</small>
              </div>
              <hr>
              <div>
                <h6 class="my-2">MQTT client</h6>
                <small class="text-muted">The following topics are supported:
                    <ul>
                      <li><b>devicePrefix/zone<i>N</i>/workmode</b> - zone work mode</li>
                        <ul><li>mqttClient</li>
                            <li>manualInput</li>
                            <li>wallClock</li>
                            <li>owmWeather</li>
                            <li>haClient</li>
                            <li>intTempSensor</li>
                        </ul>
                      <li><b>devicePrefix/zone<i>N</i>/scrolleffectIn</b> - scroll effect <b>IN</b></li>
                      <li><b>devicePrefix/zone<i>N</i>/scrolleffectOut</b> - scroll effect <b>Out</b></li><br>
                      <b>scrolleffectIn</b> and <b>scrolleffectOut</b> support next values:
                        <ul>
                          <li>PA_NO_EFFECT</li>
                          <li>PA_SCROLL_UP</li>
                          <li>PA_SCROLL_DOWN</li>
                          <li>PA_SCROLL_LEFT</li>
                          <li>PA_SCROLL_RIGHT</li>
                          <li>PA_SLICE</li>
                          <li>PA_MESH</li>
                          <li>PA_FADE</li>
                          <li>PA_DISSOLVE</li>
                          <li>PA_BLINDS</li>
                          <li>PA_RANDOM</li>
                          <li>PA_WIPE</li>
                          <li>PA_WIPE_CURSOR</li>
                          <li>PA_SCAN_HORIZ</li>
                          <li>PA_SCAN_VERT</li>
                          <li>PA_OPENING</li>
                          <li>PA_OPENING_CURSOR</li>
                          <li>PA_CLOSING</li>
                          <li>PA_CLOSING_CURSOR</li>
                          <li>PA_SCROLL_UP_LEFT</li>
                          <li>PA_SCROLL_UP_RIGHT</li>
                          <li>PA_SCROLL_DOWN_LEFT</li>
                          <li>PA_SCROLL_DOWN_RIGHT</li>
                          <li>PA_GROW_UP</li>
                          <li>PA_GROW_DOWN</li>
                        </ul><br>
                      <li><b>devicePrefix/zone<i>N</i>/scrollspeed</b> - scroll speed</li>
                      <li><b>devicePrefix/zone<i>N</i>/scrollpause</b> - scroll pause</li>
                      <li><b>devicePrefix/zone<i>N</i>/scrollalign</b> - scroll alignment</li>
                      <li><b>devicePrefix/zone<i>N</i>/charspacing</b> - character spacing</li>
                      <li><b>devicePrefix/intensity</b> - brightness</li>
                      <li><b>devicePrefix/zone<i>N</i>/workMode</b> - zone work mode</li>
                      <li><b>devicePrefix/power</b> - display power control, support <b>on</b> / <b>off</b> values</li>
                    </ul>
                      where <b>devicePrefix</b> = %mqttDevicePrefix%
                      <br><b>zoneN</b> = zone number (e.g. Zone0)
                  </small>
              </div>
      
            </div>
            <div class="col-md-7 col-lg-8">
             <form class="needs-validation" novalidate="">
              <div class="row g-3">
 
                <h3 class="mb-3">System settings</h3>
                  <div class="col-6" hidden>
                    <label for="deviceName" class="form-label">Device Name</label>
                    <div class="input-group mb-3">
                      <input type="text" class="form-control" id="deviceName" value="%deviceName%">
                    </div> 
                  </div>

                  <div class="col-6 align-self-center">
                    <div class="form-check">
                      <input class="form-check-input" type="checkbox" value="disableServiceMessages" id="disableServiceMessages">
                      <label class="form-check-label" for="disableServiceMessages">
                        Disable service messages on display
                      </label>
                    </div>
                  </div>
                <button id="applySystemSettings" class="w-100 btn btn-primary btn-lg" onClick="preparePostRequest(event, this.id, null);">Apply</button>

              <hr class="my-4">

              <h4 class="mb-3">Display settings <span class="text-primary fs-6" style="--bs-text-opacity: .5;">[reboot required]</span></h4>
                <div class="row g-3">
                  <div class="col-sm-4">
                    <label for="Numbers of zones" class="form-label">Number of zones</label>
                    <select class="form-select" aria-label="Default select example" id="zoneNumbers">
                        <option value="1">1</option>
                        <option value="2">2</option>
                        <option value="3">3</option>
                        <!-- <option value="4">4</option> -->
                      </select>
                    <div class="invalid-feedback">
                      Valid first name is required.
                    </div>
                  </div>
      
                  <div class="col-sm-4">
                    <label for="zone0Begin" class="form-label">First module <span class="text-muted">[ zone 0 ]</span></label>
                    <input type="text" class="form-control" id="zone0Begin" value="%zone0Begin%" >
                  </div>
                  <div class="col-sm-4">
                    <label for="zone0End" class="form-label">Last module <span class="text-muted">[ zone 0 ]</span></label>
                    <input type="text" class="form-control" id="zone0End" value="%zone0End%" >
                  </div>
                  <div class="col-sm-4"></div>
                  <div class="col-sm-4" id="zone1BeginDiv">
                    <label for="zone1Begin" class="form-label">First module <span class="text-muted">[ zone 1 ]</span></label>
                    <input type="text" class="form-control" id="zone1Begin" value="%zone1Begin%" >
                  </div>
                  <div class="col-sm-4" id="zone1EndDiv">
                    <label for="zone1End" class="form-label">Last module <span class="text-muted">[ zone 1 ]</span></label>
                    <input type="text" class="form-control" id="zone1End" value="%zone1End%" >
                  </div>
                  <div class="col-sm-4"></div>
                  <div class="col-sm-4" id="zone2BeginDiv">
                    <label for="zone2Begin" class="form-label">First module <span class="text-muted">[ zone 2 ]</span></label>
                    <input type="text" class="form-control" id="zone2Begin" value="%zone2Begin%" >
                  </div>
                  <div class="col-sm-4" id="zone2EndDiv">
                    <label for="zone2End" class="form-label">Last module <span class="text-muted">[ zone 2 ]</span></label>
                    <input type="text" class="form-control" id="zone2End" value="%zone2End%" >
                  </div>
                  <div class="col-sm-4"></div>
<!--                  <div class="col-sm-4" id="zone3BeginDiv">
                    <label for="zone3Begin" class="form-label">First module <span class="text-muted">[ zone 3 ]</span></label>
                    <input type="text" class="form-control" id="zone3Begin" value="%zone3Begin%" >
                  </div>
                  <div class="col-sm-4" id="zone3EndDiv">
                    <label for="zone3End" class="form-label">Last module <span class="text-muted">[ zone 3 ]</span></label>
                    <input type="text" class="form-control" id="zone3End" value="%zone3End%" >
                  </div>
-->                
                  <button id="displaySettings" class="w-100 btn btn-primary btn-lg" onClick="preparePostRequest(event, this.id, null);">Apply and reboot</button>
                  
                  <hr class="my-4">

                  <div class="col-11">
                    <label for="intensity" class="form-label">Brightness</label>
                    <input type="range" class="form-range" min="1" max="17" step="1" id="intensity" value="%intensity%" onChange="preparePostRequest(event, this.id, this.value);">
                  </div>
                  <div class="col-1 align-self-end">
                    <label id="intensityValue" for="intensity" class="form-label text-primary">%intensity%</label>
                  </div>

                  <hr class="my-5">

                  <h3 class="mb-3">Zone 0</h3>

                  <div class="col-5">
                    <label for="workModeZone0" class="form-label">Working mode</label>
                    <select id="workModeZone0" class="form-select">
                        <option value="mqttClient">MQTT client</option>
                        <option value="manualInput">Manual input</option>
                        <option value="wallClock">Wall clock</option>
                        <option value="owmWeather">Open Weather map</option>
                        <option value="haClient">Home Assistant client</option>
                        <option value="intTempSensor">Internal Temperature sensor (ds18b20)</option>
                    </select>
                  </div>
                  
                  <div class="col-7" id="emptyZone0Div"></div>
                  <div class="col-5" id="mqttZone0PrefixDiv" style="display: none;">
                    <label for="mqttZone0Prefix" class="form-label">MQTT zone text topic</label>
                        <input type="text" class="form-control" id="mqttTextTopicZone0" value="%mqttTextTopicZone0%">
                  </div>
                  <div class="col-2" id="mqttPostfixZone0Div" style="display: none;">
                    <label for="mqttPostfixZone0" class="form-label">Postfix</label>
                        <input type="text" class="form-control" id="mqttPostfixZone0" value="%mqttPostfixZone0%">
                  </div>
                  <div class="col-12" id="mqttDevicePrefixZone0Div" class="form-text" style="display: none;">Control topic prefix: <b>%mqttDevicePrefix%/zone0/*</b></div>

                  <div class="col-7" id="clockDisplayFormatZone0Div" style="display: none;">
                    <label for="clockDisplayFormatZone0" class="form-label">Time format</label>
                        <select id="clockDisplayFormatZone0" class="form-select">
                          <option value="yyyy.mm.dd HH:MM:SS">yyyy.mm.dd HH:MM:SS</option>
                          <option value="yyyy.mm.dd">yyyy.mm.dd</option>
                          <option value="ddmmyyyy">dd.mm.yyyy</option>
                          <option value="ddmmaa">dd.mm aa</option>
                          <option value="ddmm">dd.mm</option>
                          <option value="HHMMSS">HH:MM:SS</option>
                          <option value="HHMM">HH:MM</option>
                          <option value="HH">HH</option>
                          <option value="MM">MM</option>
                          <option value="aa">aa</option>
                          <option value="ddmmaahhmm">ddmmaahhmm</option>
                        </select>
                  </div>
                  <div class="col-7" id="owmWhatToDisplayZone0div" style="display: none;">
                    <label for="owmWhatToDisplayZone0" class="form-label">What to display</label>
                    <select id="owmWhatToDisplayZone0" class="form-select">
                        <option value="owmTemperature">Temperature</option>
                        <option value="owmHumidity">Humidity</option>
                        <option value="owmPressure">Pressure</option>
                        <option value="owmWindSpeed">Wind speed</option>
                        <option value="owmWeatherIcon">Wether icon</option>
                    </select>
                  </div>
                  <div class="col-5" id="haSensorIdZone0Div" style="display: none;">
                    <label for="haSensorIdZone0" class="form-label">Sensor ID</label>
                        <input type="text" class="form-control" id="haSensorIdZone0" value="%haSensorIdZone0%">
                  </div>
                  <div class="col-2" id="haSensorPostfixZone0Div" style="display: none;">
                    <label for="haSensorPostfixZone0" class="form-label">Postfix</label>
                        <input type="text" class="form-control" id="haSensorPostfixZone0" value="%haSensorPostfixZone0%">
                  </div>
                  <div class="col-7" id="ds18b20PostfixZone0Div" style="display: none;">
                    <label for="ds18b20PostfixZone0" class="form-label">Postfix</label>
                        <input type="text" class="form-control" id="ds18b20PostfixZone0" value="%ds18b20PostfixZone0%">
                  </div>

                  <div class="col-5" id="fontZone0div">
                    <label for="fontZone0" class="form-label">Font</label>
                    <select id="fontZone0" class="form-select">
                        <option value="default">Default</option>
                        <option value="wledFont">Wled font</option>
                        <option value="wledFont_cyrillic">Cyrillic</option>
                        <option value="wledFont_small">small</option>
                        <option value="wledSymbolFont">Wled Symbol Font</option>
                    </select>
                  </div>
                  <div class="col-7">
                    <label for="charspacingZone0" class="form-label">Character spacing</label>
                    <select id="charspacingZone0" class="form-select">
                        <option value="0">0</option>
                        <option value="1">1</option>
                        <option value="2">2</option>
                        <option value="3">3</option>
                        <option value="4">4</option>
                        <option value="5">5</option>
                      </select>
                  </div>

                  <div class="col-5">
                    <label for="scrollEffectZone0In" class="form-label">Scroll effect <span class="text-primary"><b>IN</b></span></label>
                    <select id="scrollEffectZone0In" class="form-select">
                        <option value="PA_NO_EFFECT">NO_EFFECT</option>
                        <option value="PA_PRINT">PRINT</option>
                        <option value="PA_SCROLL_UP">SCROLL_UP</option>
                        <option value="PA_SCROLL_DOWN">SCROLL_DOWN</option>
                        <option value="PA_SCROLL_LEFT" >SCROLL_LEFT</option>
                        <option value="PA_SCROLL_RIGHT">SCROLL_RIGHT</option>
                        <option value="PA_SPRITE">SPRITE</option>
                        <option value="PA_SLICE">SLICE</option>
                        <option value="PA_MESH">MESH</option>
                        <option value="PA_FADE">FADE</option>
                        <option value="PA_DISSOLVE">DISSOLVE</option>
                        <option value="PA_BLINDS">BLINDS</option>
                        <option value="PA_RANDOM">RANDOM</option>
                        <option value="PA_WIPE">WIPE</option>
                        <option value="PA_WIPE_CURSOR">WIPE_CURSOR</option>
                        <option value="PA_SCAN_HORIZ">SCAN_HORIZ</option>
                        <option value="PA_SCAN_VERT">SCAN_VERT</option>
                        <option value="PA_OPENING">OPENING</option>
                        <option value="PA_OPENING_CURSOR">OPENING_CURSOR</option>
                        <option value="PA_CLOSING">CLOSING</option>
                        <option value="PA_CLOSING_CURSOR">CLOSING_CURSOR</option>
                        <option value="PA_SCROLL_UP_LEFT">SCROLL_UP_LEFT</option>
                        <option value="PA_SCROLL_UP_RIGHT">SCROLL_UP_RIGHT</option>
                        <option value="PA_SCROLL_DOWN_LEFT">SCROLL_DOWN_LEFT</option>
                        <option value="PA_SCROLL_DOWN_RIGHT">SCROLL_DOWN_RIGHT</option>
                        <option value="PA_GROW_UP">GROW_UP</option>
                        <option value="PA_GROW_DOWN">GROW_DOWN</option>
                      </select>
                  </div>
                  <div class="col-7">
                      <label for="scrollSpeedZone0" class="form-label">Scroll speed</label>
                      <div class="input-group mb-3">
                          <input type="text" class="form-control" id="scrollSpeedZone0" value="%scrollSpeedZone0%" aria-describedby="scrollSpeedZone0Help">
                          <span class="input-group-text">ms</span>
                      </div>
                  </div>

                  <div class="col-5">
                    <label for="scrollEffectZone0Out" class="form-label">Scroll effect <span class="text-primary"><b>OUT</b></span></label>
                    <select id="scrollEffectZone0Out" class="form-select">
                        <option value="PA_NO_EFFECT">NO_EFFECT</option>
                        <option value="PA_PRINT">PRINT</option>
                        <option value="PA_SCROLL_UP">SCROLL_UP</option>
                        <option value="PA_SCROLL_DOWN">SCROLL_DOWN</option>
                        <option value="PA_SCROLL_LEFT" selected>SCROLL_LEFT</option>
                        <option value="PA_SCROLL_RIGHT">SCROLL_RIGHT</option>
                        <option value="PA_SPRITE">SPRITE</option>
                        <option value="PA_SLICE">SLICE</option>
                        <option value="PA_MESH">MESH</option>
                        <option value="PA_FADE">FADE</option>
                        <option value="PA_DISSOLVE">DISSOLVE</option>
                        <option value="PA_BLINDS">BLINDS</option>
                        <option value="PA_RANDOM">RANDOM</option>
                        <option value="PA_WIPE">WIPE</option>
                        <option value="PA_WIPE_CURSOR">WIPE_CURSOR</option>
                        <option value="PA_SCAN_HORIZ">SCAN_HORIZ</option>
                        <option value="PA_SCAN_VERT">SCAN_VERT</option>
                        <option value="PA_OPENING">OPENING</option>
                        <option value="PA_OPENING_CURSOR">OPENING_CURSOR</option>
                        <option value="PA_CLOSING">CLOSING</option>
                        <option value="PA_CLOSING_CURSOR">CLOSING_CURSOR</option>
                        <option value="PA_SCROLL_UP_LEFT">SCROLL_UP_LEFT</option>
                        <option value="PA_SCROLL_UP_RIGHT">SCROLL_UP_RIGHT</option>
                        <option value="PA_SCROLL_DOWN_LEFT">SCROLL_DOWN_LEFT</option>
                        <option value="PA_SCROLL_DOWN_RIGHT">SCROLL_DOWN_RIGHT</option>
                        <option value="PA_GROW_UP">GROW_UP</option>
                        <option value="PA_GROW_DOWN">GROW_DOWN</option>
                      </select>
                  </div>
                  <div class="col-7">
                    <label for="scrollPauseZone0" class="form-label">Scroll pause</label>
                    <div class="input-group mb-3">
                        <input type="text" class="form-control" id="scrollPauseZone0" value="%scrollPauseZone0%">
                        <span class="input-group-text">s</span>
                    </div>
                  </div>

                  <div class="col-5">
                    <label for="scrollAlignZone0" class="form-label">Alignment</label>
                    <select id="scrollAlignZone0" class="form-select">
                        <option value="PA_LEFT">Left</option>
                        <option value="PA_CENTER">Center</option>
                        <option value="PA_RIGHT">Right</option>
                      </select>
                  </div>
                  

                  <button id="zone0Settings" class="w-100 btn btn-primary btn-lg" onClick="preparePostRequest(event, this.id, null);">Apply</button>

                  <hr class="my-4">
                  <h3 class="mb-3">Zone 1</h3>

                  <div class="col-5">
                    <label for="workModeZone1" class="form-label">Working mode</label>
                    <select id="workModeZone1" class="form-select">
                        <option value="mqttClient">MQTT client</option>
                        <option value="manualInput">Manual input</option>
                        <option value="wallClock">Wall clock</option>
                        <option value="owmWeather">Open Weather map</option>
                        <option value="haClient">Home Assistant client</option>
                        <option value="intTempSensor">Internal Temperature sensor (ds18b20)</option>
                    </select>
                  </div>
                  
                  <div class="col-7" id="emptyZone1Div"></div>
                  <div class="col-5" id="mqttZone1PrefixDiv" style="display: none;">
                    <label for="mqttZone1Prefix" class="form-label">MQTT zone text topic</label>
                        <input type="text" class="form-control" id="mqttTextTopicZone1" value="%mqttTextTopicZone1%">
                  </div>
                  <div class="col-2" id="mqttPostfixZone1Div" style="display: none;">
                    <label for="mqttPostfixZone1" class="form-label">Postfix</label>
                        <input type="text" class="form-control" id="mqttPostfixZone1" value="%mqttPostfixZone1%">
                  </div>
                  <div class="col-12" id="mqttDevicePrefixZone1Div" class="form-text" style="display: none;">Control topic prefix: <b>%mqttDevicePrefix%/zone1/*</b></div>

                  <div class="col-7" id="clockDisplayFormatZone1Div" style="display: none;">
                    <label for="clockDisplayFormatZone1" class="form-label">Time format</label>
                        <select id="clockDisplayFormatZone1" class="form-select">
                          <option value="yyyy.mm.dd HH:MM:SS">yyyy.mm.dd HH:MM:SS</option>
                          <option value="yyyy.mm.dd">yyyy.mm.dd</option>
                          <option value="ddmmyyyy">dd.mm.yyyy</option>
                          <option value="ddmmaa">dd.mm aa</option>
                          <option value="ddmm">dd.mm</option>
                          <option value="HHMMSS">HH:MM:SS</option>
                          <option value="HHMM">HH:MM</option>
                          <option value="HH">HH</option>
                          <option value="MM">MM</option>
                          <option value="aa">aa</option>
                          <option value="ddmmaahhmm">ddmmaahhmm</option>
                        </select>
                  </div>
                  <div class="col-7" id="owmWhatToDisplayZone1div" style="display: none;">
                    <label for="owmWhatToDisplayZone1" class="form-label">What to display</label>
                    <select id="owmWhatToDisplayZone1" class="form-select">
                        <option value="owmTemperature">Temperature</option>
                        <option value="owmHumidity">Humidity</option>
                        <option value="owmPressure">Pressure</option>
                        <option value="owmWindSpeed">Wind speed</option>
                        <option value="owmWeatherIcon">Wether icon</option>
                    </select>
                  </div>
                  <div class="col-5" id="haSensorIdZone1Div" style="display: none;">
                    <label for="haSensorIdZone1" class="form-label">Sensor ID</label>
                        <input type="text" class="form-control" id="haSensorIdZone1" value="%haSensorIdZone1%">
                  </div>
                  <div class="col-2" id="haSensorPostfixZone1Div" style="display: none;">
                    <label for="haSensorPostfixZone1" class="form-label">Postfix</label>
                        <input type="text" class="form-control" id="haSensorPostfixZone1" value="%haSensorPostfixZone1%">
                  </div>
                  <div class="col-7" id="ds18b20PostfixZone1Div" style="display: none;">
                    <label for="ds18b20PostfixZone1" class="form-label">Postfix</label>
                        <input type="text" class="form-control" id="ds18b20PostfixZone1" value="%ds18b20PostfixZone1%">
                  </div>

                  <div class="col-5" id="fontZone1div">
                    <label for="fontZone1" class="form-label">Font</label>
                    <select id="fontZone1" class="form-select">
                        <option value="default">Default</option>
                        <option value="wledFont">Wled font</option>
                        <option value="wledFont_cyrillic">Cyrillic</option>
                        <option value="wledFont_small">small</option>
                        <option value="wledSymbolFont">Wled Symbol Font</option>
                    </select>
                  </div>
                  <div class="col-7">
                    <label for="charspacingZone1" class="form-label">Character spacing</label>
                    <select id="charspacingZone1" class="form-select">
                        <option value="0">0</option>
                        <option value="1">1</option>
                        <option value="2">2</option>
                        <option value="3">3</option>
                        <option value="4">4</option>
                        <option value="5">5</option>
                      </select>
                  </div>

                  <div class="col-5">
                    <label for="scrollEffectZone1In" class="form-label">Scroll effect <span class="text-primary"><b>IN</b></span></label>
                    <select id="scrollEffectZone1In" class="form-select">
                        <option value="PA_NO_EFFECT">NO_EFFECT</option>
                        <option value="PA_PRINT">PRINT</option>
                        <option value="PA_SCROLL_UP">SCROLL_UP</option>
                        <option value="PA_SCROLL_DOWN">SCROLL_DOWN</option>
                        <option value="PA_SCROLL_LEFT" >SCROLL_LEFT</option>
                        <option value="PA_SCROLL_RIGHT">SCROLL_RIGHT</option>
                        <option value="PA_SPRITE">SPRITE</option>
                        <option value="PA_SLICE">SLICE</option>
                        <option value="PA_MESH">MESH</option>
                        <option value="PA_FADE">FADE</option>
                        <option value="PA_DISSOLVE">DISSOLVE</option>
                        <option value="PA_BLINDS">BLINDS</option>
                        <option value="PA_RANDOM">RANDOM</option>
                        <option value="PA_WIPE">WIPE</option>
                        <option value="PA_WIPE_CURSOR">WIPE_CURSOR</option>
                        <option value="PA_SCAN_HORIZ">SCAN_HORIZ</option>
                        <option value="PA_SCAN_VERT">SCAN_VERT</option>
                        <option value="PA_OPENING">OPENING</option>
                        <option value="PA_OPENING_CURSOR">OPENING_CURSOR</option>
                        <option value="PA_CLOSING">CLOSING</option>
                        <option value="PA_CLOSING_CURSOR">CLOSING_CURSOR</option>
                        <option value="PA_SCROLL_UP_LEFT">SCROLL_UP_LEFT</option>
                        <option value="PA_SCROLL_UP_RIGHT">SCROLL_UP_RIGHT</option>
                        <option value="PA_SCROLL_DOWN_LEFT">SCROLL_DOWN_LEFT</option>
                        <option value="PA_SCROLL_DOWN_RIGHT">SCROLL_DOWN_RIGHT</option>
                        <option value="PA_GROW_UP">GROW_UP</option>
                        <option value="PA_GROW_DOWN">GROW_DOWN</option>
                      </select>
                  </div>
                  <div class="col-7">
                      <label for="scrollSpeedZone1" class="form-label">Scroll speed</label>
                      <div class="input-group mb-3">
                          <input type="text" class="form-control" id="scrollSpeedZone1" value="%scrollSpeedZone1%" aria-describedby="scrollSpeedZone1Help">
                          <span class="input-group-text">ms</span>
                      </div>
                  </div>

                  <div class="col-5">
                    <label for="scrollEffectZone1Out" class="form-label">Scroll effect <span class="text-primary"><b>OUT</b></span></label>
                    <select id="scrollEffectZone1Out" class="form-select">
                        <option value="PA_NO_EFFECT">NO_EFFECT</option>
                        <option value="PA_PRINT">PRINT</option>
                        <option value="PA_SCROLL_UP">SCROLL_UP</option>
                        <option value="PA_SCROLL_DOWN">SCROLL_DOWN</option>
                        <option value="PA_SCROLL_LEFT" selected>SCROLL_LEFT</option>
                        <option value="PA_SCROLL_RIGHT">SCROLL_RIGHT</option>
                        <option value="PA_SPRITE">SPRITE</option>
                        <option value="PA_SLICE">SLICE</option>
                        <option value="PA_MESH">MESH</option>
                        <option value="PA_FADE">FADE</option>
                        <option value="PA_DISSOLVE">DISSOLVE</option>
                        <option value="PA_BLINDS">BLINDS</option>
                        <option value="PA_RANDOM">RANDOM</option>
                        <option value="PA_WIPE">WIPE</option>
                        <option value="PA_WIPE_CURSOR">WIPE_CURSOR</option>
                        <option value="PA_SCAN_HORIZ">SCAN_HORIZ</option>
                        <option value="PA_SCAN_VERT">SCAN_VERT</option>
                        <option value="PA_OPENING">OPENING</option>
                        <option value="PA_OPENING_CURSOR">OPENING_CURSOR</option>
                        <option value="PA_CLOSING">CLOSING</option>
                        <option value="PA_CLOSING_CURSOR">CLOSING_CURSOR</option>
                        <option value="PA_SCROLL_UP_LEFT">SCROLL_UP_LEFT</option>
                        <option value="PA_SCROLL_UP_RIGHT">SCROLL_UP_RIGHT</option>
                        <option value="PA_SCROLL_DOWN_LEFT">SCROLL_DOWN_LEFT</option>
                        <option value="PA_SCROLL_DOWN_RIGHT">SCROLL_DOWN_RIGHT</option>
                        <option value="PA_GROW_UP">GROW_UP</option>
                        <option value="PA_GROW_DOWN">GROW_DOWN</option>
                      </select>
                  </div>
                  <div class="col-7">
                    <label for="scrollPauseZone1" class="form-label">Scroll pause</label>
                    <div class="input-group mb-3">
                        <input type="text" class="form-control" id="scrollPauseZone1" value="%scrollPauseZone1%">
                        <span class="input-group-text">s</span>
                    </div>
                  </div>

                  <div class="col-5">
                    <label for="scrollAlignZone1" class="form-label">Alignment</label>
                    <select id="scrollAlignZone1" class="form-select">
                        <option value="PA_LEFT">Left</option>
                        <option value="PA_CENTER">Center</option>
                        <option value="PA_RIGHT">Right</option>
                      </select>
                  </div>
                  

                  <button id="zone1Settings" class="w-100 btn btn-primary btn-lg" onClick="preparePostRequest(event, this.id, null);">Apply</button>


                <hr class="my-4">
                  <h3 class="mb-3">Zone 2</h3>

                  <div class="col-5">
                    <label for="workModeZone2" class="form-label">Working mode</label>
                    <select id="workModeZone2" class="form-select">
                        <option value="mqttClient">MQTT client</option>
                        <option value="manualInput">Manual input</option>
                        <option value="wallClock">Wall clock</option>
                        <option value="owmWeather">Open Weather map</option>
                        <option value="haClient">Home Assistant client</option>
                        <option value="intTempSensor">Internal Temperature sensor (ds18b20)</option>
                    </select>
                  </div>
                  
                  <div class="col-7" id="emptyZone2Div"></div>
                  <div class="col-5" id="mqttZone2PrefixDiv" style="display: none;">
                    <label for="mqttZone2Prefix" class="form-label">MQTT zone text topic</label>
                        <input type="text" class="form-control" id="mqttTextTopicZone2" value="%mqttTextTopicZone2%">
                  </div>
                  <div class="col-2" id="mqttPostfixZone2Div" style="display: none;">
                    <label for="mqttPostfixZone2" class="form-label">Postfix</label>
                        <input type="text" class="form-control" id="mqttPostfixZone2" value="%mqttPostfixZone2%">
                  </div>
                  <div class="col-12" id="mqttDevicePrefixZone2Div" class="form-text" style="display: none;">Control topic prefix: <b>%mqttDevicePrefix%/zone2/*</b></div>

                  <div class="col-7" id="clockDisplayFormatZone2Div" style="display: none;">
                    <label for="clockDisplayFormatZone2" class="form-label">Time format</label>
                        <select id="clockDisplayFormatZone2" class="form-select">
                          <option value="yyyy.mm.dd HH:MM:SS">yyyy.mm.dd HH:MM:SS</option>
                          <option value="yyyy.mm.dd">yyyy.mm.dd</option>
                          <option value="ddmmyyyy">dd.mm.yyyy</option>
                          <option value="ddmmaa">dd.mm aa</option>
                          <option value="ddmm">dd.mm</option>
                          <option value="HHMMSS">HH:MM:SS</option>
                          <option value="HHMM">HH:MM</option>
                          <option value="HH">HH</option>
                          <option value="MM">MM</option>
                          <option value="aa">aa</option>
                          <option value="ddmmaahhmm">ddmmaahhmm</option>
                        </select>
                  </div>
                  <div class="col-7" id="owmWhatToDisplayZone2div" style="display: none;">
                    <label for="owmWhatToDisplayZone2" class="form-label">What to display</label>
                    <select id="owmWhatToDisplayZone2" class="form-select">
                        <option value="owmTemperature">Temperature</option>
                        <option value="owmHumidity">Humidity</option>
                        <option value="owmPressure">Pressure</option>
                        <option value="owmWindSpeed">Wind speed</option>
                        <option value="owmWeatherIcon">Wether icon</option>
                    </select>
                  </div>
                  <div class="col-5" id="haSensorIdZone2Div" style="display: none;">
                    <label for="haSensorIdZone2" class="form-label">Sensor ID</label>
                        <input type="text" class="form-control" id="haSensorIdZone2" value="%haSensorIdZone2%">
                  </div>
                  <div class="col-2" id="haSensorPostfixZone2Div" style="display: none;">
                    <label for="haSensorPostfixZone2" class="form-label">Postfix</label>
                        <input type="text" class="form-control" id="haSensorPostfixZone2" value="%haSensorPostfixZone2%">
                  </div>
                  <div class="col-7" id="ds18b20PostfixZone2Div" style="display: none;">
                    <label for="ds18b20PostfixZone2" class="form-label">Postfix</label>
                        <input type="text" class="form-control" id="ds18b20PostfixZone2" value="%ds18b20PostfixZone2%">
                  </div>

                  <div class="col-5" id="fontZone2div">
                    <label for="fontZone2" class="form-label">Font</label>
                    <select id="fontZone2" class="form-select">
                        <option value="default">Default</option>
                        <option value="wledFont">Wled font</option>
                        <option value="wledFont_cyrillic">Cyrillic</option>
                        <option value="wledFont_small">small</option>
                        <option value="wledSymbolFont">Wled Symbol Font</option>
                    </select>
                  </div>
                  <div class="col-7">
                    <label for="charspacingZone2" class="form-label">Character spacing</label>
                    <select id="charspacingZone2" class="form-select">
                        <option value="0">0</option>
                        <option value="1">1</option>
                        <option value="2">2</option>
                        <option value="3">3</option>
                        <option value="4">4</option>
                        <option value="5">5</option>
                      </select>
                  </div>

                  <div class="col-5">
                    <label for="scrollEffectZone2In" class="form-label">Scroll effect <span class="text-primary"><b>IN</b></span></label>
                    <select id="scrollEffectZone2In" class="form-select">
                        <option value="PA_NO_EFFECT">NO_EFFECT</option>
                        <option value="PA_PRINT">PRINT</option>
                        <option value="PA_SCROLL_UP">SCROLL_UP</option>
                        <option value="PA_SCROLL_DOWN">SCROLL_DOWN</option>
                        <option value="PA_SCROLL_LEFT" >SCROLL_LEFT</option>
                        <option value="PA_SCROLL_RIGHT">SCROLL_RIGHT</option>
                        <option value="PA_SPRITE">SPRITE</option>
                        <option value="PA_SLICE">SLICE</option>
                        <option value="PA_MESH">MESH</option>
                        <option value="PA_FADE">FADE</option>
                        <option value="PA_DISSOLVE">DISSOLVE</option>
                        <option value="PA_BLINDS">BLINDS</option>
                        <option value="PA_RANDOM">RANDOM</option>
                        <option value="PA_WIPE">WIPE</option>
                        <option value="PA_WIPE_CURSOR">WIPE_CURSOR</option>
                        <option value="PA_SCAN_HORIZ">SCAN_HORIZ</option>
                        <option value="PA_SCAN_VERT">SCAN_VERT</option>
                        <option value="PA_OPENING">OPENING</option>
                        <option value="PA_OPENING_CURSOR">OPENING_CURSOR</option>
                        <option value="PA_CLOSING">CLOSING</option>
                        <option value="PA_CLOSING_CURSOR">CLOSING_CURSOR</option>
                        <option value="PA_SCROLL_UP_LEFT">SCROLL_UP_LEFT</option>
                        <option value="PA_SCROLL_UP_RIGHT">SCROLL_UP_RIGHT</option>
                        <option value="PA_SCROLL_DOWN_LEFT">SCROLL_DOWN_LEFT</option>
                        <option value="PA_SCROLL_DOWN_RIGHT">SCROLL_DOWN_RIGHT</option>
                        <option value="PA_GROW_UP">GROW_UP</option>
                        <option value="PA_GROW_DOWN">GROW_DOWN</option>
                      </select>
                  </div>
                  <div class="col-7">
                      <label for="scrollSpeedZone2" class="form-label">Scroll speed</label>
                      <div class="input-group mb-3">
                          <input type="text" class="form-control" id="scrollSpeedZone2" value="%scrollSpeedZone2%" aria-describedby="scrollSpeedZone2Help">
                          <span class="input-group-text">ms</span>
                      </div>
                  </div>

                  <div class="col-5">
                    <label for="scrollEffectZone2Out" class="form-label">Scroll effect <span class="text-primary"><b>OUT</b></span></label>
                    <select id="scrollEffectZone2Out" class="form-select">
                        <option value="PA_NO_EFFECT">NO_EFFECT</option>
                        <option value="PA_PRINT">PRINT</option>
                        <option value="PA_SCROLL_UP">SCROLL_UP</option>
                        <option value="PA_SCROLL_DOWN">SCROLL_DOWN</option>
                        <option value="PA_SCROLL_LEFT" selected>SCROLL_LEFT</option>
                        <option value="PA_SCROLL_RIGHT">SCROLL_RIGHT</option>
                        <option value="PA_SPRITE">SPRITE</option>
                        <option value="PA_SLICE">SLICE</option>
                        <option value="PA_MESH">MESH</option>
                        <option value="PA_FADE">FADE</option>
                        <option value="PA_DISSOLVE">DISSOLVE</option>
                        <option value="PA_BLINDS">BLINDS</option>
                        <option value="PA_RANDOM">RANDOM</option>
                        <option value="PA_WIPE">WIPE</option>
                        <option value="PA_WIPE_CURSOR">WIPE_CURSOR</option>
                        <option value="PA_SCAN_HORIZ">SCAN_HORIZ</option>
                        <option value="PA_SCAN_VERT">SCAN_VERT</option>
                        <option value="PA_OPENING">OPENING</option>
                        <option value="PA_OPENING_CURSOR">OPENING_CURSOR</option>
                        <option value="PA_CLOSING">CLOSING</option>
                        <option value="PA_CLOSING_CURSOR">CLOSING_CURSOR</option>
                        <option value="PA_SCROLL_UP_LEFT">SCROLL_UP_LEFT</option>
                        <option value="PA_SCROLL_UP_RIGHT">SCROLL_UP_RIGHT</option>
                        <option value="PA_SCROLL_DOWN_LEFT">SCROLL_DOWN_LEFT</option>
                        <option value="PA_SCROLL_DOWN_RIGHT">SCROLL_DOWN_RIGHT</option>
                        <option value="PA_GROW_UP">GROW_UP</option>
                        <option value="PA_GROW_DOWN">GROW_DOWN</option>
                      </select>
                  </div>
                  <div class="col-7">
                    <label for="scrollPauseZone2" class="form-label">Scroll pause</label>
                    <div class="input-group mb-3">
                        <input type="text" class="form-control" id="scrollPauseZone2" value="%scrollPauseZone2%">
                        <span class="input-group-text">s</span>
                    </div>
                  </div>

                  <div class="col-5">
                    <label for="scrollAlignZone2" class="form-label">Alignment</label>
                    <select id="scrollAlignZone2" class="form-select">
                        <option value="PA_LEFT">Left</option>
                        <option value="PA_CENTER">Center</option>
                        <option value="PA_RIGHT">Right</option>
                      </select>
                  </div>
      
                <button id="zone2Settings" class="w-100 btn btn-primary btn-lg" onClick="preparePostRequest(event, this.id, null);">Apply</button>
<!-- disable zone3
                <hr class="my-4">
                  <h3 class="mb-3">Zone 3</h3>

                  <div class="col-5">
                    <label for="workModeZone3" class="form-label">Working mode</label>
                    <select id="workModeZone3" class="form-select">
                        <option value="mqttClient">MQTT client</option>
                        <option value="manualInput">Manual input</option>
                        <option value="wallClock">Wall clock</option>
                        <option value="owmWeather">Open Weather map</option>
                        <option value="haClient">Home Assistant client</option>
                        <option value="intTempSensor">Internal Temperature sensor (ds18b20)</option>
                    </select>
                  </div>
                  
                  <div class="col-7" id="emptyZone3Div"></div>
                  <div class="col-5" id="mqttZone3PrefixDiv" style="display: none;">
                    <label for="mqttZone3Prefix" class="form-label">MQTT zone text topic</label>
                        <input type="text" class="form-control" id="mqttTextTopicZone3" value="%mqttTextTopicZone3%">
                  </div>
                  <div class="col-2" id="mqttPostfixZone3Div" style="display: none;">
                    <label for="mqttPostfixZone3" class="form-label">Postfix</label>
                        <input type="text" class="form-control" id="mqttPostfixZone3" value="%mqttPostfixZone3%">
                  </div>
                  <div class="col-12" id="mqttDevicePrefixZone3Div" class="form-text" style="display: none;">Control topic prefix: <b>%mqttDevicePrefix%/zone3/*</b></div>

                  <div class="col-7" id="clockDisplayFormatZone3Div" style="display: none;">
                    <label for="clockDisplayFormatZone3" class="form-label">Time format</label>
                        <select id="clockDisplayFormatZone3" class="form-select">
                          <option value="yyyy.mm.dd HH:MM:SS">yyyy.mm.dd HH:MM:SS</option>
                          <option value="yyyy.mm.dd">yyyy.mm.dd</option>
                          <option value="ddmmyyyy">dd.mm.yyyy</option>
                          <option value="ddmmaa">dd.mm aa</option>
                          <option value="ddmm">dd.mm</option>
                          <option value="HHMMSS">HH:MM:SS</option>
                          <option value="HHMM">HH:MM</option>
                          <option value="HH">HH</option>
                          <option value="MM">MM</option>
                          <option value="aa">aa</option>
                          <option value="ddmmaahhmm">ddmmaahhmm</option>
                        </select>
                  </div>
                  <div class="col-7" id="owmWhatToDisplayZone3div" style="display: none;">
                    <label for="owmWhatToDisplayZone3" class="form-label">What to display</label>
                    <select id="owmWhatToDisplayZone3" class="form-select">
                        <option value="owmTemperature">Temperature</option>
                        <option value="owmHumidity">Humidity</option>
                        <option value="owmPressure">Pressure</option>
                        <option value="owmWindSpeed">Wind speed</option>
                        <option value="owmWeatherIcon">Wether icon</option>
                    </select>
                  </div>
                  <div class="col-5" id="haSensorIdZone3Div" style="display: none;">
                    <label for="haSensorIdZone3" class="form-label">Sensor ID</label>
                        <input type="text" class="form-control" id="haSensorIdZone3" value="%haSensorIdZone3%">
                  </div>
                  <div class="col-2" id="haSensorPostfixZone3Div" style="display: none;">
                    <label for="haSensorPostfixZone3" class="form-label">Postfix</label>
                        <input type="text" class="form-control" id="haSensorPostfixZone3" value="%haSensorPostfixZone3%">
                  </div>
                  <div class="col-7" id="ds18b20PostfixZone3Div" style="display: none;">
                    <label for="ds18b20PostfixZone3" class="form-label">Postfix</label>
                        <input type="text" class="form-control" id="ds18b20PostfixZone3" value="%ds18b20PostfixZone3%">
                  </div>

                  <div class="col-5" id="fontZone3div">
                    <label for="fontZone3" class="form-label">Font</label>
                    <select id="fontZone3" class="form-select">
                        <option value="default">Default</option>
                        <option value="wledFont">Wled font</option>
                        <option value="wledFont_cyrillic">Cyrillic</option>
                        <option value="wledFont_small">small</option>
                        <option value="wledSymbolFont">Wled Symbol Font</option>
                    </select>
                  </div>
                  <div class="col-7">
                    <label for="charspacingZone3" class="form-label">Character spacing</label>
                    <select id="charspacingZone3" class="form-select">
                        <option value="0">0</option>
                        <option value="1">1</option>
                        <option value="2">2</option>
                        <option value="3">3</option>
                        <option value="4">4</option>
                        <option value="5">5</option>
                      </select>
                  </div>

                  <div class="col-5">
                    <label for="scrollEffectZone3In" class="form-label">Scroll effect <span class="text-primary"><b>IN</b></span></label>
                    <select id="scrollEffectZone3In" class="form-select">
                        <option value="PA_NO_EFFECT">NO_EFFECT</option>
                        <option value="PA_PRINT">PRINT</option>
                        <option value="PA_SCROLL_UP">SCROLL_UP</option>
                        <option value="PA_SCROLL_DOWN">SCROLL_DOWN</option>
                        <option value="PA_SCROLL_LEFT" >SCROLL_LEFT</option>
                        <option value="PA_SCROLL_RIGHT">SCROLL_RIGHT</option>
                        <option value="PA_SPRITE">SPRITE</option>
                        <option value="PA_SLICE">SLICE</option>
                        <option value="PA_MESH">MESH</option>
                        <option value="PA_FADE">FADE</option>
                        <option value="PA_DISSOLVE">DISSOLVE</option>
                        <option value="PA_BLINDS">BLINDS</option>
                        <option value="PA_RANDOM">RANDOM</option>
                        <option value="PA_WIPE">WIPE</option>
                        <option value="PA_WIPE_CURSOR">WIPE_CURSOR</option>
                        <option value="PA_SCAN_HORIZ">SCAN_HORIZ</option>
                        <option value="PA_SCAN_VERT">SCAN_VERT</option>
                        <option value="PA_OPENING">OPENING</option>
                        <option value="PA_OPENING_CURSOR">OPENING_CURSOR</option>
                        <option value="PA_CLOSING">CLOSING</option>
                        <option value="PA_CLOSING_CURSOR">CLOSING_CURSOR</option>
                        <option value="PA_SCROLL_UP_LEFT">SCROLL_UP_LEFT</option>
                        <option value="PA_SCROLL_UP_RIGHT">SCROLL_UP_RIGHT</option>
                        <option value="PA_SCROLL_DOWN_LEFT">SCROLL_DOWN_LEFT</option>
                        <option value="PA_SCROLL_DOWN_RIGHT">SCROLL_DOWN_RIGHT</option>
                        <option value="PA_GROW_UP">GROW_UP</option>
                        <option value="PA_GROW_DOWN">GROW_DOWN</option>
                      </select>
                  </div>
                  <div class="col-7">
                      <label for="scrollSpeedZone3" class="form-label">Scroll speed</label>
                      <div class="input-group mb-3">
                          <input type="text" class="form-control" id="scrollSpeedZone3" value="%scrollSpeedZone3%" aria-describedby="scrollSpeedZone3Help">
                          <span class="input-group-text">ms</span>
                      </div>
                  </div>

                  <div class="col-5">
                    <label for="scrollEffectZone3Out" class="form-label">Scroll effect <span class="text-primary"><b>OUT</b></span></label>
                    <select id="scrollEffectZone3Out" class="form-select">
                        <option value="PA_NO_EFFECT">NO_EFFECT</option>
                        <option value="PA_PRINT">PRINT</option>
                        <option value="PA_SCROLL_UP">SCROLL_UP</option>
                        <option value="PA_SCROLL_DOWN">SCROLL_DOWN</option>
                        <option value="PA_SCROLL_LEFT" selected>SCROLL_LEFT</option>
                        <option value="PA_SCROLL_RIGHT">SCROLL_RIGHT</option>
                        <option value="PA_SPRITE">SPRITE</option>
                        <option value="PA_SLICE">SLICE</option>
                        <option value="PA_MESH">MESH</option>
                        <option value="PA_FADE">FADE</option>
                        <option value="PA_DISSOLVE">DISSOLVE</option>
                        <option value="PA_BLINDS">BLINDS</option>
                        <option value="PA_RANDOM">RANDOM</option>
                        <option value="PA_WIPE">WIPE</option>
                        <option value="PA_WIPE_CURSOR">WIPE_CURSOR</option>
                        <option value="PA_SCAN_HORIZ">SCAN_HORIZ</option>
                        <option value="PA_SCAN_VERT">SCAN_VERT</option>
                        <option value="PA_OPENING">OPENING</option>
                        <option value="PA_OPENING_CURSOR">OPENING_CURSOR</option>
                        <option value="PA_CLOSING">CLOSING</option>
                        <option value="PA_CLOSING_CURSOR">CLOSING_CURSOR</option>
                        <option value="PA_SCROLL_UP_LEFT">SCROLL_UP_LEFT</option>
                        <option value="PA_SCROLL_UP_RIGHT">SCROLL_UP_RIGHT</option>
                        <option value="PA_SCROLL_DOWN_LEFT">SCROLL_DOWN_LEFT</option>
                        <option value="PA_SCROLL_DOWN_RIGHT">SCROLL_DOWN_RIGHT</option>
                        <option value="PA_GROW_UP">GROW_UP</option>
                        <option value="PA_GROW_DOWN">GROW_DOWN</option>
                      </select>
                  </div>
                  <div class="col-7">
                    <label for="scrollPauseZone3" class="form-label">Scroll pause</label>
                    <div class="input-group mb-3">
                        <input type="text" class="form-control" id="scrollPauseZone3" value="%scrollPauseZone3%">
                        <span class="input-group-text">s</span>
                    </div>
                  </div>

                  <div class="col-5">
                    <label for="scrollAlignZone3" class="form-label">Alignment</label>
                    <select id="scrollAlignZone3" class="form-select">
                        <option value="PA_LEFT">Left</option>
                        <option value="PA_CENTER">Center</option>
                        <option value="PA_RIGHT">Right</option>
                      </select>
                  </div>
      
                <button id="zone3Settings" class="w-100 btn btn-primary btn-lg" onClick="preparePostRequest(event, this.id, null);">Apply</button>
-->

                <hr class="my-4">
                  <h3 class="mb-3">MQTT settings</h3>

                  <div class="col-12 align-self-center">
                    <div class="form-check">
                      <input class="form-check-input" type="checkbox" value="mqttEnable" id="mqttEnable">
                      <label class="form-check-label" for="mqttEnable">
                        Enable MQTT
                      </label>
                    </div>
                  </div>

                  <div class="col-6">
                    <label for="mqttServerAddress" class="form-label">Server address</label>
                    <div class="input-group mb-3">
                        <input type="text" class="form-control" id="mqttServerAddress" value="%mqttServerAddress%">
                    </div>
                  </div>
                  
                  <div class="col-6">
                    <label for="mqttServerPort" class="form-label">Server port</label>
                    <div class="input-group mb-3">
                        <input type="text" class="form-control" id="mqttServerPort" value="%mqttServerPort%">
                    </div>
                  </div>
                  
                  <div class="col-6">
                    <label for="mqttUsername" class="form-label">Username</label>
                    <div class="input-group mb-3">
                        <input type="text" class="form-control" id="mqttUsername" value="%mqttUsername%">
                    </div>
                  </div>
                  
                  <div class="col-6">
                    <label for="mqttPassword" class="form-label">Password</label>
                    <div class="input-group mb-3">
                        <input type="password" class="form-control" id="mqttPassword" value="%mqttPassword%">
                    </div>
                  </div>

                <button id="applyMqttSettings" class="w-100 btn btn-primary btn-lg" onClick="preparePostRequest(event, this.id, null);">Apply</button>

                
                <hr class="my-4">
                  <h3 class="mb-3">Wall clock settings</h3>
                  <div class="col-6">
                    <label class="form-label">NTP Time server</label>
                    <div class="input-group mb-3">
                        <input type="text" class="form-control" id="ntpServer" value="%ntpServer%">
                    </div>
                  </div>
                  <div class="col-3">
                    <label for="timeZone" class="form-label">Time zone</label>
                    <div class="input-group mb-3">
                        <span class="input-group-text">UTC</span>
                        <input type="text" class="form-control" id="ntpTimeZone" value="%ntpTimeZone%">
                    </div>
                  </div>
                  <div class="col-3">
                    <label for="timeZone" class="form-label">Update interval</label>
                    <div class="input-group mb-3">
                        <input type="text" class="form-control" id="ntpUpdateInterval" value="%ntpUpdateInterval%">
                        <span class="input-group-text">Hours</span>
                    </div>
                  </div>
                  <div class="col-12 align-self-center">
                    <div class="form-check">
                      <input class="form-check-input" type="checkbox" value="disableDotsblink" id="disableDotsBlink">
                      <label class="form-check-label" for="disableDotsBlink">
                        Disable clock dots blink
                      </label>
                    </div>
                  </div>
                  

                <button id="applyWallClockSettings" class="w-100 btn btn-primary btn-lg" onClick="preparePostRequest(event, this.id, null);">Apply</button>


                <hr class="my-4">
                  <h3 class="mb-4">Open Weather map settings</h3>                 
                  <div class="col-6">
                    <label for="owmCity" class="form-label">City <small>Name</small></label>
                    <div class="input-group mb-4">
                        <input type="text" class="form-control" id="owmCity" value="%owmCity%">
                    </div>
                  </div>
                  <div class="col-6">
                    <label for="owmApiToken" class="form-label">API token</label>
                    <div class="input-group mb-4">
                        <input type="password" class="form-control" id="owmApiToken" value="%owmApiToken%">
                    </div>
                  </div>

                  <div class="col-6">
                    <label class="form-label">Update interval</label>
                    <div class="input-group mb-3">
                        <input type="text" class="form-control" id="owmUpdateInterval" value="%owmUpdateInterval%">
                        <span class="input-group-text">s</span>
                    </div>
                  </div>
                  <div class="col-6">
                    <label for="clockDisplayFormat" class="form-label">Units format</label>
                    <div class="input-group mb-3">
                        <select id="owmUnitsFormat" class="form-select">
                          <option value="metric">metric</option>
                          <option value="imperial">imperial</option>
                        </select>
                    </div>
                  </div>
                  

                <button id="applyOwmSettings" class="w-100 btn btn-primary btn-lg" onClick="preparePostRequest(event, this.id, null);">Apply</button>


                <hr class="my-4">
                  <h3 class="mb-4">Home Assistant client settings</h3>
                  <div class="col-3">
                    <label for="forhaApiHttpType" class="form-label">HTTP or HTTPS</label>
                    <div class="input-group mb-3">
                        <select id="haApiHttpType" class="form-select">
                          <option value="http" selected="selected">HTTP</option>
                          <option value="https">HTTPS</option>
                        </select>
                    </div>
                  </div>
                  <div class="col-6">
                    <label for="haAddr" class="form-label">HA address</label><small class="form-text text-muted"> [without HTTPS or HTTP or / ]</small>
                    <div class="input-group mb-4">
                        <input type="text" class="form-control" id="haAddr" value="%haAddr%">
                    </div>
                  </div>
                  <div class="col-3">
                    <label for="haApiPort" class="form-label">API port</label>
                    <div class="input-group mb-4">
                        <input type="text" class="form-control" id="haApiPort" value="%haApiPort%">
                    </div>
                  </div>                  
 
                  <div class="col-9">
                    <label for="haApiToken" class="form-label">API token</label>
                    <div class="input-group mb-4">
                        <input type="password" class="form-control" id="haApiToken" value="%haApiToken%">
                    </div>
                  </div>
                  <div class="col-3">
                    <label for="haUpdateInterval" class="form-label">Update interval</label>
                    <div class="input-group mb-3">
                        <input type="text" class="form-control" id="haUpdateInterval" value="%haUpdateInterval%">
                        <span class="input-group-text">s</span>
                    </div>
                  </div>
                                    

                <button id="applyHaSettings" class="w-100 btn btn-primary btn-lg" onClick="preparePostRequest(event, this.id, null);">Apply</button>


                <hr class="my-4">
                  <h3 class="mb-4">Internal Temperature sensor (ds18b20) settings</h3>
                  <div class="col-6 align-self-center">
                    <div class="form-check">
                      <input class="form-check-input" type="checkbox" value="ds18b20Enable" id="ds18b20Enable">
                      <label class="form-check-label" for="ds18b20Enable">
                        Enable Temperature sensor (ds18b20)
                      </label>
                    </div>
                  </div>
                  <div class="col-6 align-self-center">
                        <label for="haApiToken" class="form-label">Measured temperature: %ds18b20Temp%</label>
                  </div>
                  <div class="col-6">
                    <label class="form-label">Update interval</label>
                    <div class="input-group mb-3">
                        <input type="text" class="form-control" id="ds18b20UpdateInterval" value="%ds18b20UpdateInterval%">
                        <span class="input-group-text">s</span>
                    </div>
                  </div>
                  <div class="col-6">
                    <label for="ds18b20UnitsFormat" class="form-label">Units format</label>
                    <div class="input-group mb-3">
                        <select id="ds18b20UnitsFormat" class="form-select">
                          <option value="Celsius">Celsius</option>
                          <option value="Fahrenheit">Fahrenheit</option>
                        </select>
                    </div>
                  </div>
                <button id="applyDs18b20Settings" class="w-100 btn btn-primary btn-lg" onClick="preparePostRequest(event, this.id, null);">Apply</button>



                <div class="col-sm-12"></div>
                <hr class="my-4">
                <div class="col-sm-12 text-center">
                  <a href="https://github.com/widapro/wledPixel" class="text-muted text-decoration-none">GitHub | WledPixel</a>
                </div>
              </form>
            </div>
          </div>
    </main>
  </div>


    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p" crossorigin="anonymous"></script>



    <div class="position-fixed top-0 end-0 p-3" style="z-index: 11">
    
        <div id="liveToastDanger" class="toast align-items-center text-white bg-danger border-0" role="alert" aria-live="assertive" aria-atomic="true" data-bs-autohide="true">
            <div class="d-flex">
                <div class="toast-body">
                Error!
                </div>
                <button type="button" class="btn-close btn-close-white me-2 m-auto" data-bs-dismiss="toast" aria-label="Close"></button>
            </div>
        </div>
        <div id="liveToastSuccess" class="toast align-items-center text-white bg-success border-0" role="alert" aria-live="assertive" aria-atomic="true">
            <div class="d-flex">
                <div class="toast-body">
                Success.
                </div>
                <button type="button" class="btn-close btn-close-white me-2 m-auto" data-bs-dismiss="toast" aria-label="Close"></button>
            </div>
        </div>
    </div>



<script>
    window.onload = function(e){ 
     document.getElementById("workModeZone0").value = "%workModeZone0%";
     document.getElementById("workModeZone1").value = "%workModeZone1%";
     document.getElementById("workModeZone2").value = "%workModeZone2%";
//     document.getElementById("workModeZone3").value = "%workModeZone3%";
     document.getElementById("zoneNumbers").value = "%zoneNumbers%";
     document.getElementById("zone0Begin").value = "%zone0Begin%";
     document.getElementById("zone0End").value = "%zone0End%";
     document.getElementById("zone1Begin").value = "%zone1Begin%";
     document.getElementById("zone1End").value = "%zone1End%";
     document.getElementById("zone2Begin").value = "%zone2Begin%";
     document.getElementById("zone2End").value = "%zone2End%";
//     document.getElementById("zone3Begin").value = "%zone3Begin%";
//     document.getElementById("zone3End").value = "%zone3End%";
     document.getElementById("intensity").value = "%intensity%";
     document.getElementById("intensityValue").value = "%intensity%";
     document.getElementById("scrollSpeedZone0").value = "%scrollSpeedZone0%";
     document.getElementById("scrollSpeedZone1").value = "%scrollSpeedZone1%";
     document.getElementById("scrollSpeedZone2").value = "%scrollSpeedZone2%";
//     document.getElementById("scrollSpeedZone3").value = "%scrollSpeedZone3%";
     document.getElementById("scrollPauseZone0").value = "%scrollPauseZone0%";
     document.getElementById("scrollPauseZone1").value = "%scrollPauseZone1%";
     document.getElementById("scrollPauseZone2").value = "%scrollPauseZone2%";
//     document.getElementById("scrollPauseZone3").value = "%scrollPauseZone3%";
     document.getElementById("scrollAlignZone0").value = "%scrollAlignZone0%";
     document.getElementById("scrollAlignZone1").value = "%scrollAlignZone1%";
     document.getElementById("scrollAlignZone2").value = "%scrollAlignZone2%";
//     document.getElementById("scrollAlignZone3").value = "%scrollAlignZone3%";
     document.getElementById("scrollEffectZone0In").value = "%scrollEffectZone0In%";
     document.getElementById("scrollEffectZone0Out").value = "%scrollEffectZone0Out%";
     document.getElementById("scrollEffectZone1In").value = "%scrollEffectZone1In%";
     document.getElementById("scrollEffectZone1Out").value = "%scrollEffectZone1Out%";
     document.getElementById("scrollEffectZone2In").value = "%scrollEffectZone2In%";
     document.getElementById("scrollEffectZone2Out").value = "%scrollEffectZone2Out%";
//     document.getElementById("scrollEffectZone3In").value = "%scrollEffectZone3In%";
//     document.getElementById("scrollEffectZone3Out").value = "%scrollEffectZone3Out%";
     if (%mqttEnable%) {
      document.getElementById("mqttEnable").checked = true;
     } else {
      document.getElementById("mqttEnable").checked = false;
     }
     document.getElementById("mqttServerAddress").value = "%mqttServerAddress%";
     document.getElementById("mqttServerPort").value = "%mqttServerPort%";
     document.getElementById("mqttUsername").value = "%mqttUsername%";
//     document.getElementById("mqttDevicePrefix").value = "%mqttDevicePrefix%";
//     document.getElementById("ds18b20Temp").value = "%ds18b20Temp%";
     document.getElementById("mqttTextTopicZone0").value = "%mqttTextTopicZone0%";
     document.getElementById("mqttTextTopicZone1").value = "%mqttTextTopicZone1%";
     document.getElementById("mqttTextTopicZone2").value = "%mqttTextTopicZone2%";
//     document.getElementById("mqttTextTopicZone3").value = "%mqttTextTopicZone3%";
     document.getElementById("ntpTimeZone").value = "%ntpTimeZone%";
     document.getElementById("ntpUpdateInterval").value = "%ntpUpdateInterval%";
     document.getElementById("ntpServer").value = "%ntpServer%";
     document.getElementById("clockDisplayFormatZone0").value = "%clockDisplayFormatZone0%";
     document.getElementById("clockDisplayFormatZone1").value = "%clockDisplayFormatZone1%";
     document.getElementById("clockDisplayFormatZone2").value = "%clockDisplayFormatZone2%";
//     document.getElementById("clockDisplayFormatZone3").value = "%clockDisplayFormatZone3%";
     document.getElementById("owmWhatToDisplayZone0").value = "%owmWhatToDisplayZone0%";
     document.getElementById("owmWhatToDisplayZone1").value = "%owmWhatToDisplayZone1%";
     document.getElementById("owmWhatToDisplayZone2").value = "%owmWhatToDisplayZone2%";
//     document.getElementById("owmWhatToDisplayZone3").value = "%owmWhatToDisplayZone3%";
     document.getElementById("owmApiToken").value = "%owmApiToken%";
     document.getElementById("owmUnitsFormat").value = "%owmUnitsFormat%";
     document.getElementById("owmUpdateInterval").value = "%owmUpdateInterval%";
     document.getElementById("owmCity").value = "%owmCity%";
     document.getElementById("fontZone0").value = "%fontZone0%";
     document.getElementById("fontZone1").value = "%fontZone1%";
     document.getElementById("fontZone2").value = "%fontZone2%";
//     document.getElementById("fontZone3").value = "%fontZone3%";
     document.getElementById("haAddr").value = "%haAddr%";
     document.getElementById("haApiHttpType").value = "%haApiHttpType%";
     document.getElementById("haApiToken").value = "%haApiToken%";
     document.getElementById("haApiPort").value = "%haApiPort%";
     document.getElementById("haUpdateInterval").value = "%haUpdateInterval%";
     document.getElementById("haSensorIdZone0").value = "%haSensorIdZone0%";
     document.getElementById("haSensorIdZone1").value = "%haSensorIdZone1%";
     document.getElementById("haSensorIdZone2").value = "%haSensorIdZone2%";
//     document.getElementById("haSensorIdZone3").value = "%haSensorIdZone3%";
     document.getElementById("haSensorPostfixZone0").value = "%haSensorPostfixZone0%";
     document.getElementById("haSensorPostfixZone1").value = "%haSensorPostfixZone1%";
     document.getElementById("haSensorPostfixZone2").value = "%haSensorPostfixZone2%";
//     document.getElementById("haSensorPostfixZone3").value = "%haSensorPostfixZone3%";
     document.getElementById("mqttPostfixZone0").value = "%mqttPostfixZone0%";
     document.getElementById("mqttPostfixZone1").value = "%mqttPostfixZone1%";
     document.getElementById("mqttPostfixZone2").value = "%mqttPostfixZone2%";
//     document.getElementById("mqttPostfixZone3").value = "%mqttPostfixZone3%";
     document.getElementById("ds18b20PostfixZone0").value = "%ds18b20PostfixZone0%";
     document.getElementById("ds18b20PostfixZone1").value = "%ds18b20PostfixZone1%";
     document.getElementById("ds18b20PostfixZone2").value = "%ds18b20PostfixZone2%";
//     document.getElementById("ds18b20PostfixZone3").value = "%ds18b20PostfixZone3%";
     document.getElementById("charspacingZone0").value = "%charspacingZone0%";
     document.getElementById("charspacingZone1").value = "%charspacingZone1%";
     document.getElementById("charspacingZone2").value = "%charspacingZone2%";
//     document.getElementById("charspacingZone3").value = "%charspacingZone3%";
     document.getElementById("deviceName").value = "%deviceName%";
     document.getElementById("ds18b20UpdateInterval").value = "%ds18b20UpdateInterval%";
     document.getElementById("ds18b20UnitsFormat").value = "%ds18b20UnitsFormat%";
     if (%disableServiceMessages% == "1") {
      document.getElementById("disableServiceMessages").checked = true;
     } else {
      document.getElementById("disableServiceMessages").checked = false;
     }
     if (%disableDotsBlink% == "1") {
      document.getElementById("disableDotsBlink").checked = true;
     } else {
      document.getElementById("disableDotsBlink").checked = false;
     }
     if (%ds18b20Enable% == "1") {
      document.getElementById("ds18b20Enable").checked = true;
     } else {
      document.getElementById("ds18b20Enable").checked = false;
     }
     
//     const ZoneNumbersFirstValue = "%zoneNumbers%";
//     if (ZoneNumbersFirstValue == "1") {
     if (document.getElementById("zoneNumbers").value == "1") {
        $(document.getElementById("zone1BeginDiv")).hide();
        $(document.getElementById("zone1EndDiv")).hide();
        $(document.getElementById("zone2BeginDiv")).hide();
        $(document.getElementById("zone2EndDiv")).hide();
//        $(document.getElementById("zone3BeginDiv")).hide();
//        $(document.getElementById("zone3EndDiv")).hide();
      }
      if (document.getElementById("zoneNumbers").value == "2") {
        $(document.getElementById("zone1BeginDiv")).show();
        $(document.getElementById("zone1EndDiv")).show();
        $(document.getElementById("zone2BeginDiv")).hide();
        $(document.getElementById("zone2EndDiv")).hide();
//        $(document.getElementById("zone3BeginDiv")).hide();
//        $(document.getElementById("zone3EndDiv")).hide();
      }
      if (document.getElementById("zoneNumbers").value == "3") {
        $(document.getElementById("zone1BeginDiv")).show();
        $(document.getElementById("zone1EndDiv")).show();
        $(document.getElementById("zone2BeginDiv")).show();
        $(document.getElementById("zone2EndDiv")).show();
//        $(document.getElementById("zone3BeginDiv")).hide();
//        $(document.getElementById("zone3EndDiv")).hide();
      }
      if (document.getElementById("zoneNumbers").value == "4") {
        $(document.getElementById("zone1BeginDiv")).show();
        $(document.getElementById("zone1EndDiv")).show();
        $(document.getElementById("zone2BeginDiv")).show();
        $(document.getElementById("zone2EndDiv")).show();
//        $(document.getElementById("zone3BeginDiv")).show();
//        $(document.getElementById("zone3EndDiv")).show();
      }

      if (document.getElementById("workModeZone0").value == "mqttClient") {
        $(document.getElementById("emptyZone0Div")).hide();
        $(document.getElementById("mqttZone0PrefixDiv")).show();
        $(document.getElementById("mqttPostfixZone0Div")).show();
        $(document.getElementById("mqttDevicePrefixZone0Div")).show();
      }
      if (document.getElementById("workModeZone0").value == "owmWeather") {
        $(document.getElementById("emptyZone0Div")).hide();
        $(document.getElementById("owmWhatToDisplayZone0div")).show();
      }
      if (document.getElementById("workModeZone0").value == "wallClock") {
        $(document.getElementById("emptyZone0Div")).hide();
        $(document.getElementById("clockDisplayFormatZone0Div")).show();
      }
      if (document.getElementById("workModeZone0").value == "haClient") {
        $(document.getElementById("emptyZone0Div")).hide();
        $(document.getElementById("haSensorIdZone0Div")).show();
        $(document.getElementById("haSensorPostfixZone0Div")).show();
      }
      if (document.getElementById("workModeZone0").value == "intTempSensor") {
        $(document.getElementById("emptyZone0Div")).hide();
        $(document.getElementById("ds18b20PostfixZone0Div")).show();
      }
      if (document.getElementById("workModeZone1").value == "mqttClient") {
        $(document.getElementById("emptyZone1Div")).hide();
        $(document.getElementById("mqttZone1PrefixDiv")).show();
        $(document.getElementById("mqttPostfixZone1Div")).show();
        $(document.getElementById("mqttDevicePrefixZone1Div")).show();
      }
      if (document.getElementById("workModeZone1").value == "owmWeather") {
        $(document.getElementById("emptyZone1Div")).hide();
        $(document.getElementById("owmWhatToDisplayZone1div")).show();
      }
      if (document.getElementById("workModeZone1").value == "wallClock") {
        $(document.getElementById("emptyZone1Div")).hide();
        $(document.getElementById("clockDisplayFormatZone1Div")).show();
      }
      if (document.getElementById("workModeZone1").value == "haClient") {
        $(document.getElementById("emptyZone1Div")).hide();
        $(document.getElementById("haSensorIdZone1Div")).show();
        $(document.getElementById("haSensorPostfixZone1Div")).show();
      }
      if (document.getElementById("workModeZone1").value == "intTempSensor") {
        $(document.getElementById("emptyZone1Div")).hide();
        $(document.getElementById("ds18b20PostfixZone1Div")).show();
      }

      if (document.getElementById("workModeZone2").value == "mqttClient") {
        $(document.getElementById("emptyZone2Div")).hide();
        $(document.getElementById("mqttZone2PrefixDiv")).show();
        $(document.getElementById("mqttPostfixZone2Div")).show();
        $(document.getElementById("mqttDevicePrefixZone2Div")).show();
      }
      if (document.getElementById("workModeZone2").value == "owmWeather") {
        $(document.getElementById("emptyZone2Div")).hide();
        $(document.getElementById("owmWhatToDisplayZone2div")).show();
      }
      if (document.getElementById("workModeZone2").value == "wallClock") {
        $(document.getElementById("emptyZone2Div")).hide();
        $(document.getElementById("clockDisplayFormatZone2Div")).show();
      }
      if (document.getElementById("workModeZone2").value == "haClient") {
        $(document.getElementById("emptyZone2Div")).hide();
        $(document.getElementById("haSensorIdZone2Div")).show();
        $(document.getElementById("haSensorPostfixZone2Div")).show();
      }
      if (document.getElementById("workModeZone2").value == "intTempSensor") {
        $(document.getElementById("emptyZone2Div")).hide();
        $(document.getElementById("ds18b20PostfixZone2Div")).show();
      }
      // zone3
//      if (document.getElementById("workModeZone3").value == "mqttClient") {
//        $(document.getElementById("emptyZone3Div")).hide();
//        $(document.getElementById("mqttZone3PrefixDiv")).show();
//        $(document.getElementById("mqttPostfixZone3Div")).show();
//        $(document.getElementById("mqttDevicePrefixZone3Div")).show();
//      }
//      if (document.getElementById("workModeZone3").value == "owmWeather") {
//        $(document.getElementById("emptyZone3Div")).hide();
//        $(document.getElementById("owmWhatToDisplayZone3div")).show();
//      }
//      if (document.getElementById("workModeZone3").value == "wallClock") {
//        $(document.getElementById("emptyZone3Div")).hide();
//        $(document.getElementById("clockDisplayFormatZone3Div")).show();
//      }
//      if (document.getElementById("workModeZone3").value == "haClient") {
//        $(document.getElementById("emptyZone3Div")).hide();
//        $(document.getElementById("haSensorIdZone3Div")).show();
//        $(document.getElementById("haSensorPostfixZone3Div")).show();
//      }
//      if (document.getElementById("workModeZone3").value == "intTempSensor") {
//        $(document.getElementById("emptyZone3Div")).hide();
//        $(document.getElementById("ds18b20PostfixZone3Div")).show();
//      }
    }
   
</script>




<script>
workModeZone0.addEventListener('change', function (e) {
      $(document.getElementById("emptyZone0Div")).show();
      $(document.getElementById("mqttZone0PrefixDiv")).hide();
      $(document.getElementById("mqttPostfixZone0Div")).hide();
      $(document.getElementById("mqttDevicePrefixZone0Div")).hide();
      document.getElementById("scrollPauseZone0").disabled = false;
      $(document.getElementById("owmWhatToDisplayZone0div")).hide();
      $(document.getElementById("clockDisplayFormatZone0Div")).hide();
      $(document.getElementById("haSensorIdZone0Div")).hide();
      $(document.getElementById("haSensorPostfixZone0Div")).hide();
      $(document.getElementById("ds18b20PostfixZone0Div")).hide();
      
      if (e.target.value == "mqttClient") {
        $(document.getElementById("emptyZone0Div")).hide();
        $(document.getElementById("mqttZone0PrefixDiv")).show();
        $(document.getElementById("mqttPostfixZone0Div")).show();
        $(document.getElementById("mqttDevicePrefixZone0Div")).show();
      }
      
      if (e.target.value == "wallClock") {
        $(document.getElementById("emptyZone0Div")).hide();
        $(document.getElementById("clockDisplayFormatZone0Div")).show();
        document.getElementById("scrollPauseZone0").disabled = true;
      }

      if (e.target.value == "owmWeather") {
        $(document.getElementById("emptyZone0Div")).hide();
        $(document.getElementById("owmWhatToDisplayZone0div")).show();
      }

      if (e.target.value == "haClient") {
        $(document.getElementById("emptyZone0Div")).hide();
        $(document.getElementById("haSensorIdZone0Div")).show();
        $(document.getElementById("haSensorPostfixZone0Div")).show();
      }
      if (e.target.value == "intTempSensor") {
        $(document.getElementById("emptyZone0Div")).hide();
        $(document.getElementById("ds18b20PostfixZone0Div")).show();
      }
    });

    workModeZone1.addEventListener('change', function (e) {
      $(document.getElementById("emptyZone1Div")).show();
      $(document.getElementById("mqttZone1PrefixDiv")).hide();
      $(document.getElementById("mqttPostfixZone1Div")).hide();
      $(document.getElementById("mqttDevicePrefixZone1Div")).hide();
      document.getElementById("scrollPauseZone1").disabled = false;
      $(document.getElementById("owmWhatToDisplayZone1div")).hide();
      $(document.getElementById("clockDisplayFormatZone1Div")).hide();
      $(document.getElementById("haSensorIdZone1Div")).hide();
      $(document.getElementById("haSensorPostfixZone1Div")).hide();
      $(document.getElementById("ds18b20PostfixZone1Div")).hide();

      if (e.target.value == "mqttClient") {
        $(document.getElementById("emptyZone1Div")).hide();
        $(document.getElementById("mqttZone1PrefixDiv")).show();
        $(document.getElementById("mqttPostfixZone1Div")).show();
        $(document.getElementById("mqttDevicePrefixZone1Div")).show();
      }
      
      if (e.target.value == "wallClock") {
        $(document.getElementById("emptyZone1Div")).hide();
        $(document.getElementById("clockDisplayFormatZone1Div")).show();
        document.getElementById("scrollPauseZone1").disabled = true;
      }

      if (e.target.value == "owmWeather") {
        $(document.getElementById("emptyZone1Div")).hide();
        $(document.getElementById("owmWhatToDisplayZone1div")).show();
      }

      if (e.target.value == "haClient") {
        $(document.getElementById("emptyZone1Div")).hide();
        $(document.getElementById("haSensorIdZone1Div")).show();
        $(document.getElementById("haSensorPostfixZone1Div")).show();
      }
      if (e.target.value == "intTempSensor") {
        $(document.getElementById("emptyZone1Div")).hide();
        $(document.getElementById("ds18b20PostfixZone1Div")).show();
      }
    });

    workModeZone2.addEventListener('change', function (e) {
      $(document.getElementById("emptyZone2Div")).show();
      $(document.getElementById("mqttZone2PrefixDiv")).hide();
      $(document.getElementById("mqttPostfixZone2Div")).hide();
      $(document.getElementById("mqttDevicePrefixZone2Div")).hide();
      document.getElementById("scrollPauseZone2").disabled = false;
      $(document.getElementById("owmWhatToDisplayZone2div")).hide();
      $(document.getElementById("clockDisplayFormatZone2Div")).hide();
      $(document.getElementById("haSensorIdZone2Div")).hide();
      $(document.getElementById("haSensorPostfixZone2Div")).hide();
      $(document.getElementById("ds18b20PostfixZone2Div")).hide();
      
      if (e.target.value == "mqttClient") {
        $(document.getElementById("emptyZone2Div")).hide();
        $(document.getElementById("mqttZone2PrefixDiv")).show();
        $(document.getElementById("mqttPostfixZone2Div")).show();
        $(document.getElementById("mqttDevicePrefixZone2Div")).show();
      }
      
      if (e.target.value == "wallClock") {
        $(document.getElementById("emptyZone2Div")).hide();
        $(document.getElementById("clockDisplayFormatZone2Div")).show();
        document.getElementById("scrollPauseZone2").disabled = true;
      }

      if (e.target.value == "owmWeather") {
        $(document.getElementById("emptyZone2Div")).hide();
        $(document.getElementById("owmWhatToDisplayZone2div")).show();
      }

      if (e.target.value == "haClient") {
        $(document.getElementById("emptyZone2Div")).hide();
        $(document.getElementById("haSensorIdZone2Div")).show();
        $(document.getElementById("haSensorPostfixZone2Div")).show();
      }
      if (e.target.value == "intTempSensor") {
        $(document.getElementById("emptyZone2Div")).hide();
        $(document.getElementById("ds18b20PostfixZone2Div")).show();
      }
    });

//    workModeZone3.addEventListener('change', function (e) {
//      $(document.getElementById("emptyZone3Div")).show();
//      $(document.getElementById("mqttZone3PrefixDiv")).hide();
//      $(document.getElementById("mqttPostfixZone3Div")).hide();
//      $(document.getElementById("mqttDevicePrefixZone3Div")).hide();
//      document.getElementById("scrollPauseZone3").disabled = false;
//      $(document.getElementById("owmWhatToDisplayZone3div")).hide();
//      $(document.getElementById("clockDisplayFormatZone3Div")).hide();
//      $(document.getElementById("haSensorIdZone3Div")).hide();
//      $(document.getElementById("haSensorPostfixZone3Div")).hide();
//      $(document.getElementById("ds18b20PostfixZone3Div")).hide();
//      
//      if (e.target.value == "mqttClient") {
//        $(document.getElementById("emptyZone3Div")).hide();
//        $(document.getElementById("mqttZone3PrefixDiv")).show();
//        $(document.getElementById("mqttPostfixZone3Div")).show();
//        $(document.getElementById("mqttDevicePrefixZone3Div")).show();
//      }
//      
//      if (e.target.value == "wallClock") {
//        $(document.getElementById("emptyZone3Div")).hide();
//        $(document.getElementById("clockDisplayFormatZone3Div")).show();
//        document.getElementById("scrollPauseZone3").disabled = true;
//      }
//
//      if (e.target.value == "owmWeather") {
//        $(document.getElementById("emptyZone3Div")).hide();
//        $(document.getElementById("owmWhatToDisplayZone3div")).show();
//      }
//
//      if (e.target.value == "haClient") {
//        $(document.getElementById("emptyZone3Div")).hide();
//        $(document.getElementById("haSensorIdZone3Div")).show();
//        $(document.getElementById("haSensorPostfixZone3Div")).show();
//      }
//      if (e.target.value == "intTempSensor") {
//        $(document.getElementById("emptyZone3Div")).hide();
//        $(document.getElementById("ds18b20PostfixZone3Div")).show();
//      }
//    });

    document.getElementById("zoneNumbers").addEventListener('change', function (e) {
      if (e.target.value == "1") {
        $(document.getElementById("zone1BeginDiv")).hide();
        $(document.getElementById("zone1EndDiv")).hide();
        $(document.getElementById("zone2BeginDiv")).hide();
        $(document.getElementById("zone2EndDiv")).hide();
//        $(document.getElementById("zone3BeginDiv")).hide();
//        $(document.getElementById("zone3EndDiv")).hide();
      }
      if (e.target.value == "2") {
        $(document.getElementById("zone1BeginDiv")).show();
        $(document.getElementById("zone1EndDiv")).show();
        $(document.getElementById("zone2BeginDiv")).hide();
        $(document.getElementById("zone2EndDiv")).hide();
//        $(document.getElementById("zone3BeginDiv")).hide();
//        $(document.getElementById("zone3EndDiv")).hide();
      }
      if (e.target.value == "3") {
        $(document.getElementById("zone1BeginDiv")).show();
        $(document.getElementById("zone1EndDiv")).show();
        $(document.getElementById("zone2BeginDiv")).show();
        $(document.getElementById("zone2EndDiv")).show();
//        $(document.getElementById("zone3BeginDiv")).hide();
//        $(document.getElementById("zone3EndDiv")).hide();
      }
      if (e.target.value == "4") {
        $(document.getElementById("zone1BeginDiv")).show();
        $(document.getElementById("zone1EndDiv")).show();
        $(document.getElementById("zone2BeginDiv")).show();
        $(document.getElementById("zone2EndDiv")).show();
//        $(document.getElementById("zone3BeginDiv")).show();
//        $(document.getElementById("zone3EndDiv")).show();
      }
    });

    function preparePostRequest(event, key, val) {
        event.preventDefault(); //This will prevent the default click action
        if (key == "intensity") {
            document.getElementById('intensityValue').innerHTML = val;
            data = {
                key:       "intensity",
                intensity: val
            }
            sendPost(data);
        }

        if (key == "displaySettings") {
            data = {
                key:          "displaySettings",
                zoneNumbers:  document.getElementById("zoneNumbers").value,
                zone0Begin:   document.getElementById("zone0Begin").value,
                zone0End:     document.getElementById("zone0End").value,
                zone1Begin:   document.getElementById("zone1Begin").value,
                zone1End:     document.getElementById("zone1End").value,
                zone2Begin:   document.getElementById("zone2Begin").value,
                zone2End:     document.getElementById("zone2End").value
//                zone3Begin:   document.getElementById("zone3Begin").value,
//                zone3End:     document.getElementById("zone3End").value
            }
            sendPost(data);
        }
        
        if (key == "zone0Settings") {
            data = {
                key:                   "zoneSettings",
                zone:                  0,
                workMode:              document.getElementById("workModeZone0").value,
                font:                  document.getElementById("fontZone0").value,
                owmWhatToDisplay:      document.getElementById("owmWhatToDisplayZone0").value,
                haSensorId:            document.getElementById("haSensorIdZone0").value,
                haSensorPostfix:       document.getElementById("haSensorPostfixZone0").value,
                clockDisplayFormat:    document.getElementById("clockDisplayFormatZone0").value,
                scrollSpeed:           document.getElementById("scrollSpeedZone0").value,
                scrollPause:           document.getElementById("scrollPauseZone0").value,
                scrollAlign:           document.getElementById("scrollAlignZone0").value,
                scrollEffectIn:        document.getElementById("scrollEffectZone0In").value,
                scrollEffectOut:       document.getElementById("scrollEffectZone0Out").value,
                charspacing:           document.getElementById("charspacingZone0").value,
                mqttTextTopic:         document.getElementById("mqttTextTopicZone0").value,
                mqttPostfix:           document.getElementById("mqttPostfixZone0").value,
                ds18b20Postfix:        document.getElementById("ds18b20PostfixZone0").value
                
            }
            sendPost(data);
        }
        
        if (key == "zone1Settings") {
            data = {
                key:                   "zoneSettings",
                zone:                  1,
                workMode:              document.getElementById("workModeZone1").value,
                font:                  document.getElementById("fontZone1").value,                
                owmWhatToDisplay:      document.getElementById("owmWhatToDisplayZone1").value,
                haSensorId:            document.getElementById("haSensorIdZone1").value,
                haSensorPostfix:       document.getElementById("haSensorPostfixZone1").value,
                clockDisplayFormat:    document.getElementById("clockDisplayFormatZone1").value,
                scrollSpeed:           document.getElementById("scrollSpeedZone1").value,
                scrollPause:           document.getElementById("scrollPauseZone1").value,
                scrollAlign:           document.getElementById("scrollAlignZone1").value,
                scrollEffectIn:        document.getElementById("scrollEffectZone1In").value,
                scrollEffectOut:       document.getElementById("scrollEffectZone1Out").value,
                charspacing:           document.getElementById("charspacingZone1").value,
                mqttTextTopic:         document.getElementById("mqttTextTopicZone1").value,
                mqttPostfix:           document.getElementById("mqttPostfixZone1").value,
                ds18b20Postfix:        document.getElementById("ds18b20PostfixZone1").value
            }
            sendPost(data);
        }

        if (key == "zone2Settings") {
            data = {
                key:                   "zoneSettings",
                zone:                  2,
                workMode:              document.getElementById("workModeZone2").value,
                font:                  document.getElementById("fontZone2").value,
                owmWhatToDisplay:      document.getElementById("owmWhatToDisplayZone2").value,
                haSensorId:            document.getElementById("haSensorIdZone2").value,
                haSensorPostfix:       document.getElementById("haSensorPostfixZone2").value,
                clockDisplayFormat:    document.getElementById("clockDisplayFormatZone2").value,
                scrollSpeed:           document.getElementById("scrollSpeedZone2").value,
                scrollPause:           document.getElementById("scrollPauseZone2").value,
                scrollAlign:           document.getElementById("scrollAlignZone2").value,
                scrollEffectIn:        document.getElementById("scrollEffectZone2In").value,
                scrollEffectOut:       document.getElementById("scrollEffectZone2Out").value,
                charspacing:           document.getElementById("charspacingZone2").value,
                mqttTextTopic:         document.getElementById("mqttTextTopicZone2").value,
                mqttPostfix:           document.getElementById("mqttPostfixZone2").value,
                ds18b20Postfix:        document.getElementById("ds18b20PostfixZone2").value
            }
            sendPost(data);
        }

//        if (key == "zone3Settings") {
//            data = {
//                workModeZone3:              document.getElementById("workModeZone3").value,
//                owmWhatToDisplayZone3:      document.getElementById("owmWhatToDisplayZone3").value,
//                haSensorIdZone3:            document.getElementById("haSensorIdZone3").value,
//                haSensorPostfixZone3:       document.getElementById("haSensorPostfixZone3").value,
//                clockDisplayFormatZone3:    document.getElementById("clockDisplayFormatZone3").value,
//                scrollSpeedZone3:           document.getElementById("scrollSpeedZone3").value,
//                scrollPauseZone3:           document.getElementById("scrollPauseZone3").value,
//                scrollAlignZone3:           document.getElementById("scrollAlignZone3").value,
//                scrollEffectZone3In:        document.getElementById("scrollEffectZone3In").value,
//                scrollEffectZone3Out:       document.getElementById("scrollEffectZone3Out").value,
//                fontZone3:                  document.getElementById("fontZone3").value,
//                charspacingZone3:           document.getElementById("charspacingZone3").value,
//                mqttTextTopicZone3:         document.getElementById("mqttTextTopicZone3").value,
//                mqttPostfixZone3:           document.getElementById("mqttPostfixZone3").value,
//                ds18b20PostfixZone3:        document.getElementById("ds18b20PostfixZone3").value
//            }
//            sendPost(data);
//        }

        if (key == "applyMqttSettings") {
            data = {
                key:                "mqttSettings",
                mqttEnable:         document.querySelector("#mqttEnable").checked,
                mqttServerAddress:  document.getElementById("mqttServerAddress").value,
                mqttServerPort:     document.getElementById("mqttServerPort").value,
                mqttUsername:       document.getElementById("mqttUsername").value,
                mqttPassword:       document.getElementById("mqttPassword").value
            }
            sendPost(data);
        }

        if (key == "applyWallClockSettings") {
            data = {
                key:                    "wallClockSett",
                ntpTimeZone:            document.getElementById("ntpTimeZone").value,
                disableDotsBlink:       document.querySelector('#disableDotsBlink').checked,
                ntpUpdateInterval:      document.getElementById("ntpUpdateInterval").value,
                ntpServer:              document.getElementById("ntpServer").value
            }
            sendPost(data);
        }

        if (key == "applyOwmSettings") {
            data = {
                key:               "owmSettings",
                owmApiToken:       document.getElementById("owmApiToken").value,
                owmUnitsFormat:    document.getElementById("owmUnitsFormat").value,
                owmUpdateInterval: document.getElementById("owmUpdateInterval").value,
                owmCity:           document.getElementById("owmCity").value
            }
            sendPost(data);
        }

        if (key == "applyHaSettings") {
            data = {
                key:                "haSettings",
                haAddr:             document.getElementById("haAddr").value,
                haApiToken:         document.getElementById("haApiToken").value,
                haApiHttpType:      document.getElementById("haApiHttpType").value,
                haApiPort:          document.getElementById("haApiPort").value,
                haUpdateInterval:   document.getElementById("haUpdateInterval").value
            }
            sendPost(data);
        }

        if (key == "applySystemSettings") {
            data = {
                key:                    "systemSettings",
                deviceName:             document.getElementById("deviceName").value,
                disableServiceMessages: document.querySelector('#disableServiceMessages').checked
            }
            sendPost(data);
        }  
        if (key == "applyDs18b20Settings") {
            data = {
                key:                    "ds18b20Settings",
                ds18b20Enable:          document.querySelector('#ds18b20Enable').checked,
                ds18b20UpdateInterval:  document.querySelector('#ds18b20UpdateInterval').value,
                ds18b20UnitsFormat:     document.querySelector('#ds18b20UnitsFormat').value
            }
            sendPost(data);
        }
        

    };

    function sendPost(dataPost) {
        var toastDanger =   new bootstrap.Toast(document.getElementById('liveToastDanger'));
        var toastSuccess =  new bootstrap.Toast(document.getElementById('liveToastSuccess'));

        var request = $.ajax({
        url:      "/api/config",
        method:   "POST",
        cache:    false,
        data:     dataPost,
        dataType: "json"
        });
        
        request.done(function( msg ) {
            toastSuccess.show();            
        });
            
        request.fail(function( jqXHR, textStatus, responseText ) {
            alert( "Request failed: " + responseText );
            toastDanger.show();
        });
    }
</script>

</body>
</html>)=====";


#endif
