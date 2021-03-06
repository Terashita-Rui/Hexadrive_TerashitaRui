//画面遷移時のフェード
//Auther:寺下琉生


#ifndef _FADE_H_
#define _FADE_H_
#include "main.h"
#include "manager.h"

class CFade
{
public:
	typedef enum
	{
		FADE_NONE = 0,
		FADE_IN,
		FADE_OUT,
		FADE_MAX
	} FADE;

	CFade();
	~CFade();
	HRESULT Init(void);
	void Uninit(void);
	void Update(void);
	void Draw(void);
	static void SetFade(CManager::MODE modenext);

private:
	LPDIRECT3DVERTEXBUFFER9 m_pVtxBuff = NULL; //頂点バッファへのポインタ
	static CManager::MODE m_mode; //モード取得
	D3DXCOLOR m_FadeColor; //フェード時の色
	static FADE m_fade;

};
#endif