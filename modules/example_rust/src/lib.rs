#[cxx::bridge]
mod ffi {
    extern "Rust" {
        fn add_rs(left: i32, right: i32) -> i32;
    }
}

pub fn add_rs(left: i32, right: i32) -> i32 {
    left + right
}
