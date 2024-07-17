
//导出给外部使用
export  class Article{

  public key:string;
  public title:string;
  public author:string;
  public time:string;
  public icon:string;

  public constructor(key:string,title:string,icon:string,author:string,time:string) {
    this.key = key;
    this.title = title;
    this.icon = icon;
    this.author = author;
    this.time = time;
  }

}