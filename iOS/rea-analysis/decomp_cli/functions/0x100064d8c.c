// rea decompile_all
// name: FUN_100064d8c
// address: 0x100064d8c
// body: available
// range: 0x100064d8c-0x100064e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100064d8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [16];
  long local_80;
  undefined8 uStack_78;
  long local_70;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  lVar3 = lVar6;
  __sS2ayxGycfC(lVar6);
  local_80 = lVar6;
  uStack_78 = uVar7;
  local_70 = unaff_x20 + (uVar4 + 0x38 & (uVar4 ^ 0xffffffffffffffff));
  FUN_1000994bc(uVar1,uVar2,uVar5,param_1,lVar3,FUN_100065210,auStack_90,lVar6);
  _swift_bridgeObjectRelease(lVar3);
  return;
}

