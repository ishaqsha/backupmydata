#!/usr/bin/python

import sys,getopt

def main(argv):
	inputfile = ''
	outputfile = ''
	try:
		print getopt.getopt(argv,"fehb:k:",['hello','ifile=','ofile='])
		opts,args = getopt.getopt(argv,"fehb:k:",['hello','ifile=','ofile='])
		print 'command line  opt,value pairs',opts
		print 'command line arguments',args
	except getopt.GetoptError:
		print 'argparse.py -b <inputfile> -k <outputfile>'
		sys.exit(2)
	for opt,arg in opts:
		if opt in ('-h'):
			print 'YOU USED -h or --hello'
		elif opt in ('-b','--ifile'):
			inputfile = arg
		elif opt in ('-k','--ofile'):
			outputfile = arg
	print 'input file is ',inputfile
	print 'output file is ',outputfile
	return 

if __name__ == '__main__':
	main(sys.argv[1:])
