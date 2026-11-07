// rea decompile_all
// name: FUN_100331858
// address: 0x100331858
// body: available
// range: 0x100331858-0x100331a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100331a0c) */

void FUN_100331858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_a0 [12];
  uint local_94;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a82c30;
  local_94 = param_5;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar9 = *(long *)(puVar2 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  FUN_10007f314(param_2,auStack_a0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),&DAT_100a82c30,
                &DAT_1008171f0);
  uVar4 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  uVar8 = lVar7 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar2 = &DAT_1009b26e8;
  _swift_allocObject(&DAT_1009b26e8,uVar8 + 0x11,uVar4 | 7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  FUN_1000a00a8(auStack_a0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar2 + uVar10,&DAT_100a82c30,
                &DAT_1008171f0);
  *(undefined8 *)(puVar2 + uVar8) = param_3;
  *(undefined8 *)(puVar2 + uVar8 + 8) = param_4;
  uVar1 = local_94 & 1;
  *(char *)((long)(puVar2 + uVar8 + 8) + 8) = (char)uVar1;
  puVar3 = &DAT_1009b2260;
  _swift_allocObject(&DAT_1009b2260,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_100331ae8;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10);
  _swift_retain(param_1);
  FUN_100330f30(param_4,uVar1);
  _os_unfair_lock_lock(uVar6);
  _swift_beginAccess(lVar7 + 0x18,auStack_78,0,0);
  uVar5 = *(undefined8 *)(lVar7 + 0x18);
  local_80 = uVar5;
  _swift_bridgeObjectRetain(uVar5);
  FUN_10032de9c(&local_80,puVar3);
  _swift_bridgeObjectRelease(uVar5);
  _os_unfair_lock_unlock(uVar6);
  _swift_release(puVar3);
  return;
}

