# A SOUP-A COOL RAM-based LED CUBE for Retro Computers!
## Images
![3DRender](https://github.com/12zcab/Led-Cubic-RAM/raw/refs/heads/main/IMG/3DRender.png)
![Design](https://github.com/12zcab/Led-Cubic-RAM/raw/refs/heads/main/IMG/design.png)
![Routing](https://github.com/12zcab/Led-Cubic-RAM/raw/refs/heads/main/IMG/Routing.png)
## Zine Page
![Zine](https://github.com/12zcab/Led-Cubic-RAM/raw/refs/heads/main/IMG/Zine.png)
## What it does?
It have a normal SRAM pinout for Retro Computer. HOWEVER,ANY DATA YOU STORED INTO IT WILL BE RESULTED AS LIGHT SHINING!!!!
Each RGB LED = 1 Byte from 0 to FF , meaning it have 16 Color Depth for each channel (RGB)
It's works similar to a VRAM with a parallel Dual-DataBus CMOS SRAM.
Really Cool for retro computers as a Screen or a Output or even for Debugging
## Why I made this?
Because I have designed and will design many Z80 and 8086,88 based retro computers and VGA is just too hard for me to design but I don't really like using a Arduino or Serial IC to Debug so I made this RGB Led Cube with 512 Leds to Visualize my RAM usage :D
## How to Assemble it?
As I have not yet built it irl,I can't provide and photo right now...
But Basically it work like this:
1.You need to Order a PCBA service from JLCPCB as this save u a lot of time and much safer as soldering SMT components is not something everybody can handle.

2.You need to Solder IC sockets and PinHeaders

3.Prepare a Hard Copper 0.8mm Diameter Wire and split it into 5 segments each about 30CM

4.solder the copper Wire into the 5V and GND hole on the mainboard PCB

5.Put in esp32 and the RAM and the Oled to test if the mainboard works

6.Start stacking the RGB Led Board and solder the GND and 5V hole of it,remember to align all the DIN DOUT hole on the same side.

7.solder the DIN hole of the bottom RGB LED Board to the Main Board.

8.Solder the Upper DIN hole to the Lower DOUT hole for every single RGB LED Board (YEAH THIS PROJECT IS EXTENDABLE U BASICALLY CAN STACK UNLIMITED RGB BOARDS!!(Yah but the FPS will be lowered actually))