# CorsaVan

The CorsaVan is a 40% PCB that aims to meet the following goals:

* Switches oriented such that the LEDs are South-facing, for
  compatibility with Cherry profile keycaps.
* USB Type-C support in both A to C and C to C configurations.
* QMK support.
* ESD protection circuitry, including data line protection and a
  polyfuse on the VCC line.
* Per key SK6812-MiniE and underglow LEDs - rgb verson only
* Fits in MiniVan keyboard cases. (Maybe)

More info on the project, including all of the design files, can be found [here](https://github.com/mattyams/corsavan).

Keyboard Maintainer: [mattyams](https://github.com/mattyams)  
Hardware Supported: CorsaVan PCB rev1, rgb  
Hardware Availability: Prototypes only at this time.

Make example for this keyboard (after setting up your build environment):

    * qmk compile -kb 3x6keebs/corsavan/rev1 -km default
    * qmk compile -kb 3x6keebs/corsavan/rgb -km default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
