QLineSeries *xydata = new QLineSeries;
if(xydata.count > 99)
  xydata->remove(0,1);
  
chart.addseries(xydata);
chart.axesX.setmax(xydata.at(100).x());
chart.axesX.setmin(xydata.at(0).x());
