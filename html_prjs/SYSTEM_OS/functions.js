body {
    margin: 0;
    display: flex;
    align-items: center;
    justify-content: center;
    cursor: crosshair !important;
}
#phone {
    width: 80vw;
    height: 100vh;
    border-radius: 20px;
    background: linear-gradient(83deg, #111, #555, #111);
}
#screen {
    height: 75vh;
    width: 75vw;
    position: fixed;
    left: 12.5vw;
    top: 10vh;
    background: #000;
    display: flex;
    align-items: center;
    justify-content: center;
}
#background_recent {
    height: 75vh;
    width: 75vw;
    position: fixed;
    left: 12.5vw;
    top: 10vh;
    display: flex;
    align-items: center;
    justify-content: center;
    background-image: url('https://i.pinimg.com/originals/23/da/97/23da973997be740325a5f50422d1d4aa.jpg');
    background-size: 100% 100%;
    filter: blur(10px);
}
#currentRecent {
    height: 75vh;
    width: 75vw;
    position: fixed;
    left: 12.5vw;
    top: 10vh;
    display: flex;
    align-items: center;
    justify-content: center;
}
#ctrl {
    height: 50px;
    width: 50px;
    background: linear-gradient(45deg, #333, #555, #333);
    box-shadow: 0 0 2px #222 inset;
    border-radius: 50%;
    position: fixed;
    left: calc(50% - 25px);
    bottom: 2.5vh;
    color: #FFF;
    display: flex;
    justify-content: center;
    align-items: center;
    font-size: 15pt;
    user-select: none;
}
#topBarClock {
    height: 17px;
    display: flex;
    align-items: center;
    justify-content: center;
    width: 75vw;
    position: fixed;
    left: 12.5vw;
    top: 10vh;
    text-align: center;
    font-size: 10pt;
    font-family: 'Roboto';
    font-weight: 600;
    color: #FFF;
    letter-spacing: -1px;
    text-shadow: 0 0 5px #000;
    pointer-events: none;
}
application {
    width: 100%;
    height: 100%;
}
.not_working {
    color: #FFF;
    width: 100%;
    height: 100%;
    display: flex;
    justify-content: center;
    align-items: center;
    font-family: monospace;
}
.home, #recentApps {
    background-image: url('https://i.pinimg.com/originals/23/da/97/23da973997be740325a5f50422d1d4aa.jpg');
    background-size: 100% 100%;
}
#apps {
    table-layout: fixed;
    width: 100%;
    height: 80%;
    margin: 0;
    padding: 0;
}
#recentApps {
    display: flex;
    align-items: center;
    justify-content: center;
}
#primaryApps {
    width: 100%;
    height: 20%;
    margin: 0;
    padding: 0;
    background-color: rgba(255, 255, 255, 0.5);
    display: flex;
    align-items: center;
    justify-content: center;
}
.appIcon:active {
    filter: brightness(75%);
}
.appIcon {
    text-align: center;
    height: 15vw;
    width: 15vw;
    border-radius: 20%;
    display: flex;
    justify-content: center;
    align-items: center;
    margin: 3vw;
    position: relative;
}
#apps .appIcon:after {
    padding-top: 3px;
    content: attr(name);
    width: 15vw;
    font-size: 7pt;
    color: #FFF;
    text-align: center;
    display: block;
    position: absolute;
    left: 0;
    top: 100%;
    overflow: hidden;
    white-space: nowrap;
    font-family: 'Roboto';
}
#primaryApps > .appIcon {
    text-align: center;
    height: 15vw;
    width: 15vw;;
    display: inline-flex;
    justify-content: center;
    align-items: center;
    margin: 3vw;
}
#calc_scn {
    height: calc(20% - 20px);
    width: calc(100% - 20px);
    padding: 10px;
    color: #FFF;
    background: #333;
    text-align: right;
    font-size: 35pt;
    font-weight: lighter;
    overflow: auto;
    overflow-x: auto;
    overflow-y: hidden;
    white-space: nowrap;
    font-family: 'Roboto';
}
#calc_ctrl {
    width: 100%;
    height: 80%;
    table-layout: fixed;
    margin: 0;
    padding: 0;
    border-collapse: collapse;
    text-align: center;
    font-family: 'Roboto';
}
#calc_ctrl > td {
    margin: 0;
    padding: 5px;
    text-align: center;
    font-size: 30pt;
}
#calc_ctrl > td:active {
    filter: brightness(75%);
}
.calcCtrl {
    background: #EEE;
    color: #333;
    box-shadow: 0 0 1px 0 #333 inset;
}
.orangeCalc {
    background: #F80;
    color: #FFF;
    box-shadow: 0 0 1px 0 #333 inset;
}
.lightCalc {
    background: #DDD;
    color: #333;
    box-shadow: 0 0 1px 0 #333 inset;
}
#siri {
    background-image: url('https://i.pinimg.com/originals/23/da/97/23da973997be740325a5f50422d1d4aa.jpg');
    background-size: 100% 100%;
    overflow: hidden;
}
#siri_content {
    height: calc(60% - 90px);
    width: calc(100% - 60px);
    padding: 30px;
    padding-top: 60px;
    background: rgba(18, 18, 18, 0.85);
    color: #FFF;
    font-size: 20pt;
    text-align: center;
    font-family: 'Montserrat', sans-serif;
    text-shadow: 0 0 25px #000;
}
#brokenSiri {
    color: #FFF;
    width: 100%;
    height: 100%;
    display: flex;
    justify-content: center;
    align-items: center;
    font-family: 'Montserrat', sans-serif;
    text-align: center;
}
#calendar {
    font-family: arial;
}
#camera {
    width: 10px;
    height: 10px;
    display: flex;
    align-items: center;
    justify-content: center;
    background: #000;
    position: fixed;
    left: calc(50% - 5px);
    border-radius: 50%;
    top: 5vh;
    box-shadow: 0 0 1px #fff inset;
}
#lense {
    margin: 0;
    height: 7px;
    width: 7px;
    border-radius: 50%;
    background: radial-gradient(#000, #555, #777);
}
/* iOS Sliders borrowed from this codepen: https://codepen.io/aorcsik/pen/OPMyQp */
input[type="checkbox"].ios8-switch {
    position: absolute;
    margin: 8px 0 0 16px;    
}
input[type="checkbox"].ios8-switch + label {
    position: relative;
    padding: 5px 0 0 50px;
    line-height: 2.0em;
}
input[type="checkbox"].ios8-switch + label:before {
    content: "";
    position: absolute;
    display: block;
    left: 0;
    top: 0;
    width: 40px; /* x*5 */
    height: 24px; /* x*3 */
    border-radius: 16px; /* x*2 */
    background: #fff;
    border: 1px solid #d9d9d9;
    -webkit-transition: all 0.3s;
    transition: all 0.3s;
}
input[type="checkbox"].ios8-switch + label:after {
    content: "";
    position: absolute;
    display: block;
    left: 0px;
    top: 0px;
    width: 24px; /* x*3 */
    height: 24px; /* x*3 */
    border-radius: 16px; /* x*2 */
    background: #fff;
    border: 1px solid #d9d9d9;
    -webkit-transition: all 0.3s;
    transition: all 0.3s;
}
input[type="checkbox"].ios8-switch + label:hover:after {
    box-shadow: 0 0 5px rgba(0,0,0,0.3);
}
input[type="checkbox"].ios8-switch:checked + label:after {
    margin-left: 16px;
}
input[type="checkbox"].ios8-switch:checked + label:before {
    background: #55D069;
}


