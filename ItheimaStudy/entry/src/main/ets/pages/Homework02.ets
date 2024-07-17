@Entry
@Component
struct Index {
  @State message: string = '程国光'
  private tabsController: TabsController = new TabsController()
  @State currentIndex: number = 0;

  @Builder TabBuilder(title: string, targetIndex: number, selectedImg: Resource, normalImg: Resource) {

    Column() {
      Image(this.currentIndex === targetIndex ? selectedImg : normalImg)
        .size({ width: 25, height: 25 })
        .fillColor(this.currentIndex === targetIndex ? '#1698CE' : '#6B6B6B')
      Text(title)
        .fontSize(12)
        .fontColor(this.currentIndex === targetIndex ? '#1698CE' : '#6B6B6B')
        .margin({ top: 2 })
    }
    .height(60)
    .width('100%')
    .justifyContent(FlexAlign.Center)
    //加了一个改变currentIndex的值
    .onClick(() => {
      this.currentIndex = targetIndex;
      this.tabsController.changeIndex(this.currentIndex);
    })
  }

  build() {
    Tabs({ barPosition: BarPosition.End, controller: this.tabsController }) {
      TabContent() {
        Column() {
          //上部区域
          Column() {
            //个人中心
            Row() {
              Text('个人中心')
                .fontColor(Color.White)
                .width(80)
                .margin({ left: 150 })


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
              .margin({ left: 60 })
              .width(60)
              .height(25)
              .backgroundColor('#0078AF')
              .borderRadius(12)

            }
            .margin({ top: 10 })
            .height(60)
            .width('100%')

            //头像
            Row() {
              Image($r('app.media.cmh'))
                .width(60)
                .fillColor('#666')
                .backgroundColor('#fff')
                .borderRadius(30)
                .margin({ left: 20, right: 20 })

              //名字

              Column({ space: 5 }) {
                Text('脑壳有问题')
                  .fontSize(20)
                  .fontWeight(700)
                  .fontColor('#fff')
                Text('黄金VIP')
                  .backgroundColor('#A16222')
                  .fontSize(12)
                  .fontColor('#fff')
                  .borderRadius(15)
                  .padding(5)


              }.alignItems(HorizontalAlign.Start)


              //设置
              Text('设置').fontColor('#fff').fontWeight(700)
                .position({
                  x: 300,
                  y: 30
                })
              Image($r('app.media.youjiantou'))
                .width(15)
                .height(15)
                .position({
                  x: 332,
                  y: 32
                })
                .fillColor('#fff')
            }
            .width('100%')
            .height(80)
            .backgroundColor('#00A0E9')

            //自我介绍
            Row() {
              Column() {
                Row() {
                  Text('简单作为介绍，让你更受欢迎')
                    .fontSize(15)
                    .fontWeight(700)
                    .fontColor('#EFEFEF')
                  Image($r('app.media.xiepinlun'))
                    .width(15)
                    .height(15)
                    .fillColor('#fff')
                    .margin({ left: 5 })
                }

                Text('粉丝 999 关注 18  获赞 666  赞过 88')
                  .fontSize(15)
                  .fontWeight(700)
                  .fontColor('#EFEFEF')
                  .margin({ top: 8, bottom: 8 })
              }
              .margin({ left: 15 })
              .alignItems(HorizontalAlign.Start)

            }
            .width('100%')
            .backgroundColor('#00A0E9')
          }
          .backgroundColor('#00A0E9')

          //我的订单
          Row() {
            Column() {
              Image($r('app.media.wodedingdan'))
                .fillColor('#00A0E9')
                .width(28)
                .margin({ bottom: 10 })
              Text('我的订单').fontSize(12).fontColor('#666').fontWeight(700)
            }.layoutWeight(1)

            Column() {
              Image($r('app.media.daifukuan'))
                .width(28)
                .fillColor('#00A0E9')
                .margin({ bottom: 10 })
              Text('待付款').fontSize(12).fontColor('#666').fontWeight(700)
            }.layoutWeight(1)

            Column() {
              Image($r('app.media.daishiyong'))
                .width(28)
                .fillColor('#00A0E9')
                .margin({ bottom: 10 })
              Text('待使用').fontSize(12).fontColor('#666').fontWeight(700)
            }.layoutWeight(1)

            Column() {
              Image($r('app.media.daipinglun'))
                .width(28)
                .fillColor('#00A0E9')
                .margin({ bottom: 10 })
              Text('待评论').fontSize(12).fontColor('#666').fontWeight(700)
            }.layoutWeight(1)

            Column() {
              Image($r('app.media.zfb_nav5'))
                .width(28)
                .fillColor('#00A0E9')
                .margin({ bottom: 10 })
              Text('退还/售后').fontSize(12).fontColor('#666').fontWeight(700)
            }.layoutWeight(1)

          }
          .padding(10)
          .backgroundColor('#fff')


          //工具与服务
          Column() {
            Row() {
              Text('工具与服务')
                .fontWeight(700)
            }.margin({ left: 40, bottom: 10 })
            .width('100%')

            Row() {
              Column() {
                Image($r('app.media.yonghutiaoyan'))
                  .width(40)
                  .fillColor('#00A0E9')
                  .margin({ bottom: 10 })
                Text('用户调研').fontSize(12).fontColor('#666').fontWeight(700)
              }.layoutWeight(1)

              Column() {
                Image($r('app.media.shangwuhezuo'))
                  .width(40)
                  .fillColor('#00A0E9')
                  .margin({ bottom: 10 })
                Text('商务合作').fontSize(12).fontColor('#666').fontWeight(700)
              }.layoutWeight(1)

              Column() {
                Image($r("app.media.lxzj"))
                  .width(40)
                  .fillColor('#00A0E9')
                  .margin({ bottom: 10 })
                Text('旅行足迹').fontSize(12).fontColor('#666').fontWeight(700)
              }.layoutWeight(1)

            }
            .padding(10)
            .backgroundColor('#fff')

            Row() {
              Column() {
                Image($r('app.media.changyongxinxi'))
                  .width(40)
                  .fillColor('#00A0E9')
                  .margin({ bottom: 10 })
                Text('常用信息').fontSize(12).fontColor('#666').fontWeight(700)
              }.layoutWeight(1)

              Column() {
                Image($r('app.media.chuxingqingdan'))
                  .width(40)
                  .fillColor('#00A0E9')
                  .margin({ bottom: 10 })
                Text('出行清单').fontSize(12).fontColor('#666').fontWeight(700)
              }.layoutWeight(1)

              Column() {
                Image($r("app.media.czzx"))
                  .width(40)
                  .fillColor('#00A0E9')
                  .margin({ bottom: 10 })
                Text('创作中心').fontSize(12).fontColor('#666').fontWeight(700)
              }.layoutWeight(1)

            }
            .padding(10)
            .margin({ bottom: 50 })
            .backgroundColor('#fff')

          }
          .padding({ top: 15 })
          .margin({ top: 8 })
          .backgroundColor('#fff')

          //底部标签栏

        }
        .height('100%')
        .width('100%')
        .backgroundColor('#EFEFEF')
      }
      .tabBar(this.TabBuilder('首页', 0, $r('app.media.shouye'), $r('app.media.shouye')))

      TabContent() {
      }.tabBar(this.TabBuilder('游记', 1, $r('app.media.youji'), $r('app.media.youji')))

      TabContent() {
      }.tabBar(this.TabBuilder('订单', 2, $r('app.media.dingdan'), $r('app.media.dingdan')))

      TabContent() {
      }.tabBar(this.TabBuilder('我的', 3, $r('app.media.wode'), $r('app.media.wode')))
    }

  }
}