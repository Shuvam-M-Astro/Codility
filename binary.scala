object Solution {
  def solution(n: Int): Int = {
    val binaryString = n.toBinaryString
    var maxLength = 0
    var currentLength = 0
    for (i <- 0 until binaryString.length) {
      if (binaryString.charAt(i) == '0') {
        currentLength += 1
      } else {
        if (currentLength > maxLength) {
          maxLength = currentLength
        }
        currentLength = 0
      }
    }
    maxLength
  }
}
