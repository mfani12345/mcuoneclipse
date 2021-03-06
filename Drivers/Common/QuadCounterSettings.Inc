%- Settings generated by Component Wizard
%;**%>12 Component name %>60: %get(DeviceName,Text)
%;**%>12 Method %>60: %get(MethodGroup,Text)
%;**%>14 Sampling %>60: %get(SamplingMethod,Text)
%if %get(SamplingMethod, Bool) = 'yes'
%;**%>16 Error Correction %>60: %get(ErrorCorrection,Text)
%;**%>16 C1 %>60: %get(C1,Text)
%;**%>16 C2 %>60: %get(C2,Text)
%else %- SamplingMethod
%endif %- SamplingMethod
%;**%>14 Input Capture %>60: %get(InputCaptureMethod,Text)
%if %get(InputCaptureMethod, Bool) = 'yes'
%;**%>16 Number of steps per capture overflow event. %>60: %get(NofStepsPerCaptureOverflow,Text)
%;**%>16 C1 Capture %>60: %get(EventCounterC1,Text)
%;**%>16 C2 %>60: %get(EventCounterC2,Text)
%else %- InputCaptureMethod
%endif %- InputCaptureMethod
