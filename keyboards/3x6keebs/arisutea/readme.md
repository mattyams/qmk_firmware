# arisutea

![Arisutea-builds](https://i.imgur.com/b8SRfIZ.jpg)

A keyboard inspired by Fate's Arisu, Lyn's EM7 and TGR Alice.

* Keyboard Maintainer: [mattyams](https://github.com/mattyams)
* Hardware Supported:
  * [Arisutea r01](rev1) PCBs. ATmega32u4 (no LEDs)
  * [Arisutea r06](rev2) PCBs, ATmega32u4 (LED strip underglow support, LED indicators)
  * [Arisutea RGB](rgb)  PCBs, ATmega32u4 (SK6812Mini-E LED underglow, LED indicators)
  * [Arisutea STM32](stm32) PCBs, STM32F072 (STM32 MCU, LED indicators)
* Hardware Availability: [PCB](https://github.com/mattyams/arisutea-pcb)

Make example for this keyboard (after setting up your build environment):

    * qmk compile -kb 3x6keebs/arisutea/rev1 -km default
    * qmk compile -kb 3x6keebs/arisutea/rev2 -km default
    * qmk compile -kb 3x6keebs/arisutea/rgb -km default
    * qmk compile -kb 3x6keebs/arisutea/rgb_lgui -km default
    * qmk compile -kb 3x6keebs/arisutea/stm32 -km default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
