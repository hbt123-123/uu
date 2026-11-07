// rea decompile_all
// name: FUN_1001183fc
// address: 0x1001183fc
// body: available
// range: 0x1001183fc-0x100118603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1001183fc(undefined8 param_1,undefined1 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_f0 [2];
  undefined4 local_ee;
  undefined2 local_ea;
  undefined7 local_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9f;
  undefined8 uStack_97;
  undefined1 local_8f;
  undefined4 local_8e;
  undefined2 local_8a;
  undefined8 local_88;
  
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar5 + -8);
  lVar6 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  FUN_100117638();
  lVar7 = lVar6;
  FUN_100117318();
  bVar2 = *(byte *)(lVar7 + 0x10);
  _swift_release();
  if ((bVar2 & 1) == 0) {
    FUN_1001173b8();
    cVar12 = *(char *)(lVar7 + 0x10);
    _swift_release();
    if (cVar12 != '\x01') {
      FUN_100117458();
      _swift_release(lVar6);
      cVar12 = *(char *)(lVar7 + 0x10);
      goto LAB_1001184b0;
    }
  }
  cVar12 = '\x01';
  lVar7 = lVar6;
LAB_1001184b0:
  _swift_release(lVar7);
  uVar11 = *(undefined8 *)
            (unaff_x20 + _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState);
  uVar14 = uVar11;
  _swift_retain();
  uVar4 = (uint)uVar14;
  FUN_1001174f8();
  _swift_release(uVar11);
  uVar1 = uVar4 & 0xff;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      uVar10 = 2;
      uVar9 = 6;
    }
    else {
      uVar10 = 4;
      uVar9 = 7;
    }
    if (cVar12 == '\0') {
      uVar9 = uVar10;
    }
  }
  else if (uVar1 - 2 < 3) {
    uVar9 = 0x1a;
    if (cVar12 != '\0') {
      uVar9 = 0x1b;
    }
  }
  else {
    uVar9 = 0;
    if (cVar12 == '\0') {
      uVar9 = 5;
    }
  }
  uVar3 = *param_2;
  uVar14 = *(undefined8 *)(param_2 + 8);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  local_d8 = *(undefined8 *)(param_2 + 0x18);
  local_d0 = param_2[0x20];
  uStack_e1 = (undefined1)*(undefined8 *)(param_2 + 0x28);
  uStack_e0 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x28) >> 8);
  uStack_d9 = param_2[0x30];
  __s10Foundation4DateVACycfC(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar13 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
  local_a8 = local_d8;
  local_a0 = local_d0;
  uStack_97 = CONCAT17(uStack_d9,uStack_e0);
  local_9f = CONCAT17(uStack_e1,local_e8);
  local_8f = (undefined1)uVar4;
  local_8e = local_ee;
  local_8a = local_ea;
  puVar8 = local_c0;
  local_c0[0] = uVar3;
  local_b8 = uVar14;
  uStack_b0 = uVar11;
  local_88 = param_1;
  FUN_1001177b4(puVar8,uVar9);
  return (uint)puVar8 & 1;
}

