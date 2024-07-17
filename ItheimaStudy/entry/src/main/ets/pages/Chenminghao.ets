@Entry
@Component
struct Index {
  @State message: string = 'Hello World'


  @State private dataList:Array<object> = [
      {
      key:"111",
      img:$r("app.media.zfb_pro_pic3"),
      title:"荆州环球度假村",
    },
    {
      key:"222",
      img:$r("app.media.zfb_pro_pic3"),
      title:"荆州环球度假村",
    },
    {
      key:"333",
      img:$r("app.media.zfb_pro_pic2"),
      title:"荆州环球度假村",

    },
    {
      key:"444",
      img:$r("app.media.zfb_pro_pic2"),
      title:"荆州环球度假村",
    },

  ]

  build() {
    Scroll(){
      Column(){
        //套票
        Row(){
          Text('套票')
            .fontWeight(700)
            .fontSize(25)
        }
        .width('100%')
        .height(50)
        .margin({left:20})
        //间距
        Row(){}
        //三个套餐
        Column(){
          //1
          Column(){
            //4个row
            Row(){
              Text('门票+指定美食套餐')
                .fontWeight(700)
                .fontSize(18)
            }
            .margin({top:10})
            Row(){
              Text('可定今日')
                .fontColor('#ff218bbc')
              Text('￥180')
                .margin({left:200})
                .fontColor(Color.Red)
              Image($r('app.media.img')).width(30).height(20)
            }
            .margin({top:10})

            Row(){
              Text('官方|')
              Text('有条件退')
                .fontColor('#ff218bbc')
              Text('| 无需换票 | 在线改签')

              Button('预定')
                .backgroundColor('#ff2da8d7')
                .margin({left:20})



            }
            .width('100%')
            .margin({top:5})

            Row(){
              Text('已售40万+')
              Text('购票须知>')
                .fontColor('#ff218bbc')
                .margin({left:30})
                .fontWeight(700)


            }
            .width('100%')
            .margin({top:5})

          }
          .width('100%')
          .height(150)
          .alignItems(HorizontalAlign.Start)
          .backgroundColor('#fffaf6f6')
          .margin({left:20})

          Row(){}.width('100%').height(2).backgroundColor(Color.Gray)
          Column(){
            //4个row
            Row(){
              Text('标准票（成人票）')
                .fontWeight(700)
                .fontSize(18)
            }
            .margin({top:10})
            Row(){
              Text('可定今日')
                .fontColor('#ff218bbc')
              Text('￥120')
                .margin({left:200})
                .fontColor(Color.Red)
              Image($r('app.media.img')).width(30).height(20)
            }
            .margin({top:10})

            Row(){
              Text('官方|')
              Text('有条件退')
                .fontColor('#ff218bbc')
              Text('| 无需换票 | 在线改签')

              Button('预定')
                .backgroundColor('#ff2da8d7')
                .margin({left:20})



            }
            .width('100%')
            .margin({top:5})

            Row(){
              Text('已售40万+')
              Text('购票须知>')
                .fontColor('#ff218bbc')
                .margin({left:30})
                .fontWeight(700)


            }
            .width('100%')
            .margin({top:5})

          }
          .width('100%')
          .height(150)
          .alignItems(HorizontalAlign.Start)
          .backgroundColor('#fffaf6f6')
          .margin({left:20})

          Row(){}.width('100%').height(2).backgroundColor(Color.Gray)

          Column(){
            //4个row
            Row(){
              Text('标准票（成人票）')
                .fontWeight(700)
                .fontSize(18)
            }
            .margin({top:10})
            Row(){
              Text('可定今日')
                .fontColor('#ff218bbc')
              Text('￥120')
                .margin({left:200})
                .fontColor(Color.Red)
              Image($r('app.media.img')).width(30).height(20)
            }
            .margin({top:10})

            Row(){
              Text('官方|')
              Text('有条件退')
                .fontColor('#ff218bbc')
              Text('| 无需换票 | 在线改签')

              Button('预定')
                .backgroundColor('#ff2da8d7')
                .margin({left:20})



            }
            .width('100%')
            .margin({top:5})

            Row(){
              Text('已售40万+')
              Text('购票须知>')
                .fontColor('#ff218bbc')
                .margin({left:30})
                .fontWeight(700)


            }
            .width('100%')
            .margin({top:5})

          }
          .width('100%')
          .height(150)
          .alignItems(HorizontalAlign.Start)
          .backgroundColor('#fffaf6f6')
          .margin({left:20})





        }.width('100%').height(450)

        Row(){
          Text('查看更多').fontColor('#ff218bbc')
          Image($r('app.media.img')).height(30)
        }
        .justifyContent(FlexAlign.Center)
        .width('100%')
        .height(80)

        Row(){}.width('100%').height(10).backgroundColor(Color.Grey)
//推荐酒店
        Row(){
          Image($r('app.media.img')).width(30)
          Text('推荐酒店').fontSize(20).fontWeight(700)
        }.width('100%').height(60)

        List({space:10}){
          ForEach(this.dataList,(item)=>{
            ListItem(){

                Column(){
                  Image(item.img).height(120).width(150).borderRadius(10)
                  Text(item.title)
                }



            }
          })
        }.listDirection(Axis.Horizontal)
        .margin({left:10,right:10})



//评价
        Column() {


          Row() {
            Image($r('app.media.img')).width(30)
            Text('评价').fontSize(25)
            Text('(999)').margin({ left: 10 })
            Text('更多评价')
              .margin({ left: 140 })
            Image($r('app.media.img')).width(30)
          }
          .width('100%')
          .height(60)

          Row() {
            Column() {
              Image($r('app.media.zfb_pro_list2')).width(40)
            }

            Column() {
              Row() {
                Text('旅游达人')
              }

              Row() {
                Image($r('app.media.zfb_pro_list2')).width(80)
              }
            }
            .justifyContent(FlexAlign.Start)

            Column() {
              Text('2022/09/02')
            }.margin({ left: 130 })
          }
          .width('100%')
          .height(60)

          Row() {
            Text('十一突发奇想打卡环球影城，并且选择了过去小长假' +
            '的第一天，想着可能第一天很多人，还没计划去，而' +
            '且住酒店的可能一号以后才能住下，当让还有一个愿' +
            '意是一号的票价哦比后面几天便宜啦!').fontSize(14).fontWeight(700)
          }
          .width('100%')
          .height(80)

          Row() {
          }.width('100%').height(20)

          Row() {
            Column() {
              Image($r('app.media.zfb_pro_list1')).width(40)
            }

            Column() {
              Row() {
                Text('旅游达人')
              }

              Row() {
                Image($r('app.media.zfb_nav13')).width(90)
              }
            }
            .justifyContent(FlexAlign.Start)

            Column() {
              Text('2022/09/02')
            }.margin({ left: 130 })
          }
          .width('100%')
          .height(60)

          Column() {
            Text('北京环球影城我终于来了').fontWeight(700)
            Text('从此又多了一个开心记忆！').fontWeight(700)

          }

          .alignItems(HorizontalAlign.Start)
          .width('100%')
          .height(60)

          Row({space:10}) {
            Image($r('app.media.zfb_nav13')).width(100)
            Image($r('app.media.zfb_nav11')).width(100)
            Image($r('app.media.zfb_nav10')).width(100)

          }

          .width('100%')
        }.margin({left:20})

      }
    }
  }
}