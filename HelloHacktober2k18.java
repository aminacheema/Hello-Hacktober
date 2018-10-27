import java.awt.Font;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.image.BufferedImage;

public class HelloHacktober2k18 {
	public static void main(String[] args) {
		int width = 200;
		int height = 30;
		
		BufferedImage image = new BufferedImage(width, height, BufferedImage.TYPE_INT_RGB);
		Graphics g = image.getGraphics();
		g.setFont(new Font("SansSerif", Font.BOLD, 24));
		
		Graphics2D g2 = (Graphics2D) g;
		g2.setRenderingHint(RenderingHints.KEY_TEXT_ANTIALIASING, RenderingHints.VALUE_TEXT_ANTIALIAS_ON);
		g2.drawString("HELLO WORLD!", 10, 20);
		
		for(int y = 0; y < height; y++) {
			//get specific value of pixel
			StringBuilder builder = new StringBuilder();
			
			for(int x = 0; x < width; x++) {
				if(x < 29) {
					builder.append(image.getRGB(x, y) == -16777216 ? " " : "H");
				} else if (x >= 29 && x < 45) {
					builder.append(image.getRGB(x, y) == -16777216 ? " " : "E");
				} else if (x >= 45 && x < 72) {
					builder.append(image.getRGB(x, y) == -16777216 ? " " : "L");
				} else if (x >= 72 && x < 90) {
					builder.append(image.getRGB(x, y) == -16777216 ? " " : "0");
				} else if (x >= 90 && x < 122) {
					builder.append(image.getRGB(x, y) == -16777216 ? " " : "W");
				} else if (x >= 122 && x < 140) {
					builder.append(image.getRGB(x, y) == -16777216 ? " " : "0");
				} else if (x >= 140 && x < 158) {
					builder.append(image.getRGB(x, y) == -16777216 ? " " : "R");
				} else if (x >= 158 && x < 172) {
					builder.append(image.getRGB(x, y) == -16777216 ? " " : "L");
				} else if (x >= 172 && x < 190) {
					builder.append(image.getRGB(x, y) == -16777216 ? " " : "D");
				} else if (x >= 190) {
					builder.append(image.getRGB(x, y) == -16777216 ? " " : "!");
				}
			}
			
			System.out.println(builder);
		}
	}

}
