import java.io.BufferedReader
import java.io.InputStreamReader

fun main()=with(BufferedReader(InputStreamReader(System.`in`))) {

    val (a: Int, b: Int)=readLine()
        .split(" ")
        .map { it.toInt() }

    println(a-b)

}