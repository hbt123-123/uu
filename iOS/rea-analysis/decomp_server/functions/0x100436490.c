// rea decompile_all
// name: FUN_100436490
// address: 0x100436490
// body: available
// range: 0x100436490-0x10043654b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100436490(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_88 [24];
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
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    FUN_1004341f8(0);
    _swift_allocObject();
    FUN_10043886c();
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  puVar1 = (undefined8 *)(lVar3 + 0x118);
  _swift_beginAccess(puVar1,auStack_88,1,0);
  uStack_68 = *(undefined8 *)(lVar3 + 0x120);
  local_70 = *puVar1;
  uStack_58 = *(undefined8 *)(lVar3 + 0x130);
  uStack_60 = *(undefined8 *)(lVar3 + 0x128);
  uStack_48 = *(undefined8 *)(lVar3 + 0x140);
  local_50 = *(undefined8 *)(lVar3 + 0x138);
  uStack_38 = *(undefined8 *)(lVar3 + 0x150);
  uStack_40 = *(undefined8 *)(lVar3 + 0x148);
  *(undefined8 *)(lVar3 + 0x120) = 0;
  *puVar1 = 0;
  *(undefined8 *)(lVar3 + 0x130) = 0;
  *(undefined8 *)(lVar3 + 0x128) = 0;
  *(undefined8 *)(lVar3 + 0x140) = 0;
  *(undefined8 *)(lVar3 + 0x138) = 0;
  *(undefined8 *)(lVar3 + 0x148) = 0;
  *(undefined8 *)(lVar3 + 0x150) = 0xf000000000000000;
  FUN_100040bb4(&local_70,&DAT_100a9f380,&DAT_10082d5a0);
  return;
}

