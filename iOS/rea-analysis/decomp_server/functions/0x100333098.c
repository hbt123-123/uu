// rea decompile_all
// name: FUN_100333098
// address: 0x100333098
// body: available
// range: 0x100333098-0x1003332eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003332d8) */

void FUN_100333098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_94;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100a83428;
  local_b0 = param_4;
  local_a8 = param_3;
  local_a0 = param_5;
  local_94 = param_6;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar16 = *(long *)(puVar4 + -8);
  lVar6 = *(long *)(lVar16 + 0x40);
  lVar17 = (long)&local_b0 - (lVar6 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar10 = *(long *)(puVar4 + -8);
  lVar12 = *(long *)(lVar10 + 0x40);
  lVar15 = lVar17 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_2,lVar15,&DAT_100a82c30,&DAT_1008171f0);
  FUN_10007f314(local_b0,lVar17,&DAT_100a83428,&DAT_100817bb0);
  bVar2 = *(byte *)(lVar10 + 0x50);
  uVar11 = (ulong)bVar2 + 0x18 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar11 + 7 & 0xfffffffffffffff8;
  bVar3 = *(byte *)(lVar16 + 0x50);
  uVar14 = bVar3 + uVar13 + 8 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  uVar7 = lVar6 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1009b2800;
  _swift_allocObject(&DAT_1009b2800,uVar7 + 9,bVar2 | bVar3 | 7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  FUN_1000a00a8(lVar15,puVar4 + uVar11,&DAT_100a82c30,&DAT_1008171f0);
  *(undefined8 *)(puVar4 + uVar13) = local_a8;
  FUN_1000a00a8(lVar17,puVar4 + uVar14,&DAT_100a83428,&DAT_100817bb0);
  uVar8 = local_a0;
  *(undefined8 *)(puVar4 + uVar7) = local_a0;
  uVar1 = local_94 & 1;
  *(char *)((long)(puVar4 + uVar7) + 8) = (char)uVar1;
  puVar5 = &DAT_1009b2260;
  _swift_allocObject(&DAT_1009b2260,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_100333430;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x10);
  _swift_retain(param_1);
  FUN_100330f30(uVar8,uVar1);
  _os_unfair_lock_lock(uVar9);
  _swift_beginAccess(lVar6 + 0x18,auStack_78,0,0);
  uVar8 = *(undefined8 *)(lVar6 + 0x18);
  local_80 = uVar8;
  _swift_bridgeObjectRetain(uVar8);
  FUN_10032de9c(&local_80,puVar5);
  _swift_bridgeObjectRelease(uVar8);
  _os_unfair_lock_unlock(uVar9);
  _swift_release(puVar5);
  return;
}

