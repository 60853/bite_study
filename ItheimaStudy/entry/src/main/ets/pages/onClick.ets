@Entry
@Component
struct Index {
  @State message: string = '程国光'

  build() {
    Column(){
      Row(){
        Button('陈明皓')
          .onClick(()=>{
            AlertDialog.show({
              message:'脑壳有问题'
            })
          })
      }
    }
    .height('100%')
    .width('100%')
    .backgroundColor(Color.Orange)
    .padding(10)
  }
}