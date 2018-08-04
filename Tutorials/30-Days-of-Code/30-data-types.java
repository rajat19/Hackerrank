        /* Declare second integer, double, and String variables. */
        int ii; double dd; String ss;
        /* Read and save an integer, double, and String to your variables.*/
        ii = scan.nextInt();
        dd = scan.nextDouble();
        ss = scan.useDelimiter("\
").next();
        /* Print the sum of both integer variables on a new line. */
        System.out.println(i+ii);
        /* Print the sum of the double variables on a new line. */
		System.out.println(d+dd);
        /* Concatenate and print the String variables on a new line; 
        	the 's' variable above should be printed first. */
        System.out.println(s.concat(ss));
