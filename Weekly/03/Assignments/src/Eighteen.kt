fun main() {
    println("Enter the marks scored by the students")

    println("Written test:")
    val wTest: Int = readln().toInt()

    println("Lab exams:")
    val lExams: Int = readln().toInt()

    println("Assignments:")
    val assignments: Int = readln().toInt()

    val grade: Float = (wTest * 70 / 100f) + (lExams * 20 / 100f) + (assignments * 10 / 100f)
    println("Grade of the student is $grade")
}
