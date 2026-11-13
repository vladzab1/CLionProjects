//
// Created by vladosik on 11/13/26.
//


class Digital_counter {
      int startNum;
      int endNum;
      int counter;
      public:
      Digital_counter();
      Digital_counter(int start, int end);
      void addNumToCounter();
      int getNumFromCounter();
      int getStartNum();
      int getEndNum();
      void setStartNum(int start);
      void setEndNum(int end);
};
