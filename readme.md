# Blynk remote computer switch
Board: [WeMos D1 Mini]()
app: [link](https://play.google.com/store/apps/details?id=ch.rmy.android.http_shortcuts) \
app: [link](https://play.google.com/store/apps/details?id=cloud.blynk) \

1. Blynk\
  set account and device\
  set code for device\
  program arduino settings\
  link to blynk [library](https://github.com/blynkkk/blynk-library) \
  link to example [*.ino](https://github.com/blynkkk/blynk-library/blob/master/examples/Blynk.Edgent/Edgent_ESP8266/Edgent_ESP8266.ino) \
  my arduino code [+](https://github.com/byquip/blynk-remote-computer-switch/blob/main/Edgent_ESP8266/Edgent_ESP8266.ino) \
  TODO: Add connection to board script [in video](https://www.youtube.com/watch?v=zD4jOaNtNnA)
2. Blynk API \
```https://blynk.cloud/external/api/update?token={token}&v0={pc_switch_value}``` \
```https://blynk.cloud/external/api/get?token={token}v0``` \
```{token}``` - is your personal token for device.\
```{pc_switch_value}``` - is variable which contains inverse of current switch state.

3. http shortcuts
  app\
  imports shortcuts\
  change token

---

<details>
<summary><h2>Board WeMos D1 Mini (Click to expand)</h2></summary>
<p>
1. Board.\
![Board](https://github.com/byquip/blynk-remote-computer-switch/blob/main/pics/board.png)
  
</p>
</details>
