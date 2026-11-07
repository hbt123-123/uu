// rea decompile_all
// name: FUN_10032f830
// address: 0x10032f830
// body: available
// range: 0x10032f830-0x10032f9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010032f9ec) */

void FUN_10032f830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  local_98 = param_1;
  FUN_100277ad0();
  lVar14 = *(long *)(lVar3 + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  puVar11 = auStack_a0 + -(lVar15 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar10 = *(long *)(lVar3 + -8);
  lVar6 = *(long *)(lVar10 + 0x40);
  lVar13 = (long)puVar11 - (lVar6 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))(lVar13,param_2,lVar3);
  FUN_100082394(param_3,puVar11,FUN_100277ad0);
  bVar1 = *(byte *)(lVar10 + 0x50);
  uVar12 = (ulong)bVar1 + 0x18 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar14 + 0x50);
  uVar7 = lVar6 + (ulong)bVar2 + uVar12 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar4 = &DAT_1009b2508;
  _swift_allocObject(&DAT_1009b2508,uVar7 + lVar15,bVar1 | bVar2 | 7);
  uVar8 = local_98;
  *(undefined8 *)(puVar4 + 0x10) = local_98;
  (**(code **)(lVar10 + 0x20))(puVar4 + uVar12,lVar13,lVar3);
  FUN_1000823d8(puVar11,puVar4 + uVar7,FUN_100277ad0);
  puVar5 = &DAT_1009b2260;
  _swift_allocObject(&DAT_1009b2260,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10032fd18;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
  _swift_retain(uVar8);
  _os_unfair_lock_lock(uVar9);
  _swift_beginAccess(lVar3 + 0x18,auStack_78,0,0);
  uVar8 = *(undefined8 *)(lVar3 + 0x18);
  local_80 = uVar8;
  _swift_bridgeObjectRetain(uVar8);
  FUN_10032de9c(&local_80,puVar5);
  _swift_bridgeObjectRelease(uVar8);
  _os_unfair_lock_unlock(uVar9);
  _swift_release(puVar5);
  return;
}

