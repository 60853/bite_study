
//导出给外部使用
export  class Article2{

  public key:string;
  public title:string;
  public xm:string;
  public limit:string;
  public im:string;
  public lx:string;

  public constructor(key:string,title:string,im:string,xm:string,lx:string,limit:string) {
    this.key = key;
    this.title = title;
    this.im = im;
    this.xm = xm;
    this.lx = lx;
    this.limit = limit;
  }

}