fun main() {
    val t = readln().toInt()
    val testCases = mutableListOf<String>()

    repeat(t) {
        testCases.add(readln())
    }

    val results = mutableListOf<Int>()

    for (s in testCases) {
        val firstOneIndex = s.indexOf('1')
        val lastOneIndex = s.lastIndexOf('1')

        if (firstOneIndex == -1 || lastOneIndex == -1) {
            results.add(0)
            continue
        }

        var zerosToErase = 0
        for (j in firstOneIndex..lastOneIndex) {
            if (s[j] == '0') {
                zerosToErase++
            }
        }

        results.add(zerosToErase)
    }

    for (result in results) {
        println(result)
    }
}
