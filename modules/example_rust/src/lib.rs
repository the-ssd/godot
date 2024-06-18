#[cxx::bridge]
mod ffi {
    extern "Rust" {
        fn add_rs(left: isize, right: isize) -> isize;
    }
}

pub fn add_rs(left: isize, right: isize) -> isize {
    left + right
}
