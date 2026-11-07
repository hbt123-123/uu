// rea decompile_all
// name: FUN_10032f570
// address: 0x10032f570
// body: available
// range: 0x10032f570-0x10032f70f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010032f6fc) */

void FUN_10032f570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar10 = *(long *)(lVar1 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  uVar4 = lVar11 + 0xfU & 0xfffffffffffffff0;
  puVar8 = auStack_90 + -uVar4;
  lVar9 = (long)puVar8 - uVar4;
  pcVar12 = *(code **)(lVar10 + 0x10);
  (*pcVar12)(lVar9,param_2,lVar1);
  (*pcVar12)(puVar8,param_3,lVar1);
  uVar4 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar7 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  uVar13 = lVar11 + uVar4 + uVar7 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009b24e0;
  _swift_allocObject(&DAT_1009b24e0,uVar13 + lVar11,uVar4 | 7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  pcVar12 = *(code **)(lVar10 + 0x20);
  (*pcVar12)(puVar2 + uVar7,lVar9,lVar1);
  (*pcVar12)(puVar2 + uVar13,puVar8,lVar1);
  puVar3 = &DAT_1009b2260;
  _swift_allocObject(&DAT_1009b2260,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10032f79c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10);
  _swift_retain(param_1);
  _os_unfair_lock_lock(uVar6);
  _swift_beginAccess(lVar1 + 0x18,auStack_78,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  local_80 = uVar5;
  _swift_bridgeObjectRetain(uVar5);
  FUN_10032de9c(&local_80,puVar3);
  _swift_bridgeObjectRelease(uVar5);
  _os_unfair_lock_unlock(uVar6);
  _swift_release(puVar3);
  return;
}

