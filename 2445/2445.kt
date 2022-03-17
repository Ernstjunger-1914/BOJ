import java.util.*

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`)
    val star = sc.nextInt()

    for (i in 1..star) {
        for (j in 1..i) {
            print("*")
        }
        for (j in 1..(star * 2) - (i * 2)) {
            print(" ")
        }
        for (j in 1..i) {
            print("*")
        }
        print("\n")
    }
    for (i in (star - 1) downTo 1) {
        for (j in i downTo 1) {
            print("*")
        }
        for (j in (star * 2) - (i * 2) downTo 1) {
            print(" ")
        }
        for (j in 1..i) {
            print("*")
        }
        print("\n")
    }
}