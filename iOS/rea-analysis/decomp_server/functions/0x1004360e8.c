// rea decompile_all
// name: FUN_1004360e8
// address: 0x1004360e8
// body: available
// range: 0x1004360e8-0x1004361b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004360e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1004341f8(0);
    _swift_allocObject();
    FUN_10043886c(lVar4,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  puVar1 = (undefined8 *)(lVar4 + 0x118);
  _swift_beginAccess(puVar1,auStack_c8,1,0);
  uStack_68 = *(undefined8 *)(lVar4 + 0x120);
  local_70 = *puVar1;
  uStack_58 = *(undefined8 *)(lVar4 + 0x130);
  uStack_60 = *(undefined8 *)(lVar4 + 0x128);
  uStack_48 = *(undefined8 *)(lVar4 + 0x140);
  local_50 = *(undefined8 *)(lVar4 + 0x138);
  uStack_38 = *(undefined8 *)(lVar4 + 0x150);
  uStack_40 = *(undefined8 *)(lVar4 + 0x148);
  *(undefined8 *)(lVar4 + 0x120) = uStack_a8;
  *puVar1 = local_b0;
  *(undefined8 *)(lVar4 + 0x130) = uStack_98;
  *(undefined8 *)(lVar4 + 0x128) = uStack_a0;
  *(undefined8 *)(lVar4 + 0x140) = uStack_88;
  *(undefined8 *)(lVar4 + 0x138) = local_90;
  *(undefined8 *)(lVar4 + 0x150) = uStack_78;
  *(undefined8 *)(lVar4 + 0x148) = uStack_80;
  FUN_100040bb4(&local_70,&DAT_100a9f380,&DAT_10082d5a0);
  return;
}

