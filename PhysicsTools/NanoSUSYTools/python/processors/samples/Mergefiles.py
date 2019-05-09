import os
import sys
data0 = 100
data1= 63
data2= 54
data3= 58
data4= 36 
data5= 11
data6= 12
data7= 6
sys.stdout = open('samplemerge.C','w')
print 'void samplemerge(){'
print 'TChain *mychain = new TChain("Events");'

for i in range((data0)):
    print 'mychain->Add("/eos/uscms/store/user/ddash/nanoAOD/2016/QCD_HT100to200_2016/QCD_HT100to200_2016_%s.root");'%(i)
for i in range((data1)):
    print 'mychain->Add("/eos/uscms/store/user/ddash/nanoAOD/2016/QCD_HT200to300_2016/QCD_HT200to300_2016_%s.root");'%(i)
for i in range((data2)):
    print 'mychain->Add("/eos/uscms/store/user/ddash/nanoAOD/2016/QCD_HT300to500_2016/QCD_HT300to500_2016_%s.root");'%(i)
for i in range((data3)):
    print 'mychain->Add("/eos/uscms/store/user/ddash/nanoAOD/2016/QCD_HT500to700_2016/QCD_HT500to700_2016_%s.root");'%(i)
for i in range((data4)):
    print 'mychain->Add("/eos/uscms/store/user/ddash/nanoAOD/2016/QCD_HT700to1000_2016/QCD_HT700to1000_2016_%s.root");'%(i)
for i in range((data5)):
    print 'mychain->Add("/eos/uscms/store/user/ddash/nanoAOD/2016/QCD_HT1000to1500_2016/QCD_HT1000to1500_2016_%s.root");'%(i)
for i in range((data6)):
    print 'mychain->Add("/eos/uscms/store/user/ddash/nanoAOD/2016/QCD_HT1500to2000_2016/QCD_HT1500to2000_2016_%s.root");'%(i)
for i in range((data7)):
    print 'mychain->Add("/eos/uscms/store/user/ddash/nanoAOD/2016/QCD_HT2000toInf_2016/QCD_HT2000toInf_2016_%s.root");'%(i)


print 'mychain->Merge("/eos/uscms/store/user/ddash/nanoAOD/ana_samples/qcd_origin_2016.root");'
print '}'
