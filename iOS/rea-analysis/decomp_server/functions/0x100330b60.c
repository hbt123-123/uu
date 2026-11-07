// rea decompile_all
// name: FUN_100330b60
// address: 0x100330b60
// body: available
// range: 0x100330b60-0x100330d4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100330d3c) */

void FUN_100330b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_94;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100a82c30;
  local_b0 = param_4;
  local_a8 = param_5;
  local_a0 = param_6;
  local_94 = param_7;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar10 = *(long *)(puVar4 + -8);
  lVar7 = *(long *)(lVar10 + 0x40);
  lVar13 = (long)&local_b0 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_2,lVar13,&DAT_100a82c30,&DAT_1008171f0);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  uVar8 = lVar7 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1009b2670;
  _swift_allocObject(&DAT_1009b2670,uVar8 + 0x21,uVar6 | 7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  FUN_1000a00a8(lVar13,puVar4 + uVar11,&DAT_100a82c30,&DAT_1008171f0);
  uVar3 = local_a0;
  uVar2 = local_a8;
  uVar9 = local_b0;
  *(undefined8 *)(puVar4 + uVar8) = param_3;
  *(undefined8 *)(puVar4 + uVar8 + 8) = local_b0;
  *(undefined8 *)((long)(puVar4 + uVar8 + 8) + 8) = local_a8;
  *(undefined8 *)(puVar4 + uVar8 + 0x18) = local_a0;
  uVar1 = local_94 & 1;
  *(char *)((long)(puVar4 + uVar8 + 0x18) + 8) = (char)uVar1;
  puVar5 = &DAT_1009b2260;
  _swift_allocObject(&DAT_1009b2260,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_100330e44;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10);
  _swift_retain(param_1);
  FUN_10010bd10(uVar9,uVar2);
  FUN_100330f30(uVar3,uVar1);
  _os_unfair_lock_lock(uVar12);
  _swift_beginAccess(lVar7 + 0x18,auStack_78,0,0);
  uVar9 = *(undefined8 *)(lVar7 + 0x18);
  local_80 = uVar9;
  _swift_bridgeObjectRetain(uVar9);
  FUN_10032de9c(&local_80,puVar5);
  _swift_bridgeObjectRelease(uVar9);
  _os_unfair_lock_unlock(uVar12);
  _swift_release(puVar5);
  return;
}

