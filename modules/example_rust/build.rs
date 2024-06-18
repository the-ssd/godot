fn main() {
    cxx_build::bridge("src/lib.rs")
        .cpp(true)
        .std("c++17")
        .compile("rust-bridge-demo");

    println!("cargo:rerun-if-changed=src/lib.rs");
}
