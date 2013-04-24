UV
===

Open soruce/hardware anti-UV bracelet. The bracelet has a UV sensor which will tell you which is the actual UV index (from 0 -no sun- to 11+ -dangerous sun-). It will log the UV index and remind you to re-apply sunscreen.


About me and this project
=========================
I came with this idea after the UVeBand kickstarted failed to get funds. If you want a profesional/commercial product go for it,if they finally make it possible I will buy a couple.

My knowledge of circuit design/electrical is very limited, I have no formal formation (or formation at all) on that area.
I will try to keep the design as minimal as possible (not a bulky bracelet), keep in mind that solder SMD is difficult and no custom PCB is being used.

I also live in a city where the two only hobby/electric shops sucks, it's sad, but it's the true. 99% of the time they don't have the component I'm looking for. Therefor I buy most of the stuff online, while Digikey and Element14 stores are great, I feel a little overhelmed by the amount of variations and possibilities of each component, also, the shipping cost are quite expensive. **I buy most of my stuff on ebay/chinese sites**.



*All being said, this is a homemade project, made to learn more and practice my skills.*

UV index
========
UV index is a number from 0 to 11+. 
0 being no sun and the higher the number, the most dangerous the sun rays get and shorter your exposure to them should be.

* [More info at Wikipedia](http://en.wikipedia.org/wiki/Ultraviolet_index)
* [WHO GlobalUVI](http://www.who.int/uv/publications/en/GlobalUVI.pdf)
* [WHO UVI Homepage](http://www.who.int/uv/en/)



Goals
=====
* Keep it as small as possible (using SMD components, reducing features when possible) and as cheap as possible.
* Make it waterproof (as much as possible). Cover it with latex/silicone (except the sensor and the led). I will not take a shower with it, but I to resists normal use. The rest of the case/bracelet will be 3d printed or resin casted.
* Make the battery last as much as possible
* The SMD leds I bought doesn't go well with PWN (very very small differentation among steps), so there're only 6 possible colors : red, green, blue, red+blue, green+blue, red+green+blue. red+green is very very similar to only green. Since the watch will be used in sunny days, colors have to be differentiable enough, also, there're only 12 indexes. Each color will be associated to 2 indexes, separated by long and short blinks. For example 900ms ON 100ms OFF for UVI 0 and 100ms ON 100ms OFF for UVI 1.
* It will be powered by a CR2032(225mAh) or a CR2477(1000mAh) not sure, CR2477 has higher capacity, but it's quite bigger (7mm tall!)
* It will have a button, when pressed the led will light on to tell you the current UVIndex
* It will have a vibration motor, it will keep track of UVI and vibrate/remind you to re-apply sunscreen (higher UVI, shorter time to re-apply)
* The brain will be an attiny85 (at first I thought about using a digispark, but it was too big)



