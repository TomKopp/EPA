public class Main {
	public static void main(String[] args) {

		int n = Integer.parseInt(args[0]);

//		Matrix a = new Matrix(new double[][]{
//				{1, 2},
//				{3, 4}
//		});
//		Matrix b = new Matrix(new double[][]{
//				{-3, -8, 3},
//				{-2, 1, 4}
//		});

		Matrix a = new Matrix(generateRandomMatrix(n));
		Matrix b = new Matrix(generateRandomMatrix(n));

//		System.out.println(a.toString());
//		System.out.println(b.toString());
//		System.out.println(a.mult(b).toString());
		a.mult(b);
		System.out.println(a.getDurationMS());

	}

	private static double[][] generateRandomMatrix(int n) {
		double[][] ret = new double[n][n];

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				ret[i][j] = Math.random();
			}
		}

		return ret;
	}
}
