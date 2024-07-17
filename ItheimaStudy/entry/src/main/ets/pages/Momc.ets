@Entry
@Component
struct Index {
  @State message: string = '陈明皓'

  build() {
    Column() {
      Text('VIP')
        .width(40)
        .height(20)
        .textAlign(TextAlign.Center)
        .fontWeight(700)
        .fontSize(14)
        .fontColor('#FFEE8C')
        .fontStyle(FontStyle.Italic)
        .backgroundColor('#E8A23E')
        .borderRadius({
          topLeft: 10,
          bottomRight: 10
        })
        .border({
          width:2,
          color:'#FFF7C5'
        })
        .position({
          x: 0,
          y: 0
        })
        .zIndex(666)
      //上方图片
      Image($r('app.media.position_moco'))
        .width(160)
        .height(210)
        .borderRadius(10)
      //下方图片 文字
      Row() {
        Image($r('app.media.position_earphone'))
          .width(20)
          .height(20)
          .backgroundColor('#64C5FF')
          .borderRadius(10)
          .fillColor('#BFF1FF')
          .margin({
            left: 6,
            right: 6
          })
          .padding(3)
        Text('飞狗MOCO')
          .fontWeight(700)
      }
      .height(30)
      .width('100%')
    }
    .height('100%')
    .width('100%')
    .alignItems(HorizontalAlign.Start)
    .backgroundColor('#f1f1f1')
    .padding(10)
  }
}