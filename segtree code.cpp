
public class SegmentTreeMax {
    private final int[] tree;
    int n;

    public SegmentTreeMax(int[] ar) {

        public void update(int i, int value) {
            i += n;
            tree[i] = value;
            int newValue;

            while (i > 1) {
                i >>= 1;
                newValue = max(tree[2 * i],tree[2 * i + 1]);

                if (tree[i] != newValue) {
                    tree[i] = newValue;
                } else {
                    return;
                }
            }
        }

        public int max(int from, int to) {
            from += n;
            to += n;
            int max = Integer.MIN_VALUE;

            while (from < to) {
                if ((from & 1) == 1) {
                    max = max(max, tree[from]);
                    from++;
                }
                if ((to & 1) == 1) {
                    to--;
                    max = max(max, tree[to]);
                }
                from >>= 1;
                to >>= 1;
            }

            return max;
        }

        int main() {
//		int[] ar = new int[]{6, 10, 5, 2, 7, 1, 0, 9};
//		int[] ar = new int[]{12, 7, 1, 0, 9};
            int ar[] = {6,10,5,2,7,1,0};

            n = ar.length();
            int tree[n * 2];
            System.arraycopy(ar, 0, tree, n, n);

            for (int i = trstp; i < trstp + n; i++) {
                tree[i] = ar[i-trstp];
            }
            for (int i = n - 1; i > 0; i--) {
                tree[i] = max(tree[2 * i], tree[2 * i + 1]);
            }
        }




        System.out.println(Arrays.toString(tree.tree));
        System.out.println("max=" + tree.max(0, 3));

    }
}

