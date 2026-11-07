// rea decompile_all
// name: FUN_10069ddb8
// address: 0x10069ddb8
// body: available
// range: 0x10069ddb8-0x10069de2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069ddb8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  locale *unaff_x20;
  facet afStack_28 [8];
  
  std::locale::locale(unaff_x20);
  puVar1 = operator_new(0x18);
  puVar2 = puVar1;
  std::codecvt<wchar_t,char,__mbstate_t>::codecvt((ulong)puVar1);
  *puVar2 = &PTR__codecvt_1009e6a50;
  std::locale::id::__get();
  std::locale::__install_ctor((locale *)&DAT_100b2c4e8,afStack_28,(long)puVar1);
  std::locale::~locale(unaff_x20);
  return;
}

