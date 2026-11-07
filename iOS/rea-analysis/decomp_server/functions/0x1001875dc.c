// rea decompile_all
// name: FUN_1001875dc
// address: 0x1001875dc
// body: available
// range: 0x1001875dc-0x1001877a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001875dc(undefined1 *param_1,long param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 uVar14;
  undefined1 auStack_c0 [16];
  long local_b0;
  char local_a8;
  undefined1 local_a7;
  ulong local_a0;
  ulong uStack_98;
  undefined4 local_8d;
  undefined3 uStack_89;
  undefined4 local_86;
  undefined2 local_82;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x60,auStack_68,0,0);
  lVar11 = *(long *)(*(long *)(param_2 + 0x60) + 0x10);
  _swift_beginAccess(param_2 + 0x68,auStack_80,0,0);
  if (*(long *)(*(long *)(param_2 + 0x68) + 0x10) == 0) {
    bVar9 = param_3 == '\x01';
    uVar12 = (ulong)bVar9;
    uVar14 = !bVar9;
    uVar13 = (ulong)(byte)uVar14;
    if ((bVar9) || (lVar11 != 0)) goto LAB_10018767c;
  }
  else if (lVar11 != 0) {
    uVar12 = 0;
    uVar13 = 1;
    uVar14 = 1;
    goto LAB_10018767c;
  }
  uVar12 = 0;
  uVar14 = 2;
  uVar13 = 1;
LAB_10018767c:
  uVar10 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar10);
  local_b0 = param_2;
  local_a8 = param_3;
  local_a7 = uVar14;
  local_a0 = uVar12;
  uStack_98 = uVar13;
  FUN_1003fb48c(FUN_1001877a4,auStack_c0,0xd0000000000000b6,0x8000000100897ca0,0xd00000000000001b,
                0x8000000100897f20,0x100,0);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  *param_1 = *(undefined1 *)(param_2 + 0x10);
  param_1[1] = uVar14;
  *(undefined4 *)(param_1 + 2) = local_86;
  *(undefined2 *)(param_1 + 6) = local_82;
  *(undefined8 *)(param_1 + 8) = uVar10;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  *(ulong *)(param_1 + 0x50) = uVar12;
  *(ulong *)(param_1 + 0x58) = uVar13;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = local_8d;
  *(uint *)(param_1 + 100) = CONCAT31(uStack_89,local_8d._3_1_);
  *(undefined8 *)(param_1 + 0x68) = 0;
  param_1[0x70] = 0;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  return;
}

