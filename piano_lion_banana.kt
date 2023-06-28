//Synergy in Action

//1
//Create a function to calculate the result of two integers
fun calculateResult(number1: Int, number2: Int): Int {
    return number1 + number2
}

//2
//Create a function to perform division of two numbers
fun divideTwoNumbers(number1: Int, number2: Int): Double {
    return number1.toDouble() / number2.toDouble()
}

//3
//Create a function to print the result of the calculation
fun printResult(number1: Int, number2: Int) {
    println("The result of adding $number1 and $number2 is " + calculateResult(number1, number2))
}

//4
//Create a function to print the result of the division
fun printDivisionResult(number1: Int, number2: Int) {
    println("The result of dividing $number1 and $number2 is " + divideTwoNumbers(number1, number2))
}

//5
//Create a function to combine the two previous ones
fun printCombinedResult(number1: Int, number2: Int) {
    printResult(number1, number2)
    printDivisionResult(number1, number2)
}

//6
//Create a function to use the previous one for a given two numbers
fun synergyInAction(number1: Int, number2: Int) {
    printCombinedResult(number1, number2)
    println("Synergy in action!!")
}

//7
//Create a function to use the same function for a range of numbers
fun synergyInActionRange(start: Int, end: Int) {
    for (number in start..end) {
        synergyInAction(number, number + 1)
    }
}

//8
//Create an extension function to convert an integer to binary
fun Int.toBinary(): String {
    var binaryNumber = ""
    var temp = this
    while (temp > 0) {
        binaryNumber = (temp % 2).toString() + binaryNumber
        temp /= 2
    }
    return binaryNumber
}

//9
//Create a function to test the new function
fun testBinaryConversion() {
    for (number in 1..10) {
        println("$number in binary is " + number.toBinary())
    }
}

//10
//Create a function to combine the two previous functions
fun synergyInActionWithBinary(start: Int, end: Int) {
    for (number in start..end) {
        printCombinedResult(number, number + 1)
        println("$number in binary is " + number.toBinary())
        println("Synergy in action!!")
        println("--------------------------------")
    }
}

//11
//Create a function to test the new function
fun testSynergyWithBinary() {
    synergyInActionWithBinary(1, 10)
}

//12
//Create an extension function to calculate the result of two doubles
fun Double.calculateDoubleResult(number2: Double): Double {
    return this + number2
}

//13
//Create a function to test the new function
fun testDoubleResult() {
    println(5.2.calculateDoubleResult(2.3))
}

//14
//Create a function to combine the double result function with the original synergyInAction
fun synergyInActionWithDoubleResult(start: Int, end: Int) {
    for (number in start..end) {
        val number2 = number + 1
        println("The result of adding $number and $number2 is " + calculateResult(number, number2))
        println("The result of adding $number.0 and $number2.0 is " + number.toDouble().calculateDoubleResult(number2.toDouble()))
        println("Synergy in action!!")
        println("--------------------------------")
    }
}

//15
//Create a function to test the new function
fun testSynergyWithDoubleResult() {
    synergyInActionWithDoubleResult(1, 10)
}

//16
//Create a data class to store three integers
data class Values(val a: Int, val b: Int, val c: Int)

//17
//Create a function to calculate the result of three integers
fun calculateValuesResult(values: Values): Int {
    return values.a + values.b + values.c
}

//18
//Create a function to print the result of the calculation
fun printValuesResult(values: Values) {
    println("The result of adding " + values.a + ", " + values.b + " and " + values.c + " is " + calculateValuesResult(values))
}

//19
//Create a function to combine the two previous functions
fun synergyInActionWithTriplet(values: Values) {
    printValuesResult(values)
    println("Synergy in action!!")
}

//20
//Create a function to test the new function
fun testSynergyWithTriplet() {
    synergyInActionWithTriplet(Values(1, 2, 3))
}