#!/usr/bin/perl

use strict;
use warnings;

# Define main subroutine 
sub main {

    # Print introduction to the program
    print "Welcome to 'Synergy in Action', a demonstration of collective synergy!\n\n";
    
    # Initialize variables
    my $action1 = 0;
    my $action2 = 0;
    my $action3 = 0;
    my $action4 = 0;
    my $action5 = 0;
    my $action6 = 0;
    my $action7 = 0;
    my $action8 = 0;
    my $action9 = 0;
    my $action10 = 0;
    my $action11 = 0;
    my $action12 = 0;
    
    # Introduce participants
    print "We've gathered a group of people who are all ready to show how synergy works!\n\n";
    
    # Ask participants to perform first action
    print "First, everyone will need to raise their right arms!\n";
    $action1 = 1;
    print "Ready?\n";
   
    # Ask participants to perform second action
    print "Now, everyone will need to raise their left arms!\n";
    $action2 = 1;
    print "Ready?\n";
    
    # Ask participants to perform third action
    print "Now, everyone will need to clap their hands!\n";
    $action3 = 1;
    print "Ready?\n";
    
    # Ask participants to perform fourth action
    print "Now, everyone will need to stamp their feet!\n";
    $action4 = 1;
    print "Ready?\n";
    
    # Ask participants to perform fifth action
    print "Now, everyone will need to spin around!\n";
    $action5 = 1;
    print "Ready?\n";
    
    # Ask participants to perform sixth action
    print "Now, everyone will need to hop on one foot!\n";
    $action6 = 1;
    print "Ready?\n";
    
    # Ask participants to perform seventh action
    print "Now, everyone will need to jump in the air!\n";
    $action7 = 1;
    print "Ready?\n";
    
    # Ask participants to perform eighth action
    print "Now, everyone will need to pat their heads!\n";
    $action8 = 1;
    print "Ready?\n";
    
    # Ask participants to perform ninth action
    print "Now, everyone will need to rub their stomachs!\n";
    $action9 = 1;
    print "Ready?\n";
    
    # Ask participants to perform tenth action
    print "Now, everyone will need to sing a song!\n";
    $action10 = 1;
    print "Ready?\n";
    
    # Ask participants to perform eleventh action
    print "Now, everyone will need to shout 'Synergy!'!\n";
    $action11 = 1;
    print "Ready?\n";
    
    # Ask participants to perform twelfth action
    print "Now, everyone will need to yell 'Hooray!'!\n";
    $action12 = 1;
    print "Ready?\n\n";
    
    # Determine if all actions were performed
    if ($action1 == 1 && $action2 == 1 && $action3 == 1 && $action4 == 1 && $action5 == 1 && $action6 == 1 && $action7 == 1 && $action8 == 1 && $action9 == 1 && $action10 == 1 && $action11 == 1 && $action12 == 1) {
        # Print successful message
        print "Congratulations! You've demonstrated the power of collective synergy in action!\n";
    } else {
        # Print unsuccessful message
        print "It seems like someone didn't follow the instructions. Let's try again!\n";
    }
}

# Call main subroutine
main();