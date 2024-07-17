@Entry
@Component
struct Index {

  @State message: string = '陈明皓'
  private swiperController: SwiperController = new SwiperController()
  build() {

    Column(){
      Row(){
        Swiper(this.swiperController) {
          Text("0")
            .width('90%')
            .height('100%')
            .backgroundColor(Color.Gray)
            .textAlign(TextAlign.Center)
            .fontSize(30)

          Text("1")
            .width('90%')
            .height('100%')
            .backgroundColor(Color.Green)
            .textAlign(TextAlign.Center)
            .fontSize(30)

          Text("2")
            .width('90%')
            .height('100%')
            .backgroundColor(Color.Blue)
            .textAlign(TextAlign.Center)
            .fontSize(30)
        }
        .loop(true)
        .autoPlay(true)
        .interval(2000)
        .vertical(true)
      }
      .alignItems(VerticalAlign.Center)

    }
    .height('100%')
    .width('100%')
    .backgroundColor('#ccc')
    .padding(10)
  }
}