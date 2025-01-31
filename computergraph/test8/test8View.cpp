// test8View.cpp : implementation of the CTest8View class
//

#include "stdafx.h"
#include "test8.h"

#include "test8Doc.h"
#include "test8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#define ROUND(x) int(x+0.5)
/////////////////////////////////////////////////////////////////////////////
// CTest8View

IMPLEMENT_DYNCREATE(CTest8View, CView)

BEGIN_MESSAGE_MAP(CTest8View, CView)
	//{{AFX_MSG_MAP(CTest8View)
	ON_COMMAND(ID_fill, OnMenuAET)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest8View construction/destruction

CTest8View::CTest8View()
{
	// TODO: add construction code here
	Point[0]=CPoint(550,400);//P0
	Point[1]=CPoint(350,600);//P1
	Point[2]=CPoint(250,350);//P2
	Point[3]=CPoint(350,50);//P3
	Point[4]=CPoint(500,250);//P4
	Point[5]=CPoint(600,50);//P5
	Point[6]=CPoint(800,450);//P6


}

CTest8View::~CTest8View()
{
}

BOOL CTest8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTest8View drawing

void CTest8View::OnDraw(CDC* pDC)
{

	CTest8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->Polygon(Point,7);//绘制多边形
	//输出多边形的顶点编号
	pDC->TextOut(550,410,"P0");
	pDC->TextOut(350,600,"P1");
    pDC->TextOut(230,340,"P2");
	pDC->TextOut(350,30,"P3");
	pDC->TextOut(490,220,"P4");
	pDC->TextOut(600,30,"P5");
	pDC->TextOut(805,450,"P6");

}

/////////////////////////////////////////////////////////////////////////////
// CTest8View printing

BOOL CTest8View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTest8View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTest8View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTest8View diagnostics

#ifdef _DEBUG
void CTest8View::AssertValid() const
{
	CView::AssertValid();
}

