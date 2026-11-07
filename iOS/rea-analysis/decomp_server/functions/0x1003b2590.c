// rea decompile_all
// name: FUN_1003b2590
// address: 0x1003b2590
// body: available
// range: 0x1003b2590-0x1003b268b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b2590(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar3 + 0x40));
  FUN_10022403c();
  lVar2 = lVar1;
  FUN_10021bec0(lVar1,&DAT_100b36898);
  if (DAT_100a892a8 != -1) {
    _swift_once(&DAT_100a892a8,FUN_1003b245c);
  }
  FUN_10021bec0(lVar1,&DAT_100b36880);
  __s10Foundation3URLV22appendingPathComponentyACSSF
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             0x6b636f4c656c6946,0xe800000000000000);
  FUN_10040625c(lVar2,1);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}

