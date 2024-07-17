@Entry
@Component
struct Index {
  @State message: string = '陈明皓'

  build() {
    Column({ space: 15 }) {
      Image($r('app.media.icon'))
        .width(50)
      TextInput({
        placeholder: '请输入用户名'
      })
        .type(InputType.Normal)
      TextInput({
        placeholder: '请输入密码'
      })
        .type(InputType.Password)
      Button('登录')
        .width(300)
        .type(ButtonType.Capsule)
      Row({ space: 15 }) {
        Text('前往登录')
          .fontWeight(FontWeight.Bold)
        Text('忘记密码')
          .fontWeight(FontWeight.Bold)
      }
    }
    .width('100%')
    .padding(20)
  }
}