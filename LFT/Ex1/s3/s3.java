package s3;

public class s3 {
    public static boolean scan(String s) {
		
		int state = 0;
		int i = 0;

		while (state >= 0 && i < s.length()) {
			final char ch = s.charAt(i++);
            System.out.println("Stato: " + state + " - char: " + ch);

			switch (state) {
				case 0:
                    if (ch == '1'|| ch == '3' || ch == '5' || ch == '7' || ch == '9') {
                        state = 1;
                    }
                    else if (ch == '0'|| ch == '2' || ch == '4' || ch == '6' || ch == '8') {
                        state = 0;
                    }
                    else if (ch>='A'&&ch<='K') {
                        state = 2;
                    }
                    else if (ch>='L'&&ch<='K') {
                        state = 4;
                    }
                    else state = -1;

                    break;

                case 1:
                    if (ch == '1'|| ch == '3' || ch == '5' || ch == '7' || ch == '9') {
                        state = 1;
                    }
                    else if (ch == '0'|| ch == '2' || ch == '4' || ch == '6' || ch == '8') {
                        state = 0;
                    }
                    else if (ch>='A'&&ch<='K') {
                        state = 4;
                    }
                    else if (ch>='L'&&ch<='Z') {
                        state = 2;
                    }
                    else state = -1;

                    break;

			}
		}

		return state == 2;

	}

	public static void main(String[] args) {
		System.out.println(scan("654321Rossi") ? "OK" : "NOPE");
	}
}
