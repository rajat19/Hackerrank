// Write your Checker class here




class Checker implements Comparator<Player>{
  
  public int compare(Player a,Player b){
    Integer i=a.score;
    if(a.score==b.score){
      return a.name.compareTo(b.name);
    }
     return (i.compareTo((Integer)b.score))*-1;
  }
  
}