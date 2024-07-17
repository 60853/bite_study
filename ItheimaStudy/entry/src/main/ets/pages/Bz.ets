@Entry
@Component
struct Index {
  @State message: string = '陈明皓'

  build() {

    Column() {
      Column() {
        //上方图片
        Stack({
          alignContent: Alignment.Bottom
        }) {
          //图片
          Image($r('app.media.bz_img')).width(200).height(125)
            .borderRadius({
              topLeft: 10,
              topRight: 10
            })
          //播放量
          Row() {
            Row({ space: 5 }) {
              Image($r('app.media.bz_play')).width(14).fillColor(Color.White)

              Text('288万').fontSize(12).fontColor(Color.White)
            }
            .margin({
              right: 10
            })

            Row({ space: 5 }) {
              Image($r('app.media.bz_msg')).width(14).fillColor(Color.White)

              Text('8655').fontSize(12).fontColor(Color.White)
            }

            Blank()
            Text('4:33').fontSize(12).fontColor(Color.White)
          }
          .width('100%').height(24)
          .padding({
            right: 5,
            left: 5
          })
        }
        .width('100%')
        .height(125)

        //下部文字
        Column(){
          Text('【凤凰传奇新歌】 欢迎来到国风统治区: 唢呐一响神曲《铁衣说说就行了》')
            .textOverflow({ overflow: TextOverflow.Ellipsis })
            .maxLines(2)
            .lineHeight(16)
            .fontSize(14)
          Row() {
            //下部点赞
            Text('19万点赞').fontSize(10)
              .backgroundColor('#fef0ef')
              .padding(5)
              .borderRadius(2)
            Image($r('app.media.bz_more'))
              .width(14)
              .fillColor('#B9B9B9')
          }
          .margin({
            top:6
          })
          .width('100%')
          .justifyContent(FlexAlign.SpaceBetween)

        }.padding(5)

      }
      .width(200)
      .height(200)
      .backgroundColor(Color.White)
      .borderRadius(10)
    }
    .height('100%')
    .width('100%')
    .backgroundColor('#ccc')
    .padding(10)
  }
}