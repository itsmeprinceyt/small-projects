import "./globals.css";

export const metadata = {
  title: "Shortcuts",
  description: "Shortcuts that makes my life easy",
};

export default function RootLayout({ children }) {
  return (
    <html lang="en">
      <body>
        <div className="absolute top-0 z-[-2] h-screen w-screen transform bg-gradient-to-r from-stone-900 to-sky-900">{children}</div>
      </body>
    </html>
  );
}
