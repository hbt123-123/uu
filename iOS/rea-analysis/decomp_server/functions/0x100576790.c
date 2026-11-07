// rea decompile_all
// name: FUN_100576790
// address: 0x100576790
// body: available
// range: 0x100576790-0x100576883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100576790(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_f8 [24];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
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
  uStack_b8 = param_1[5];
  local_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  local_a0 = param_1[8];
  uStack_d8 = param_1[1];
  local_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  _swift_beginAccess(lVar2 + 0x50,auStack_f8,1,0);
  uStack_68 = *(undefined8 *)(lVar2 + 0x78);
  local_70 = *(undefined8 *)(lVar2 + 0x70);
  uStack_58 = *(undefined8 *)(lVar2 + 0x88);
  uStack_60 = *(undefined8 *)(lVar2 + 0x80);
  local_50 = *(undefined8 *)(lVar2 + 0x90);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  local_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_78 = *(undefined8 *)(lVar2 + 0x68);
  uStack_80 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x78) = uStack_b8;
  *(undefined8 *)(lVar2 + 0x70) = local_c0;
  *(undefined8 *)(lVar2 + 0x88) = uStack_a8;
  *(undefined8 *)(lVar2 + 0x80) = uStack_b0;
  *(undefined8 *)(lVar2 + 0x90) = local_a0;
  *(undefined8 *)(lVar2 + 0x58) = uStack_d8;
  *(undefined8 *)(lVar2 + 0x50) = local_e0;
  *(undefined8 *)(lVar2 + 0x68) = uStack_c8;
  *(undefined8 *)(lVar2 + 0x60) = uStack_d0;
  FUN_100040bb4(&local_90,&DAT_100aab4c8,&DAT_100837c38);
  return;
}

