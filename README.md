# Forward List With Priority Method
### **Задача:**
> ![task](https://sun9-39.userapi.com/impg/fsbzp8tBYVOwUoSzGSjARhJb5Tpa_FngYifWBQ/WJDhCJynXes.jpg?size=905x163&quality=96&sign=67e8fae24400486a67deec51ff3dfb34&type=album)

### **Решение:**
- Односвязный список разбит на две структуры: структура узла и самого списка. 
- [Node.h](ForwardListWithPriority/Node.h) - заголовочный файл, в котором объявлен класс и его методы, представляющий структуру узла
- [Node.cpp](ForwardListWithPriority/Node.cpp) - компилируемый фалй, в котором реализован методы класса `Node.h`, объявленные в заголовочном файле
- [ForwardList.h](ForwardListWithPriority/ForwardList.h) - заголовочный файл, в котором объявлен класс и его методы, представляющий структуру односвязного списка
- [ForwardList.cpp](ForwardListWithPriority/ForwardList.cpp) - компилируемый файл, в котором реализован методы класса `ForwardList.h`, объявленные в заголовочном файле
- Некоторые методы класса `ForwardList` могут выбрасывать ошибки(`throw exception("error message")`). Это происходит в нелогичных случаях. _Например: попытка получения первого элемента списка, когда сам список пуст._

    ***Методы которые кидают ошибку:*** `front()`,`popBack()`,`popFront()`.
- Классы `ForwardList` и `Node` независимы от других файлов. Таким образом, сама задача решается в файле [main.cpp](ForwardListWithPriority/main.cpp), 
за исключением дополнительно добавленных методов вставки элементов в список:
`pushByPriorityAsc` - по возрастанию и `pushByPriorityDesc` - убыванию
- блок, представленный ниже нужен для отлавливания ошибок, которые выбрасывают методы класса `ForwardList`

    ```
    try {
     // код
    } catch (const exception& ex) {
     // код
    }
    ```
