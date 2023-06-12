class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
      int rows = image.size();
        int cols = image[0].size();

        for (int i = 0; i < rows; i++) {
            int start = 0;
            int end = cols - 1;

            while (start < end) {
                swap(image[i][start], image[i][end]);
                start++;
                end--;
            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (image[i][j] == 1) {
                    image[i][j] = 0;
                } else if (image[i][j] == 0) {
                    image[i][j] = 1;
                }
            }
        }

        return image;
    }
};