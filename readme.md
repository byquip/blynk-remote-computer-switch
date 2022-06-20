# Blynk remote computer switch

---

<details>
<summary><h2>Blynk account and device configuration (Click to expand)</h2></summary>
<p>
  
1. Create a Blynk account. Go to [Blynk.io](https://blynk.io).
2. Get confirmation email and set password. \
![Blynk](/pics/blk_1.png)

3. Create a template. \
![Template](/pics/blk_7.png) \
![Template](/pics/blk_8.png) \
Add virtual pin ```V0``` \
![Virtual pin](/pics/blk_9.png) \
![Virtual pin](/pics/blk_10.png) \
Copy firmware configuration and set to [Edgent_ESP8266.ino](/Edgent_ESP8266/Edgent_ESP8266.ino) (lines 2-3)
![firmware configuration](/pics/blk_11.png)
4. Add new device. \ 
![firmware configuration](/pics/blk_12.png) \
![firmware configuration](/pics/blk_13.png) \
![firmware configuration](/pics/blk_14.png) \
 Save ```AUTHTOKEN``` for later. \
![firmware configuration](/pics/blk_15.png)
  
</p>
</details>

---

<details>
<summary><h2>Arduino sketch and connection(Click to expand)</h2></summary>
<p>
  
Board: WeMos D1 Mini
1. Blynk Library to [download](https://github.com/blynkkk/blynk-library) or [here](https://github.com/byquip/blynk-remote-computer-switch/blob/main/blynk-library-master.zip)
2. Setup board from the library. \
![Setup board from the library.](/pics/blk_16.png)
3. Use an [example](/Edgent_ESP8266/Edgent_ESP8266.ino) and program the board.
4. ***Connect board and home WIFI network with [Blynk app](https://play.google.com/store/apps/details?id=cloud.blynk) from play market [in video (by timecode)](https://youtu.be/zD4jOaNtNnA?t=536)***
5. Scheme of connections.
![scheme](/pics/b2.png)
  
</p>
</details>

---

<details>
<summary><h2>Blynk API and HTTP shortcuts (Click to expand)</h2></summary>
<p>

1. Take ```AUTHTOKEN``` from here:
![AUTHTOKEN](/pics/blk_15.png)
2. Download [Http Shortcuts app](https://play.google.com/store/apps/details?id=ch.rmy.android.http_shortcuts) \
![Http Shortcuts app](/pics/http_shorts_2.png)
3. Import prepared [shortcuts](https://github.com/byquip/blynk-remote-computer-switch/blob/main/shortcuts.zip) using ```Import from File``` 
4. Set ```AUTHTOKEN``` to the variable ```{token}```: \
![shortcuts varianle](/pics/http_shorts_1.jpg)
5. Set shortcut ```PC turn ON``` or ```PC turn OFF``` on homescreen holding line with shortcut.
  
</p>
</details>
