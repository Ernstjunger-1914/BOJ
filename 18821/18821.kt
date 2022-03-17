import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter

object Main {
    var even_odd = arrayOf(
        intArrayOf(906150257, 906150258), intArrayOf(906150259, 906150293), intArrayOf(906150295, 906150307), intArrayOf(906150311, 906150313), intArrayOf(906150315, 906151515), intArrayOf(906151517, 906151575), intArrayOf(906154583, 906154585), intArrayOf(906154605, 906154605), intArrayOf(906154609, 906154757), intArrayOf(906154763, 906154763), intArrayOf(906154769, 906154769), intArrayOf(906154789, 906154789), intArrayOf(906154791, 906154791), intArrayOf(906154793, 906154793), intArrayOf(906154825, 906154825), intArrayOf(906154829, 906154829), intArrayOf(906154837, 906154837), intArrayOf(906154857, 906154857), intArrayOf(906154865, 906154881), intArrayOf(906154885, 906154885), intArrayOf(906154887, 906154887), intArrayOf(906154889, 906154889), intArrayOf(906154891, 906154891), intArrayOf(906154893, 906154893), intArrayOf(906154895, 906154907), intArrayOf(906154909, 906154911), intArrayOf(906154915, 906154927), intArrayOf(906154947, 906154949), intArrayOf(906180359, 906180361), intArrayOf(906180363, 906180363), intArrayOf(906180365, 906180365), intArrayOf(906180367, 906180369), intArrayOf(906180371, 906180373), intArrayOf(906180375, 906180375), intArrayOf(906180391, 906180517), intArrayOf(906180519, 906180519), intArrayOf(906180525, 906180533), intArrayOf(906180537, 906180553), intArrayOf(906180555, 906192697), intArrayOf(906192847, 906192865), intArrayOf(906192867, 906192903), intArrayOf(906192905, 906192905), intArrayOf(906192907, 906192965), intArrayOf(906192971, 906192971), intArrayOf(906192979, 906192983), intArrayOf(906192985, 906193227), intArrayOf(906193229, 906193233), intArrayOf(906193245, 906193245), intArrayOf(906193247, 906193247), intArrayOf(906193303, 906193303), intArrayOf(906193419, 906193419), intArrayOf(906193465, 906193465), intArrayOf(906193475, 906193475), intArrayOf(906193477, 906193477), intArrayOf(906194931, 906194931), intArrayOf(906194933, 906194945), intArrayOf(906194949, 906194949), intArrayOf(906194951, 906194967), intArrayOf(906194979, 906194979), intArrayOf(906195099, 906195099), intArrayOf(906195109, 906195149), intArrayOf(906195151, 906195151), intArrayOf(906195297, 906195297), intArrayOf(906195299, 906195985), intArrayOf(906195989, 906195989), intArrayOf(906196009, 906196009), intArrayOf(906196011, 906196013), intArrayOf(906196015, 906196015), intArrayOf(906196045, 906196051), intArrayOf(906196053, 906196055), intArrayOf(906196057, 906196071), intArrayOf(906196077, 906196079), intArrayOf(906196081, 906196081), intArrayOf(906196083, 906196091), intArrayOf(906196099, 906208711), intArrayOf(906208713, 906208713), intArrayOf(906208731, 906208731), intArrayOf(906209041, 906209063), intArrayOf(906209067, 906209067), intArrayOf(906209069, 906209069), intArrayOf(906209071, 906209223), intArrayOf(906209227, 906209227), intArrayOf(906209233, 906209235), intArrayOf(906209237, 906209237), intArrayOf(906209241, 906209241), intArrayOf(906209243, 906209271), intArrayOf(906209283, 906209283), intArrayOf(906209285, 906477701), intArrayOf(906477735, 906477811), intArrayOf(906477867, 906477867), intArrayOf(906477869, 906477869), intArrayOf(906477871, 906477899), intArrayOf(906477901, 906477901), intArrayOf(906477903, 906477905), intArrayOf(906477929, 906477931), intArrayOf(906477933, 906477933), intArrayOf(906477935, 906477935), intArrayOf(906477937, 906486639), intArrayOf(906486805, 906486805), intArrayOf(906486807, 906486807), intArrayOf(906486817, 906486817), intArrayOf(906486819, 906486819), intArrayOf(906486821, 906486831), intArrayOf(906486843, 906486853), intArrayOf(906486855, 906486855), intArrayOf(906486909, 906486913), intArrayOf(906486917, 906486973), intArrayOf(906486975, 906487001), intArrayOf(906487005, 906487063), intArrayOf(906487065, 906487065), intArrayOf(906487069, 906487069), intArrayOf(906487071, 906487071), intArrayOf(906487073, 906487077), intArrayOf(906487085, 906487085), intArrayOf(906487087, 906487101), intArrayOf(906487185, 906487185), intArrayOf(906487187, 906487189), intArrayOf(906487191, 906487191), intArrayOf(906487193, 906487193), intArrayOf(906487195, 906487203), intArrayOf(906487205, 906487205), intArrayOf(906487259, 906487259), intArrayOf(906487261, 906487261), intArrayOf(906487263, 906487263), intArrayOf(906487271, 906487287), intArrayOf(906487933, 906487933), intArrayOf(906487937, 906487937), intArrayOf(906487949, 906487973), intArrayOf(906487975, 906487993), intArrayOf(906487995, 906488001), intArrayOf(906488003, 906488003), intArrayOf(906488007, 906488007), intArrayOf(906488009, 906488009), intArrayOf(906488023, 906488025), intArrayOf(906488027, 906488065), intArrayOf(906488067, 906488067), intArrayOf(906488077, 906488079)
    )

    @Throws(Exception::class) @JvmStatic fun main(args: Array<String>) {
        val readr = BufferedReader(InputStreamReader(System.`in`))
        val writer = BufferedWriter(OutputStreamWriter(System.out))
        var t = readr.readLine().toInt()
        while (t-- > 0) {
            val n = readr.readLine().toInt()
            var flag = false
            for (i in 0..136) {
                if (even_odd[i][0] <= n && n <= even_odd[i][1]) {
                    flag = true
                    break
                }
            }
            if (n == 1 || flag) {
                writer.write("E\n")
            } else {
                writer.write("O\n")
            }
        }
        writer.flush()
        writer.close()
        readr.close()
    }
}