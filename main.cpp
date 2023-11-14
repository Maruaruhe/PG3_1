#include <Novice.h>
#include "GameManager.h"
const char kWindowTitle[] = "学籍番号";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱

	//StageScene game;
	//game.Initialize();

	GameManager* gameManager = new GameManager;


		///
		/// ↓更新処理ここから
		///
		gameManager->Run();
		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///
		//game.Draw();
		///
		/// ↑描画処理ここまで
		///


	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
