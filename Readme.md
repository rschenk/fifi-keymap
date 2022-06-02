# Fifi Keymap

For all intents and purposes, a Fifi is a crkbd. The only difference hardware-wise is the LED underglow config, which is easily overridden. There are four commits here to configure the default crkbd keymap into a Fifi one. The first commit is simply the default crkbd keymap. The second commit is the only necessary one, and the final two are how I personally configure mine.

Get started by executing

```shell
$ qmk new-keymap -kb crkbd
```

Then make the changes from the second commit to get your underglow LEDs cranking.