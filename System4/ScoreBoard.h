#pragma once

namespace System4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScoreBoard
	/// </summary>
	public ref class ScoreBoard : public System::Windows::Forms::Form
	{
	public:
		ScoreBoard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ScoreBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ play;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->play = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// play
			// 
			this->play->Location = System::Drawing::Point(367, 342);
			this->play->Name = L"play";
			this->play->Size = System::Drawing::Size(75, 23);
			this->play->TabIndex = 0;
			this->play->Text = L"Play";
			this->play->UseVisualStyleBackColor = true;
			// 
			// ScoreBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 411);
			this->Controls->Add(this->play);
			this->Name = L"ScoreBoard";
			this->Text = L"ScoreBoard";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