/* End iOS Sliders */
input[type=range] {
  -webkit-appearance: none;
  margin: 10px 0;
  width: 100%;
}
input[type=range]:focus {
  outline: none;
}
input[type=range]::-webkit-slider-runnable-track {
  width: 100%;
  height: 7pt;
  cursor: pointer;
  animate: 0.2s;
  box-shadow: 0px 0px 0px #333;
  background: #CCC;
  border-radius: 25px;
  border: 0px solid #AAA;
}
input[type=range]::-webkit-slider-thumb {
  border: none;
  height: 15pt;
  width: 15pt;
  border-radius: 50%;
  background: #FFF;
  cursor: pointer;
  -webkit-appearance: none;
  margin-top: -4pt;
  box-shadow: 1px 1px 3px #AAA;
}
input[type=range]:hover::-webkit-slider-thumb {
  box-shadow: 1px 1px 5px #777;
}
input[type=range]:focus::-webkit-slider-runnable-track {
  background: #CCC;
}

#settings {
    background: #DDD;
}
#settings_title {
    background: #FFF;
    color: #000;
    text-align: center;
    padding: 10px;
    font-family: 'Roboto';
    font-weight: 800;
    font-size: 11pt;
}
.settings_gap {
    height: 30px;
    width: 100%;
    background: #DDD;
    display: block;
}
.settings_content {
    padding: 10px;
    background: #FFF;
}
.settings_content > a {
    tap-highlight-color: transparent;
    -webkit-tap-highlight-color: transparent;
    display: block;
    color: #36F;
    font-family: 'Roboto';
    font-size: 12pt;
    text-decoration: none;
}
.settings_desc {
    font-size: 10pt;
    color: #777 !important;
    font-family: 'Roboto';
    padding: 15px;
    padding-top: 0;
    padding-bottom: 10px;
}
#toggles {
    width: 100%;
    table-layout: fixed;
    font-size: 12pt;
    font-family: 'Roboto';
}
#toggles td:nth-child(even) {
    text-align: right;
}
#dialer {
    font-family: 'Roboto';
}
#dialer_scn {
    height: 16.6666666667%;
    width: 100%;
    background: #FFF;
    color: #333;
    text-align: right;
    font-size: 25pt;
    display: flex;
    align-items: center;
    justify-content: left;
    
}
#dialer_pad {
    height: 83.3333333333%;
    width: 100%;
    table-layout: fixed;
    text-align: center;
}
.dialerBtn {
    width: 15vw;
    height: 15vw;
    display: inline-flex;
    align-items: center;
    justify-content: center;
    background: #FFF;
    border: solid 1px #333;
    color: #333;
    font-size: 20pt;
    user-select: none;
    border-radius: 50%;
}
.dialerBtn:active {
    transition: all 250ms linear;
    filter: invert(100%);
} 
#callBtn {
    display: inline-flex;
    align-items: center;
    justify-content: center;
    width: 100%;
    color: #FFF;
    background: #33cc33;
    height: 16.6666666667%;
    user-select: none;
    font-size: 25pt;
    text-decoration: none;
}
#cookie_clicker {
    background-image: url('http://photos3.fotosearch.com/bthumb/CSP/CSP993/blue-rays-background-drawing__k14946853.jpg');
    background-size: 100% 100%;
    display: flex;
    align-items: center;
    justify-content: center;
}
#cookie {
    width: 50vw;
    height: 50vw;
}
#cookies {
    font-family: 'Kavoon';
    color: #FFF;
    position: fixed;
    left: 12.5vw;
    top: 20vh;
    width: 75vw;
    text-align: center;
    font-size: 20pt;
}
#cal {
    width: 100%;
    height: 100%;
    text-align: center;
    font-family: 'Roboto';
    font-weight: lighter;
}
#cal_app {
    background: #EFEFEF;
}
.thd {
    border-bottom: solid 1px #DDD;
}
#searchbar {
    background-color: #DDD;
    text-align: center;
    width: calc(80% - 10px);
    height: calc(90% - 10px);
    padding: 5px;
    color: #999;
    border: none;
    border-radius: 5vh;
    overflow: hidden;
    outline: none;
}
#searchbar:focus {
    text-align: left;
    color: #333;
    overflow: auto;
}
