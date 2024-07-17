//导入文章class
import { Article2 } from './Article2'

@Entry
@Component

struct ArticleList2 {

  //准备 list数据
  @State message: string = '程国光'
  @State articleList: Array<Article2> = [
    new Article2(
      '1',
      "霸天虎过山车",
      "https://imagecloud.thepaper.cn/thepaper/image/150/696/913.jpg",
      "游玩项目 | 变形金刚基地 | 567条评论",
      "高空弹射超刺激",
      "身高1.32m以上"
    ),
    new Article2(
      '2',
      "哈利波特与禁忌之旅",
      "https://img2.baidu.com/it/u=3249894843,1660658506&fm=253&fmt=auto&app=120&f=JPEG?w=799&h=500",
      "游玩项目 | 魔法世界 | 869条评论",
      "跟随哈利沉浸式冒险",
      "身高1.22m以上:体重272斤"
    ),
    new Article2(
      '3',
      "侏罗纪世界大冒险",
      "https://img1.baidu.com/it/u=3798303324,2127786950&fm=253&fmt=auto&app=120&f=JPEG?w=1139&h=500",
      "游玩项目 | 努布拉岛 | 888条评论",
      "体验式恐龙追逐的感觉",
      "身高1.22m以上:体重272斤"
    ),
    new Article2(
      '4',
      "变形金刚火种源争夺战",
      "https://img0.baidu.com/it/u=2545335114,1849479497&fm=253&fmt=auto&app=120&f=JPEG?w=800&h=500",
      "游玩项目 | 魔法世界 | 869条评论",
      "跟随哈利沉浸式冒险",
      "身高1.22m以上:体重272斤"
    ),
    new Article2(
      '5',
      "飞跃侏罗纪",
      "https://img1.baidu.com/it/u=3001138187,982575631&fm=253&fmt=auto&app=138&f=JPEG?w=667&h=500",
      "游玩项目 | 魔法世界 | 869条评论",
      "跟随哈利沉浸式冒险",
      "身高1.22m以上:体重272斤"
    ),
    new Article2(
      '6',
      "霍格沃兹灯光庆典",
      "https://img0.baidu.com/it/u=1353483827,452927389&fm=253&fmt=auto&app=120&f=JPEG?w=800&h=500",
      "游玩项目 | 魔法世界 | 869条评论",
      "跟随哈利沉浸式冒险",
      "身高1.22m以上:体重272斤"
    ),
    new Article2(
      '1',
      "霸天虎过山车",
      "https://imagecloud.thepaper.cn/thepaper/image/150/696/913.jpg",
      "游玩项目 | 变形金刚基地 | 567条评论",
      "高空弹射超刺激",
      "身高1.32m以上"
    ),
    new Article2(
      '2',
      "哈利波特与禁忌之旅",
      "https://img2.baidu.com/it/u=3249894843,1660658506&fm=253&fmt=auto&app=120&f=JPEG?w=799&h=500",
      "游玩项目 | 魔法世界 | 869条评论",
      "跟随哈利沉浸式冒险",
      "身高1.22m以上:体重272斤"
    ),
    new Article2(
      '3',
      "侏罗纪世界大冒险",
      "https://img1.baidu.com/it/u=3798303324,2127786950&fm=253&fmt=auto&app=120&f=JPEG?w=1139&h=500",
      "游玩项目 | 努布拉岛 | 888条评论",
      "体验式恐龙追逐的感觉",
      "身高1.22m以上:体重272斤"
    ),
    new Article2(
      '4',
      "变形金刚火种源争夺战",
      "https://img0.baidu.com/it/u=2545335114,1849479497&fm=253&fmt=auto&app=120&f=JPEG?w=800&h=500",
      "游玩项目 | 魔法世界 | 869条评论",
      "跟随哈利沉浸式冒险",
      "身高1.22m以上:体重272斤"
    ),
    new Article2(
      '5',
      "飞跃侏罗纪",
      "https://img1.baidu.com/it/u=3001138187,982575631&fm=253&fmt=auto&app=138&f=JPEG?w=667&h=500",
      "游玩项目 | 魔法世界 | 869条评论",
      "跟随哈利沉浸式冒险",
      "身高1.22m以上:体重272斤"
    ),
    new Article2(
      '6',
      "霍格沃兹灯光庆典",
      "https://img0.baidu.com/it/u=1353483827,452927389&fm=253&fmt=auto&app=120&f=JPEG?w=800&h=500",
      "游玩项目 | 魔法世界 | 869条评论",
      "跟随哈利沉浸式冒险",
      "身高1.22m以上:体重272斤"
    )
  ]

  build() {
    Column() {
      Row() {
        Image($r('app.media.fanhuitubiao'))
          .width(15)
          .height(15)
          .fillColor(Color.White)
        Text('景点项目')
          .fontColor(Color.White)

        Row() {
          Image($r('app.media.loadmore'))
            .width(15)
            .height(15)
            .fillColor(Color.White)
          Text('|')
            .fontColor(Color.White)
          Image($r('app.media.guanbitubiao'))
            .width(15)
            .height(15)
            .fillColor(Color.White)
        }
        .justifyContent(FlexAlign.SpaceBetween)
        .padding(5)
        .width(60)
        .height(25)
        .backgroundColor('#0078AF')
        .borderRadius(12)
      }
      .alignItems(VerticalAlign.Bottom)
      .height(60)
      .padding(10)
      .justifyContent(FlexAlign.SpaceBetween)
      .width('100%')
      .backgroundColor('#00A0E9')

      Column() {
        Tabs() {
          TabContent() {
            Column() {

              List({ space: 20 }) {
                ForEach(this.articleList, (item: Article2) => {
                  ListItem() {
                    Row() {
                      Column() {
                        Image(item.im)
                          .borderRadius(10)
                      }.width('38%')

                      Column({ space: 5 }) {
                        Text(item.title).fontWeight(700).fontSize(18)
                        Text(item.xm).fontWeight(FontWeight.Bold).fontSize(10)
                        Text(item.lx).fontSize(10).fontColor('#ff06a5f6')
                        Row() {
                          Text('限制')
                            .fontSize(10)
                            .fontColor('#ff06a5f6')
                            .borderRadius(1)
                            .backgroundColor('#F0FAFF')
                            .border({
                              width: 1,
                              color: '#ff06a5f6'
                            })
                            .margin({
                              right: 10
                            })
                          Text(item.limit).fontWeight(FontWeight.Bold).fontSize(10)
                        }
                        .justifyContent(FlexAlign.SpaceEvenly)
                      }.width('60%')
                      .padding(5)
                      .alignItems(HorizontalAlign.Start)
                      .justifyContent(FlexAlign.Start)
                    }.width('100%').height(80)
                  }
                })
              }
            }
            .width("100%")
            .height('100%')
            .padding({
              left: 10,
              right: 10
            })
            .margin({
              top: 15
            })
          }.tabBar('全部')

          TabContent() {
          }.tabBar('亲子必玩')

          TabContent() {
          }.tabBar('情侣最爱')

          TabContent() {
          }.tabBar('勇敢刺激')
        }
      }
      .margin({
        top: 15,

      })
    }

  }
}