# 7 лаба по плюсам

Для работы с библиотекой graphics.h нужны два файла:
* graphics.h
* graphics.lib
Они уже есть в репе. 
<br/>
Также над этой библиотекой сделана обёртка Framework. В ней есть строка 

```
#pragma comment(lib,"graphics.lib")
```

Она нужна, чтобы компилятор не ругался на пожилую библиотеку.
<br/>
Методы ChangeEndAngle и ChangeColor это части второго задания из лабы.
<br/>
В методе Point::Fly закомментирован кусок текста. Это код из паскаля, но по моему мнению, он не работает.
