
static mut STEP_G : i32 = 0 ; // this initialization is necessary
use std::sync::atomic::{ AtomicI32, Ordering } ;

static STEP_SAFE_G : AtomicI32 = AtomicI32::new ( 0 ) ;


fn main() {
    let sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 ;
    unsafe {
        STEP_G = sum ;
    }
    STEP_SAFE_G.store ( sum, Ordering::Relaxed ) ;

    unsafe {
        println!("The unsafe sum is: {}", STEP_G ) ;
    }
    let s = STEP_SAFE_G.load ( Ordering::Relaxed ) ;
    println!("The safe sum is: {}", s ) ;
}



