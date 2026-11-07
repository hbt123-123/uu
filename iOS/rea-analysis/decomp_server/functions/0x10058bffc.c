// rea decompile_all
// name: FUN_10058bffc
// address: 0x10058bffc
// body: available
// range: 0x10058bffc-0x10058c09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10058bffc(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x80);
  if (uVar4 == 0) {
LAB_10058c06c:
    uVar3 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar5 = *(ulong *)(unaff_x20 + 0x88);
    FUN_100008184(uVar3,uVar1);
    _swift_bridgeObjectRetain(uVar4);
    _swift_retain(uVar5);
    uVar2 = uVar4;
    FUN_100510c38();
    if ((uVar2 & 1) == 0) {
      FUN_1005419ec(uVar3,uVar1,uVar4,uVar5);
    }
    else {
      uVar2 = uVar5;
      FUN_1005963d8();
      FUN_1005419ec(uVar3,uVar1,uVar4,uVar5);
      if ((uVar2 & 1) != 0) goto LAB_10058c06c;
    }
    uVar3 = 0;
  }
  return uVar3;
}

