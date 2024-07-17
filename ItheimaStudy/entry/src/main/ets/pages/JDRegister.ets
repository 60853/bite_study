@Entry
@Component
struct Index {
  @State message: string = '陈明皓'

  build() {
    Column() {

      //上部
      Row() {
        Image($r('app.media.jd_cancel'))
          .width(20)
        Text('帮助')
      }
      .width('100%')
      .justifyContent(FlexAlign.SpaceBetween)

      .justifyContent(FlexAlign.SpaceBetween)

      //中间图片
      Row() {
        Image($r('app.media.jd_logo'))
          .width(250)
          .height(250)
      }

      //中间登录
      Row() {
        Text('国家/地址')
          .layoutWeight(1)
          .fontColor('#666')
        Text('中国(+86)')
          .fontColor('#666')
        Image($r('app.media.jd_right'))
          .width(20)
          .fillColor('#666')
      }
      .width('100%')
      .height(40)
      .backgroundColor('#fff')
      .borderRadius(20)
      .padding({
        left: 15,
        right: 10
      })

      TextInput({
        placeholder: '请输入手机号'
      })
        .placeholderColor('#666')
        .height(40)
        .borderRadius(20)
        .backgroundColor('#fff')
        .margin({
          top: 20
        })

      Row() {
        //服务条款
        Checkbox()
          .width(10)
          .margin({
            top: 7,
            right: 5
          })
        Text() {
          Span('我已阅读并同意')
          Span('《京东隐私政策》').fontColor('#3274f6').fontSize(12)
          Span('《京东用户服务协议》').fontColor('#3274f6').fontSize(12)
          Span('未注册的手机号将自动创建京东账号')
        }
        .fontSize(12)
        .fontColor('#666')
        .lineHeight(20)
      }
      .alignItems(VerticalAlign.Top)
      .margin({
        top: 20
      })

      //登录按钮
      Button('登录')
        .width('100%')
        .height(40)
        .backgroundColor('#bf2838')
        .margin({
          top: 25
        })

      //注册  无法登录
      Row({ space: 25 }) {
        Text('新用户注册')
          .fontSize(14)
          .fontColor('#666')
        Text('账户密码登录')
          .fontSize(14)
          .fontColor('#666')
        Text('无法登录')
          .fontSize(14)
          .fontColor('#666')
      }
      .margin({
        top: 25
      })

      Blank()
      Column() {
        //其他登录方式
        Text('其他登陆方式')
          .height(22)
          .fontSize(14)
          .fontColor('#666')
        //地下图标

        Row() {
          Image($r('app.media.jd_huawei'))
            .width(34)
            .height(34)
          Image($r('app.media.jd_wechat'))
            .width(34)
            .height(34)
            .fillColor('#56a44a')
          Image($r('app.media.jd_weibo'))
            .width(34)
            .height(34)
            .fillColor('#c8493b')
          Image($r('app.media.jd_QQ'))
            .width(34)
            .height(34)
            .fillColor('#4ba0e8')
        }
        .width('100%')
        .justifyContent(FlexAlign.SpaceAround)
        .margin({
          top: 28,
          bottom: 30
        })
      }
    }
    .width('100%')
    .height('100%')
    .width('100%')
    .backgroundImage($r('app.media.jd_login_bg'))
    .backgroundImageSize(ImageSize.Cover)
    .backgroundImagePosition(Alignment.Center)
    .padding(20)
  }
}