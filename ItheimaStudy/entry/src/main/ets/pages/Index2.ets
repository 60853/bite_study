@Entry
@Component
struct Index {
  @State message: string = '程国光'

  build() {
    Column(){
      Row(){
        Button('跳转').width(60).height(60).borderRadius(30)
      }
    }
    .height('100%')
    .width('100%')
    .backgroundColor(Color.Orange)
    .padding(10)
  }
}