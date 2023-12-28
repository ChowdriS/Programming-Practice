def calculate_parity_bit(data, parity_type):
    if len(data) != 7:
        raise ValueError("Binary data must be 7 bits long")

    ones_count = data.count("1")

    if parity_type == "even":
        parity_bit = "1" if ones_count % 2 == 0 else "0"
    elif parity_type == "odd":
        parity_bit = "1" if ones_count % 2 != 0 else "0"
    else:
        raise ValueError("Invalid parity type. Use 'even' or 'odd'.")

    return data + parity_bit  # Concatenate the data and parity bit

def main():
    binary_data = input("Enter Binary Data (7 bits): ")
    parity_type = input("Select Parity Type (0 for even or 1 for odd): ")

    try:
        complete_result = calculate_parity_bit(binary_data, parity_type)
        print("Complete Result (Binary + Parity Bit):", complete_result)
    except ValueError as e:
        print("Error:", e)

if __name__ == "__main__":
    main()