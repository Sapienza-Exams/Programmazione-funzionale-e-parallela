	sealed abstract class BinTree {
		def sum : Int = this match {
			case T(l,e,r) => e + l.sum + r.sum
			case E() => 0
		}
	}

	// albero non vuoto
	case class T(l:BinTree, e:Int, r:BinTree) extends BinTree 

	// albero vuoto
	case class E() extends BinTree


object E29Main extends App {
	
    val t1 = T(E(), 10, E())
    val t2 = T(E(), 5, E())
    val t3 = T(t1, 7, t2)
    val t4 = T(t3, 2, E())
    println(t1.sum + " (corretto: 10)")
    println(t2.sum + " (corretto: 5)")
    println(t3.sum + " (corretto: 22)")
    println(t4.sum + " (corretto: 24)")
}
