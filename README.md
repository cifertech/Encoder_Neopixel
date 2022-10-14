<div align="center">

  <img src="https://user-images.githubusercontent.com/62047147/195847997-97553030-3b79-4643-9f2c-1f04bba6b989.png" alt="logo" width="100" height="auto" />
  <h1>Encoder Neopixel</h1>
  
  <p>
    Control Neopixel with Encoder
  </p>
  
  
<!-- Badges -->

<p>
<a href="https://github.com/cifertech/Encoder_Neopixel" title="Go to GitHub repo"><img src="https://img.shields.io/static/v1?label=cifertech&message=Encoder_Neopixel&color=white&logo=github" alt="cifertech - Encoder_Neopixel"></a>
<a href="https://github.com/cifertech/Encoder_Neopixel"><img src="https://img.shields.io/github/stars/cifertech/Encoder_Neopixel?style=social" alt="stars - Encoder_Neopixel"></a>
<a href="https://github.com/cifertech/Encoder_Neopixel"><img src="https://img.shields.io/github/forks/cifertech/Encoder_Neopixel?style=social" alt="forks - Encoder_Neopixel"></a>
</p>
   
<h4>
    <a href="https://twitter.com/cifertech1">TWITTER</a>
  <span> · </span>
    <a href="https://www.instagram.com/cifertech/">INSTAGRAM</a>
  <span> · </span>
    <a href="https://www.youtube.com/c/cifertech">YOUTUBE</a>
  <span> · </span>
    <a href="https://cifertech.net/">WEBSITE</a>
  </h4>
</div>

<br />

<!-- Table of Contents -->
# :notebook_with_decorative_cover: Table of Contents

- [About the Project](#star2-about-the-project)
  * [Pictures](#camera-Pictures)
  * [Features](#dart-features)
- [Getting Started](#toolbox-getting-started)
  * [Schematic](#electric_plug-Schematic)
- [Usage](#eyes-usage)
- [Contributing](#wave-contributing)
- [License](#warning-license)
- [Contact](#handshake-contact)

  

<!-- About the Project -->
## :star2: About the Project
#### The Neopixel LED module has many attractive features. With a microcontroller base, they can produce millions of different lights. In this tutorial, we are going to change the status of the neopixel LED according to the required colors with the help of the rotary encoder module and Arduino board. In this way, by changing the rotary angle of the encoder in each step, the status of the neopixel LED will also change.


<!-- Pictures -->
### :camera: Pictures

<div align="center"> 
  <img src="https://user-images.githubusercontent.com/62047147/195953642-765660d1-a575-4bf3-8c3f-62787ce49350.jpg" alt="screenshot" />
</div>

<!-- Features -->
### :dart: Features

- Choose Neopixel Colors 
- Define Diffrent Modes

<!-- Getting Started -->
## 	:toolbox: Getting Started

In the neopixel LED control project, by specifying the values of R, G, and B in the project code, the neopixel status will change by moving each step of the rotary encoder module. In this way, each step of the encoder represents a case in the project code. Each case comes with certain values, which are displayed by changing the status of the encoder.

- Arduino Nano
- Rotary Encoder
- Neopixel LED

<!-- Schematic -->
### :electric_plug: Schematic
Pins 2 on the Arduino connect to S1 and S2 on the rotary encoder. Also, pin 4 on the Arduino connects to the input of the rotary switch. Then pin 6 on the Arduino connects to the neopixel data input. Both modules are powered by 5 volts.

* Encoder and Arduino

| Arduino| Encoder|  
| ----   | -----|
| 4 | Key |
| 2 | S1  |
| 3 | S2  |
| Vin  | 5v  |
| GND  | GND |


* Neopixel and Arduino

| Arduino| Neopixel|
| ----   | -----|
| 6  | Din |
| Vin | 5v |
| GND | GND |

 
* Complete Schematic

<img src="https://user-images.githubusercontent.com/62047147/195954818-27e9e8ce-1579-4804-84bb-cf89b2dfcd67.jpg" alt="screenshot" width="800" height="auto" />
   
<!-- Usage -->
## :eyes: Usage

using neopixel ring modules and a rotary encoder as well as an Arduino nano board, we created and displayed different modes with neopixels, but you can also change the created modes according to the need.

<!-- Contributing -->
## :wave: Contributing

<a href="https://github.com/cifertech/Encoder_Neopixel/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=cifertech/Encoder_Neopixel" />
</a>


<!-- License -->
## :warning: License

Distributed under the MIT License. See LICENSE.txt for more information.


<!-- Contact -->
## :handshake: Contact

CiferTech - [@twitter](https://twitter.com/cifertech1) - CiferTech@gmali.com

Project Link: [https://github.com/cifertech/Encoder_Neopixel](https://github.com/cifertech/Encoder_Neopixel)


