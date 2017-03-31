2016-12-16
1.������������Ӳ����ص����ݽṹ
2.��ʼ��Ӳ����Ϣ

static int led_init(void)	
static void led_exit(void)
module_init(led_init);
module_exit(led_exit);
MODULE_LICENSE("GPL");

int gpio_request(int gpio,char *name)
void gpio_free(int gpio)

int gpio_direction_output(int gpio,int value)

int gpio_direction_input(int gpio)

int gpio_set_value(int gpio,int value)

int gpio_get_value(int gpio)


�豸�ļ����Ŀ¼��
/dev

�豸�ţ����豸��  ���豸��
�������ͣ�dev_t    unsigned int 
��12bit����
��20bit����

�豸��=MKDEV(���豸�ţ����豸��)
���豸��=MAJOR���豸�ţ�
���豸��=MINOR���α��ţ�

�����豸�ţ�
int  alloc_chrdev_region(dev_t *dev,unsigned baseminor,unsigned count,const char *name)
�ͷ��豸��
void unregister_chrdev_region(dev_t dev,int count)

1.�����ʼ��Ӳ��������������
2.�����ʼ���ַ��豸����
static struct cdev led_cdev;
cdev_init(&led_cdev,&led_fops)
3.���ں�ע���ַ��豸
cdev_add(&led_cdev,�豸�ţ�Ӳ������);
4.ж���ַ��豸
cdev_del(&led_cdev)

2016-12-17
int copy_to_user(void __user *to,const void *from,unsigned long n)
unsigned long copy_from_user(void *to,const void __user *from,unsigned long n)

int  ioctl(int fd,int request,...)
long  (.unlocked_ioctl)(struct file *file,unsigned int cmd,unsigned long arg)
��ס��copy_from_user(&index,(int*)arg,sizeof(arg))

struct class *cls;//�����豸��ָ��
//�����豸��
cls=class_create(THIS_MODULE,"tarena");
//�����豸�ļ�
device_create(cls,NULL,dev,NULL,''myled'');

//ɾ���豸�ļ�
device_destroy(cls,dev);
//ɾ���豸��
class_destroy(cls);

static struct miscdevice led_misc={
	.minor=MISC_DYNAMIC_MINOR,
	.name="myled",
	.fops=&led_fops
	
};

misc_register(&led_misc);
misc_deregster(&led_misc);

12-25
ͨ��ֱ�ӿ���GPIO�ܽ�ʵ���ַ��豸������һ�ֻ����������
1.����ܣ�
static int led_init(void)	
static void led_exit(void)
module_init(led_init);
module_exit(led_exit);
MODULE_LICENSE("GPL");

2.��������
static dev_t  dev;//����һ����̬���豸��
static struct cdev beep_cdev;//����һ���ַ��豸

static struct class *cls;//�����豸���ָ�룬�����Զ������ַ��豸�ļ�

//gpio�ڵ���ز�����ַ������
static void *gpio_base; //gpio�Ĵ�����������ʼ��ַ
static unsigned long *gpiocon; //���üĴ����������ַ��
static unsigned long *gpiodata;//���ݼĴ����������ַ

3.����ں����е��ó�ʼ����ע��Ⱥ������в���
//1.�����豸��
    alloc_chrdev_region(&dev, 0, 1, "beeps");
 //2.��ʼ��ע���ַ��豸cdev
    cdev_init(&beep_cdev, &beep_fops);
    cdev_add(&beep_cdev, dev, 1);
 //3.�����ʼ��һ���豸�ಢ�Զ������豸�ڵ�
    cls = class_create(THIS_MODULE, "beeps");
    device_create(cls, NULL, dev, NULL, "mybeep");  
//4.��ַӳ�䣬ӳ�䵽�ں˵�ַ
    gpio_base = ioremap(0xe02000A0, 8); 
    //4.1��ȡ���üĴ��������ݼĴ�����Ӧ�������ַ
    gpiocon = (unsigned long *)gpio_base;
    gpiodata = (unsigned long *)(gpio_base + 0x04);
//5.����GPIOʵ�ֶ���Ӧ��GPIO��ʼ������
    *gpiocon &= ~(0xf << 4);
    *gpiocon |= (1 << 4);
    *gpiodata &= ~(1 << 1);
    
4.�ڳ��ں�������ж�ء�ע���Ⱥ������в�����˳�������෴
//1.����GPIO���Ϊ0
    *gpiodata &= ~(1 << 1);
 //2.�����ַӳ��
    iounmap(gpio_base);
//3.ɾ���豸�ڵ�
    device_destroy(cls, dev);
    class_destroy(cls);
//4.ɾ��cdev
    cdev_del(&beep_cdev);
//5.�ͷ��豸��
    unregister_chrdev_region(dev, 1);
    
6.��Ӳ������������ʼ��
static struct file_operations beep_fops = {
    .owner = THIS_MODULE,
    .ioctl = beep_ioctl
};

7.�Բ���������ʹ�õĺ���ʵ��
static int beep_ioctl(struct inode *inode,struct file *file,unsigned int cmd,unsigned long arg)
{   
	//ʵ��  
}
����ע����Ҫʱ����ʹ����������Ŀ���������
int copy_to_user(void __user *to,const void *from,unsigned long n);
unsigned long copy_from_user(void *to,const void __user *from,unsigned long n);


12-26
DS18B20
ds18b20_drv.c
1.ͷ�ļ�����غ�����Ķ���
#define SKIP_ROM        0xcc
#define COVERTT         0x44
#define READ_MEM        0xbe
2.�������
//ע��GPIO��Դ
gpio_request(S5PV210_GPH1(0),"GPH1_0");
//ע������豸
misc_register(&ds18b20_miscdev);
3.��������
//ж�ػ����豸
misc_deregister(&ds18b20_miscdev);
//ж��GPIO
gpio_free(S5PV210_GPH1(0));


4.�����豸�Ķ����ʼ��
static struct miscdevice ds18b20_miscdev ={
        .minor=MISC_DYNAMIC_MINOR,
        .name = "ds18b20",
        .fops = &ds18b20_fops
};

5.Ӳ�����������ĳ�ʼ��
static struct file_operations ds18b20_fops={
        .owner = THIS_MODULE,
        .read =ds18b20_read
    };
    
6.�Բ�����������غ���ʵ��
    static ssize_t ds18b20_read(struct file *file, char *buf, size_t count, loff_t *pos)
    {}

7.���������ֲᣬ�������غ�������ʵ��
    //��ʼ��=��λ����+�ӻ�Ӧ������
static void ds18b20_reset(void)
{}
static unsigned char ds18b20_read8(void)
{}
static void ds18b20_write8(unsigned char data)
{}