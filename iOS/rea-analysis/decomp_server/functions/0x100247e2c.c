// rea decompile_all
// name: FUN_100247e2c
// address: 0x100247e2c
// body: available
// range: 0x100247e2c-0x100247f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100247e2c(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a7dde8 != -1) {
    _swift_once(&DAT_100a7dde8,FUN_1002238e0);
  }
  lVar2 = lVar1;
  FUN_10021bec0(lVar1,&DAT_100b362e8);
  puVar3 = puVar4;
  (**(code **)(lVar5 + 0x10))(puVar4,lVar2,lVar1);
  __s10Foundation3URLV14absoluteStringSSvg();
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  DAT_100b36390 = puVar3;
  DAT_100b36398 = lVar2;
  return;
}

