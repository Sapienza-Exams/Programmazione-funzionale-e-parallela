object E4 {
	def Fibonacci(n:Int) : Int = {
		if(n == 1 || n == 2) return 1
		else return Fibonacci(n-1) + Fibonacci(n-2)
	}
}
