// rea decompile_all
// name: FUN_100576c10
// address: 0x100576c10
// body: available
// range: 0x100576c10-0x100576cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100576c10(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1005a7a70(0);
    _swift_allocObject();
    FUN_1005a7a90();
    _swift_release(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  _swift_beginAccess(lVar2 + 0x50,auStack_98,1,0);
  uStack_58 = *(undefined8 *)(lVar2 + 0x78);
  local_60 = *(undefined8 *)(lVar2 + 0x70);
  uStack_48 = *(undefined8 *)(lVar2 + 0x88);
  uStack_50 = *(undefined8 *)(lVar2 + 0x80);
  local_40 = *(undefined8 *)(lVar2 + 0x90);
  uStack_78 = *(undefined8 *)(lVar2 + 0x58);
  local_80 = *(undefined8 *)(lVar2 + 0x50);
  uStack_68 = *(undefined8 *)(lVar2 + 0x68);
  uStack_70 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  FUN_100040bb4(&local_80,&DAT_100aab4c8,&DAT_100837c38);
  return;
}

