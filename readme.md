# cmd_pad

![cmdpad](https://i.imgur.com/wUlj73f.jpg)

*A simple, handwired 8 key interface with rotary encoder, based on a great stream deck alternative design. (streamcheap).*
*Current default map currently only supports a single layer.*

* Keyboard Maintainer: [SiegeCMD](https://github.com/SiegeCMD)
* Shoutout to [meep_](https://www.thingiverse.com/_meep/designs) for the remixed streamcheap case and idea!
## Hardware Requirements:

* [Arduno Pro Micro (Leonardo)](https://www.amazon.com/arduino-pro-micro-5v/s?k=arduino+pro+micro+5v) 
* [EC-11 Encoder](https://www.amazon.com/s?k=ec11+rotary+encoder&sprefix=EC+11+%2Caps%2C167&ref=nb_sb_ss_ts-doa-p_1_6) + [Metal knob](https://www.amazon.com/Taiss-Aluminum-Electronic-Potentiometer-Knob%EF%BC%8CSwitch/dp/B07K8589MJ/ref=sr_1_20?crid=1VKLO8G7MN09T&keywords=Rotary%2Bencoder%2Bknob%2Bmetal&qid=1690288220&sprefix=rotary%2Bencode%2Bknob%2Bmetal%2Caps%2C213&sr=8-20&th=1)
* [3D printed case (Stream Cheap)](https://www.thingiverse.com/thing:4303318) (print w/ a low infill and white PLA for best results)
* [M3x8 bolts](https://www.amazon.com/1305Pcs-Metric-Aassortment-M2-M3/dp/B0C1GFRHGX/ref=sr_1_1_sspa?crid=RTO9MYM4E371&keywords=M3+bolts&qid=1690316501&sprefix=m3+bolt%2Caps%2C215&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) 
* [WS2812b strip](https://www.amazon.com/LOAMLIN-Individually-Addressable-144Pixels-Waterproof/dp/B0BDRCQWWQ/ref=sr_1_2_sspa?keywords=WS2812b+strip&qid=1690316445&sr=8-2-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1)
* [7 Switches](https://keygem.com/collections/switches)

## Wiring

[Pro Micro pinout](https://i.imgur.com/wMNx2u6.png) translated to [QMK Pinout](https://golem.hu/pic/pro_micro_pinout.jpg)
See https://golem.hu/article/pro-micro-pinout for more information.

```
Ardunio pinout mapping:

    D3 |---------| RAW 
    D2 |         | GND 
GND GN |         | RST 
    GN |         | VCC 5v
LED D1 | Arduino | F4  
A0  D0 |   Pro   | F5  encoder E/R3
A1  D4 |  Micro  | F6  encoder B/R1
B0  C6 |         | F7  encoder A/R2
B1  D7 |         | B1  D1
    E6 |         | B3  C0
    B4 |         | B2  C1
    B5 |---------| B6  

// note that this wiring is not exactly optimal and subject to my specific build and this builds keymap
```

```
Pin to switch mapping:

    0      1      2      3
+------+------+------+------+
|   D0  |  C6  |  B3  |  F5  |   0
+------+------+------+------+
|   D4  |  D7  |  B2  |  B1  |   1
+------+------+------+------+

```

Make example for this keyboard (after setting up your build environment):

    make cmdpad:default

    qmk compile -kb cmdpad -km default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
  
## Bootloader

Enter the bootloader:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Manual reset**: Jump the RST and GND pins on the Arduino pro micro.