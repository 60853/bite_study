//导入文章class
import {Article} from './Article'

@Entry
@Component
struct ArticleList{

  //准备 list数据
  @State articleList: Array<Article> = [
    new Article(
      '1',
      "新手攻略|开启关怀模式，与家人更亲近~",
      "https://photo-tupige.oss-cn-beijing.aliyuncs.com/article/01.png",
      "国家电网",
      "2024-12-2"
    ),
    new Article(
      '2',
      "反诈课堂|光伏骗局套路多听我给您细细说!",
      "https://photo-tupige.oss-cn-beijing.aliyuncs.com/article/02.png",
      "国家电网",
      "2024-4-2"
    ),
    new Article(
      '3',
      "新手攻略| 联合办、网上办一次办，这些地方的用户注",
      "https://photo-tupige.oss-cn-beijing.aliyuncs.com/article/03.png",
      "国家电网",
      "2024-1-12"
    ),
    new Article(
      '4',
      "新手攻略|轻轻一点，电费一键查询",
      "https://photo-tupige.oss-cn-beijing.aliyuncs.com/article/04.png",
      "国家电网",
      "2024-12-2"
    ),
    new Article(
      '5',
      "关注|局地降温超16C!寒潮天气来袭，注意防寒保暖!",
      "https://photo-tupige.oss-cn-beijing.aliyuncs.com/article/05.png",
      "国家电网",
      "2024-2-6"
    )
  ]

  build(){
    Column(){

      List({space:10}){
        ForEach(this.articleList,(item:Article)=>{
          ListItem(){
           Row(){
             Column(){
               Text(item.title).fontWeight(FontWeight.Bold).height(60)
               Text(item.author + " "+ item.time)
             }.width('60%').alignItems(HorizontalAlign.Start)

             Column(){
                Image(item.icon)
             }.width('38%')
           }.width('100%').height(80)
          }
        })
      }
    }.width("100%")
    .height('100%')

  }


}