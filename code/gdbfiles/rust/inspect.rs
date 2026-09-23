
struct Sample {
    adc_counts : u32,
    psi : f32,
    timestamp_ms : u64,
}
fn main() {
    let my_sample : Sample ;
    let lo = 1 ;
    let hi = 10 ;
    let mut sum = 0 ;
    for i in lo..=hi {
        sum += i ;
    }
    println!("The total sum is: {}", sum);
    println!("The total sum is: {}", my_sample.psi);
}



