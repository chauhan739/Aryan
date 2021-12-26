import javax.swing.*;
import java.awt.Desktop;
import java.awt.Cursor;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;

public class App {
    /**
     * Convert a simple button into an exectable link button
     */
    public static void linkIfy(JButton button, String link) {
	button.setCursor(Cursor.getPredefinedCursor(Cursor.HAND_CURSOR));
	button.addMouseListener(new MouseAdapter() {
		public void mouseClicked(MouseEvent e) {
		    try {
			Desktop.getDesktop().browse(new URI(link));
		    } catch (IOException | URISyntaxException e1) {
			e1.printStackTrace();
		    }
		}
	    });
    }

    /**
     * Convert a simple label into executable link label
     */
    public static void linkIfy(JLabel label, String link) {
	label.setCursor(Cursor.getPredefinedCursor(Cursor.HAND_CURSOR));
	label.addMouseListener(new MouseAdapter() {
		public void mouseClicked(MouseEvent e) {
		    try {
			Desktop.getDesktop().browse(new URI(link));
		    } catch (IOException | URISyntaxException e1) {
			e1.printStackTrace();
		    }
		}
	    });
    }
    
    public static void main(String[] args) {
	JFrame frame = new JFrame("Main Frame");
	frame.setSize(700, 700);
	ImageIcon a8_icon = new ImageIcon("assets/A8_Icon.jpg");
	frame.setIconImage(a8_icon.getImage());

	new BikesInGame();

	JTabbedPane tabs = new JTabbedPane();
	tabs.setBounds(0, 0, 700, 645);
	tabs.addTab("Class D", new JPanel());
	tabs.addTab("Class C", new JPanel());
	tabs.addTab("Class B", new JPanel());
	tabs.addTab("Class A", new JPanel());
	tabs.addTab("Class S", new JPanel());

	JButton a8_forum = new JButton("Asphalt 8 Forum");
	a8_forum.setBounds(10, 645, 150, 20);
	linkIfy(a8_forum, "https://asphalt8.freeforums.net/");
	

	JLabel totalTag = new JLabel("Total Vehicles present in game = " + Vehicle.totalVehicles());
	totalTag.setBounds(430, 645, 270, 25);

	frame.setVisible(true);
	frame.setLayout(null);

	frame.add(tabs);
	frame.add(a8_forum);
	frame.add(totalTag);
    }
}
