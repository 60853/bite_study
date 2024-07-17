@Entry
@Component
struct Index {
  @State message: string = '陈明皓'

  build() {
    Stack({ alignContent: Alignment.Bottom }) {
      //上方布局
      Stack({ alignContent: Alignment.Top }) {
        //头部

        Row() {
          //左边区域
          Text('北京').fontColor(Color.White)
          Image($r('app.media.zfb_head_down'))
            .position({ x: 36, y: 25 })
            .width(12)
            .fillColor('#fff')
          //中间区域
          Text('智慧旅游').fontColor(Color.White)

          //右边区域
          Row({ space: 10 }) {
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
          .width(80)
          .height(26)
          .backgroundColor('#007CAB')
          .borderRadius(13)
          .justifyContent(FlexAlign.Center)
        }
        .justifyContent(FlexAlign.SpaceBetween)
        .padding({ left: 10, right: 10 })
        .width('100%')
        .height(60)
        .backgroundColor('#00A1E8')
        .zIndex(3)

        //主体页面
        Scroll() {
          Column() {

            //搜索
            Row() {
              Row() {
                Image($r('app.media.zfb_head_search'))
                  .width(20)
                  .fillColor('#666')
                  .backgroundColor('#fff')
                  .margin({ left: 20 })
                TextInput({
                  placeholder: '景点/攻略/酒店住宿/休闲美食'
                })
                  .width(300)
                  .textAlign(TextAlign.Start)
                  .backgroundColor('#fff')
              }
              .backgroundColor('#fff')
              .margin({ left: 10, right: 10, top: 5 })
              .height(40)
              .borderRadius(20)
              .border({
                width: 1,
                color: '#00A1E8'
              })
            }
            .width('100%')
            .backgroundColor('#F1F1F1')


            Row() {
              Text('热搜:')
                .width(40)
                .margin({ left: 10 })
                .fontWeight(700)
              Flex({
                wrap: FlexWrap.Wrap
              }) {
                Text('北京').padding(6).margin(5).backgroundColor('#DCDCDC')
                  .borderRadius(5)
                Text('天安门').padding(6).margin(5).backgroundColor('#DCDCDC')
                  .borderRadius(5)
                Text('亲子').padding(6).margin(5).backgroundColor('#DCDCDC')
                  .borderRadius(5)
                Text('信息').padding(6).margin(5).backgroundColor('#DCDCDC')
                  .borderRadius(5)
              }

            }
            .height(40)
            .margin({ top: 5 })
            .width('100%')
            .backgroundColor('#F1F1F1')

            Row() {
              Column() {
                Image($r('app.media.zfb_nav1'))
                  .width(28)
                  .margin({ bottom: 8 })
                Text('帮助').fontSize(12).fontColor('#666')
              }.layoutWeight(1)

              Column() {
                Image($r('app.media.zfb_nav2'))
                  .width(28)
                  .margin({ bottom: 8 })
                Text('景点门票').fontSize(12).fontColor('#666')
              }.layoutWeight(1)

              Column() {
                Image($r('app.media.zfb_nav3'))
                  .width(28)
                  .margin({ bottom: 8 })
                Text('酒店住宿').fontSize(12).fontColor('#666')
              }.layoutWeight(1)

              Column() {
                Image($r('app.media.zfb_nav4'))
                  .width(28)
                  .margin({ bottom: 8 })
                Text('休闲娱乐').fontSize(12).fontColor('#666')
              }.layoutWeight(1)

              Column() {
                Image($r('app.media.zfb_nav5'))
                  .width(28)
                  .margin({ bottom: 8 })
                Text('美食').fontSize(12).fontColor('#666')
              }.layoutWeight(1)

            }
            .padding(10)
            .backgroundColor('#fff')
            .margin({ top: 10 })

            Row({ space: 5 }) {
              Image($r('app.media.zfb_pro_pic1'))
                .layoutWeight(1)
              Image($r('app.media.zfb_pro_pic2'))
                .layoutWeight(1)
              Image($r('app.media.zfb_pro_pic3'))
                .layoutWeight(1)
            }
            .padding(10)

            Column({ space: 10 }) {
              Image($r('app.media.zfb_pro_list1'))
                .width('100%')
              Image($r('app.media.zfb_pro_list2'))
                .width('100%')
            }
            .padding(10)
          }
          .width('100%')
          .padding({
            top: 60,
            bottom: 60
          })
        }
      }
      .width('100%')
      .height('100%')


      //下方导航栏
      Row() {

        Column() {
          Image($r('app.media.zfb_tab_money'))
            .width(28)
            .margin({
              bottom: 2
            })
          Text('首页').fontSize(12)
        }
        .layoutWeight(1)

        Column() {
          Image($r('app.media.zfb_tab_money'))
            .width(28)
            .margin({
              bottom: 2
            })
          Text('游记').fontSize(12)
        }.layoutWeight(1)

        Column() {
          Image($r('app.media.zfb_tab_life'))
            .width(28)
            .margin({
              bottom: 2
            })
          Text('订单').fontSize(12)
        }.layoutWeight(1)

        Column() {
          Image($r('app.media.zfb_tab_chat'))
            .width(28)
            .margin({
              bottom: 2
            })
          Text('我的').fontSize(12)
        }.layoutWeight(1)

      }
      .width('100%')
      .height('60')
      .backgroundColor('#fbfcfe')
      .border({
        width: { top: 1 },
        color: '#F1F1F1'
      })
    }
    .width('100%')
    .height('100%')
    .backgroundColor('#F1F1F1')
  }
}