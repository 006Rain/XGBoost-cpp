#include <fstream>
#include "utils.h"


//����ģ��AUC
float calculate_auc(vector<float>& labels, vector<float>& pvalues) {
	return 0.0;
}

//����ģ��KS
float calculate_ks(vector<float>& labels, vector<float>& pvalues) {
	return 0.0;
}

//����ģ��׼ȷ��ACC
float calculate_acc(vector<float>& labels, vector<float>& pvalues) {
	int count_right = 0;
	for (int i = 0; i < labels.size(); ++i) {
		if ((labels[i] == 0.0 && pvalues[i] < 0.5) || (labels[i] == 1.0 && pvalues[i] >= 0.5)) {
			count_right += 1;
		}
	}
	return (float)count_right / labels.size();
}