void CTest8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTest8Doc* CTest8View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTest8Doc)));
	return (CTest8Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTest8View message handlers

 void CTest8View::OnMenuAET() 
{
	// TODO: Add your command handler code here
	// TODO: Add your command handler code here
	AfxGetMainWnd()->SetWindowText("案例6：多边形有效边表填充算法");//显示标题
	
	CColorDialog ccd(GetColor);
	if(ccd.DoModal()==IDOK)//调用调色板选取前景色
	{
		GetColor=ccd.GetColor();
	}
	RedrawWindow();//刷新屏幕
	
	CreatBucket();//初始化桶

	Et();//用于建立边表	

	PolygonFill();//多边形填充


	
}

void CTest8View::CreatBucket()
{
	//AfxMessageBox("point2 1");
	int ScanMin,ScanMax;//确定扫描线的最小值和最大值
	ScanMax=ScanMin=Point[0].y;
	for(int i=1;i<Number;i++)
	{
		if(Point[i].y<ScanMin)
		{
			ScanMin=Point[i].y;//扫描线的最小值			
		}
		if(Point[i].y>ScanMax)
		{
			ScanMax=Point[i].y;//扫描线的最大值
		}
	}	
//	AfxMessageBox("point2 2");	
//	AfxMessageBox("sadas%d-%d",ScanMin,ScanMax);
	for(i=ScanMin;i<=ScanMax;i++)//建立桶结点
	{
	
		if(ScanMin==i)//桶头结点
		{
		
			HeadB=new Bucket;//建立桶的头结点
			CurrentB=HeadB;//CurrentB为Bucket当前结点指针
			CurrentB->ScanLine=ScanMin;
			CurrentB->p=NULL;//没有连接边链表
			CurrentB->next=NULL;
		}
		else//建立桶的其它结点
		{
			CurrentB->next=new Bucket;//新建一个桶结点
			CurrentB=CurrentB->next;//使CurrentB指向新建的桶结点
			CurrentB->ScanLine=i;
			CurrentB->p=NULL;//没有连接边链表
			CurrentB->next=NULL;				
		}
	}
//	AfxMessageBox("point2 3");
}

void CTest8View::Et()
{
	for(int i=0;i<Number;i++)//访问每个顶点
	{
		CurrentB=HeadB;//从桶链表的头结点开始循环
		int j=i+1;//边的第二个顶点，Point[i]和Point[j]构成边
		if(j==Number) j=0;//保证多边形的闭合
		if(Point[j].y>Point[i].y)//终点比起点高
		{
			while(CurrentB->ScanLine!=Point[i].y)//在桶内寻找该边的yMin
			{
				CurrentB=CurrentB->next;//移到下一个桶结点
			}
			E[i].x=Point[i].x;//计算AET表的值
			E[i].yMax=Point[j].y;
			E[i].k=double((Point[j].x-Point[i].x))/(Point[j].y-Point[i].y);//代表1/k			
			E[i].next=NULL;
			CurrentE=CurrentB->p;//获得桶上链接边表的地址
			if(CurrentB->p==NULL)//当前桶结点上没有链接边结点
			{
				CurrentE=&E[i];//赋边的起始地址
				CurrentB->p=CurrentE;//第一个边结点直接连接到对应的桶中
			}
			else
			{
				while(CurrentE->next!=NULL)//如果当前边已连有边结点
				{
					CurrentE=CurrentE->next;//移动指针到当前边的最后一个边结点					
				}
				CurrentE->next=&E[i];//把当前边接上去
			}
		}
		if(Point[j].y<Point[i].y)//终点比起点低
		{
			while(CurrentB->ScanLine!=Point[j].y)
			{
				CurrentB=CurrentB->next;				
			}
			E[i].x=Point[j].x;
			E[i].yMax=Point[i].y;
			E[i].k=double((Point[i].x-Point[j].x))/(Point[i].y-Point[j].y);			
			E[i].next=NULL;
			CurrentE=CurrentB->p;
			if(CurrentE==NULL)
			{
				CurrentE=&E[i];
				CurrentB->p=CurrentE;
			}
			else
			{
				while(CurrentE->next!=NULL)
				{
					CurrentE=CurrentE->next;				
				}
				CurrentE->next=&E[i];
			}
		}
	}
	CurrentB=NULL;
	CurrentE=NULL;	

}

void CTest8View::AddEdge(AET *NewEdge)
{
T1=HeadE;
	if(T1==NULL)//边表为空,将边表置为TempEdge
	{
		T1=NewEdge;
		HeadE=T1;
	}
	else
	{
		while(T1->next!=NULL)//边表不为空,将TempEdge连在该边之后
		{
			T1=T1->next;
		}
		T1->next=NewEdge;
	}

}

void CTest8View::EdgeOrder()
{
	T1=HeadE;
	if(T1==NULL)
	{
		return;
	}
	if(T1->next==NULL)//如果该边表没有再连边表
	{
		return;//桶结点只有一条边，不需要排序
	}
	else
	{
		if(T1->next->x<T1->x)//边表按x值排序
		{
			T2=T1->next;
			T1->next=T2->next;
			T2->next=T1;
			HeadE=T2;
		}
		T2=HeadE;
		T1=HeadE->next;		
		while(T1->next!=NULL)//继续两两比较相连的边表的x值,进行排序
		{
			if(T1->next->x<T1->x)
			{
				T2->next=T1->next;
				T1->next=T1->next->next;
				T2->next->next=T1;
				T2=T2->next;
			}
			else
			{
				T2=T1;
				T1=T1->next;
			}
		}
	}

}

void CTest8View::PolygonFill()
{
HeadE=NULL;
	for(CurrentB=HeadB;CurrentB!=NULL;CurrentB=CurrentB->next)//访问所有桶结点
	{
		for(CurrentE=CurrentB->p;CurrentE!=NULL;CurrentE=CurrentE->next)//访问桶中排序前的边结点			
		{
			AET *TempEdge=new AET;
			TempEdge->x=CurrentE->x;
			TempEdge->yMax=CurrentE->yMax;
			TempEdge->k=CurrentE->k;
			TempEdge->next=NULL;			
			AddEdge(TempEdge);//将该边插入临时Aet表
		}
		EdgeOrder();//使得边表按照x递增的顺序存放		
		T1=HeadE;//根据ymax抛弃扫描完的边结点
		if(T1==NULL)
		{
			return;
		}
		while(CurrentB->ScanLine>=T1->yMax)//放弃该结点，Aet表指针后移（下闭上开）
		{
			T1=T1->next;
			HeadE=T1;
			if(HeadE==NULL)
			{
				return;
			}
		}
		if(T1->next!=NULL)
		{
			T2=T1;
			T1=T2->next;
		}
		while(T1!=NULL)
		{
			if(CurrentB->ScanLine>=T1->yMax)//跳过一个结点
			{
				T2->next=T1->next;
				T1->next=NULL;
				T1=T2->next;
			}
			else
			{
				T2=T1;
				T1=T2->next;
			}
		}
		BOOL In=false;//设置一个BOOL变量In，初始值为假
		double xb,xe;//扫描线的起点和终点
		for(T1=HeadE;T1!=NULL;T1=T1->next)//填充扫描线和多边形相交的区间
		{
			if(In==false)
			{
				xb=T1->x;
				In=true;//每访问一个结点,把In值取反一次
			}
			else//如果In值为真，则填充从当前结点的x值开始到下一结点的x值结束的区间
			{
				xe=T1->x-1;//左闭右开
				CClientDC dc(this);
				for(double x=xb;x<=xe;x++)
					dc.SetPixel(ROUND(x),CurrentB->ScanLine,GetColor);//填充语句
			//	Sleep(1);//延时1ms,提高填充过程的可视性
				In=FALSE;
			}		
		}
		for(T1=HeadE;T1!=NULL;T1=T1->next)//边连贯性
		{
			T1->x=T1->x+T1->k;//x=x+1/k				 
		}				
	}
	delete HeadB; 
	delete CurrentB;
	delete CurrentE;
	delete HeadE;

}
