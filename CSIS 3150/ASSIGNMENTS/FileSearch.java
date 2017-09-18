//Alexander Cannell
//CSIS 3600

import java.io.File;

public final class FileSearch {

  public static File find(File root, String fileName) {
    return find(root, fileName, false);
  }

  public static File find(File root, String fileName, boolean Match) {
    if (root == null)
      throw new NullPointerException("Nullroot");

    if (fileName == null)
      throw new NullPointerException("NullFileName");

    if (!root.isDirectory()) {
      Object[] filler = { root.getAbsolutePath() };
      String message = "NotDirectory";
      throw new IllegalArgumentException(message);
    }

    File[] files = root.listFiles();

  
    for (int n = 0; n < files.length; ++n) {
      String nextName = files[n].getName();

    
      if (files[n].isDirectory()) {
        if (nextName.equals(fileName) && Match)
          return files[n];

        File match = find(files[n], fileName);

        if (match != null)
          return match;
      }

 
      else if (nextName.equals(fileName))
        return files[n];
    }

    return null;
  }

}