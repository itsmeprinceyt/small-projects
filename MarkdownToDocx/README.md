# Markdown to DOCX Converter

## Description
This program converts a Markdown (`.md`) file into a DOCX file. It preserves formatting like headings, bold, italic, code blocks, lists, and blockquotes.

### How It Works
1. Reads content from the markdown file.
2. Converts it to HTML using the `markdown` library.
3. Parses the HTML content with `BeautifulSoup`.
4. Creates a DOCX file with `python-docx` and formats the content accordingly.
5. Saves the final DOCX file.

### Requirements
To use this program, you need to install the following Python packages:

```bash
pip install markdown python-docx beautifulsoup4
```

### Usage
1. Place your Markdown file (markdown.md) in the same directory as the Python script.
2. Run the script:

```bash
python convert.py
```
3. The program will generate a DOCX file `(output.docx)` in the same directory.

### Notes
1. Currently supports headings, bold, italic, code blocks, unordered and ordered lists, and blockquotes.
2. The script adds proper spacing and handles list numbering correctly without running into issues like duplicated text.
3. It will give a error in the console like this
```
UserWarning: style lookup by style_id is deprecated. Use style name as key instead.
return self._get_style_id_from_style(self[style_name], style_type)
Converted 'markdown.md' to 'output.docx' successfully.
```
So just ignore this error. Check `output.docx` it's already done converting. 💀

# `requirements.txt`
```txt
markdown
python-docx
beautifulsoup4
```