import java.util.Arrays;

public class Matrix {
    public double[][] matrix;
    public int height;
    public int width;
    private long startTime;
    private long endTime;

    Matrix(double[][] _matrix) {
        this.matrix = _matrix;
        this.height = _matrix.length;
        this.width = _matrix[0].length;
    }

    Matrix mult(Matrix other) {
        try {
            if (this.width != other.height) {
                throw new Exception("error: incompatible sizes");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }


        double[][] result = new double[this.height][other.width];
        double sum;

        startTime = System.nanoTime();
        for (int i = 0, h = this.height; i < h; i++) {
            for (int j = 0, ow = other.width; j < ow; j++) {
                sum = 0;
                for (int k = 0, w = this.width; k < w; k++) {
                    sum += this.matrix[i][k] * other.matrix[k][j];
                }
                result[i][j] = sum;
            }
        }
        endTime = System.nanoTime();

        return new Matrix(result);
    }

    @Override
    public String toString() {
        return Arrays.deepToString(this.matrix);
    }

    double getDurationMS() {
        return (endTime - startTime) / 1e6;
    }
}
