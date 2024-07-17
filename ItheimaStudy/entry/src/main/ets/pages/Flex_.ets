@Entry
@Component
struct Flex_ {
  @State message: string = '陈明皓'

  build() {
    Column() {
      Text('阶段选择')
        .fontColor('#ff0c0c0c')
        .width('100%')
        .fontWeight(700)
        .fontSize(30)
        .padding(15)
      Flex({
        wrap: FlexWrap.Wrap
      }) {
        Text('ArkUI').padding(10).margin(5).backgroundColor('#f1f1f1')
        Text('ArkTS').padding(10).margin(5).backgroundColor('#f1f1f1')
        Text('界面开发').padding(10).margin(5).backgroundColor('#f1f1f1')
        Text('系统能力').padding(10).margin(5).backgroundColor('#f1f1f1')
        Text('权限控制').padding(10).margin(5).backgroundColor('#f1f1f1')
        Text('元服务').padding(10).margin(5).backgroundColor('#f1f1f1')
      }
    }
    .height('100%')
    .width('100%')
    .backgroundColor('#fff')
    .padding(10)
  }
}