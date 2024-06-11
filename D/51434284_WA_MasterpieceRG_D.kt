fun main() {
    val t = readLine()!!.toInt() 
    repeat(t) {
        val input = readLine()!!.split(" ").map { it.toInt() }
        val rows = input[0]
        val cols = input[1]

        for (i in 0 until rows) {
            for (j in 0 until cols) {
                if ((i + j) % 2 == 0) {
                    print("B")
                } else {
                    print("W")
                }
            }
            println()
        }
    }
}
