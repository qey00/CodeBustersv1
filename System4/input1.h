#pragma once

namespace System4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for input
	/// </summary>
	public ref class input : public System::Windows::Forms::Form
	{
	public:
		input(void)
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
		~input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ready;
	protected:

	private: System::Windows::Forms::TextBox^ playerInput;
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
			this->ready = (gcnew System::Windows::Forms::Button());
			this->playerInput = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// ready
			// 
			this->ready->Location = System::Drawing::Point(333, 365);
			this->ready->Name = L"ready";
			this->ready->Size = System::Drawing::Size(75, 23);
			this->ready->TabIndex = 0;
			this->ready->Text = L"Ready";
			this->ready->UseVisualStyleBackColor = true;
			this->ready->Click += gcnew System::EventHandler(this, &input::button1_Click);
			// 
			// playerInput
			// 
			this->playerInput->Location = System::Drawing::Point(267, 329);
			this->playerInput->Name = L"playerInput";
			this->playerInput->Size = System::Drawing::Size(202, 20);
			this->playerInput->TabIndex = 1;
			// 
			// input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 411);
			this->Controls->Add(this->playerInput);
			this->Controls->Add(this->ready);
			this->Name = L"input";
			this->Text = L"input";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
