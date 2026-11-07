// rea decompile_all
// name: FUN_100358bfc
// address: 0x100358bfc
// body: available
// range: 0x100358bfc-0x100358c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100358bfc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_unownedRetainStrong(uVar5);
  lVar3 = unaff_x20 + (uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff));
  FUN_10035a9d8(lVar3,param_2,lVar1,uVar2);
  _swift_release(uVar5);
  auVar6._8_4_ = (uint)param_2 & 1;
  auVar6._0_8_ = lVar3;
  auVar6._12_4_ = 0;
  return auVar6;
}

