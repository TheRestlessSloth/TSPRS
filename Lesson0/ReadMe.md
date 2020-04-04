# Привет всем!

## Сегодня я покажу как настроить Аtmel studio

### Перво-наперво установим Atmel Studio

Переходим по данной *https://www.microchip.com/mplab/avr-support/atmel-studio-7* 
и нажмём *Atmel Studio 7.0 web installer (recommended)*

После загрузки файла устанавливаем

Так же советую после установки установить расширение AVRdude (фаил *avrdude-6.3-mingw32.zip*)
### Как установить AVRdude
>Извлекаем содержимое архива в папку программы Atmel Studio
>>Дальше запускаем Аtmel Studio переходим в Tools -> External tools
>>>В Title указываем название. В command указываем путь к avrdude. В Arguments пишем следующую строку:
>>>>avrdude -v -p atmega328p -c arduino -P COM3 -b 115200 -D -U flash:w:"$(ProjectDir)Debug\$(TargetName).hex":i
>>На место COM13 напишите порт, под которым находится Arduino, у меня 3.
