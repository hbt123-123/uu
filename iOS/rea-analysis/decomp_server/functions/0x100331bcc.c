// rea decompile_all
// name: FUN_100331bcc
// address: 0x100331bcc
// body: available
// range: 0x100331bcc-0x100331d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100331d58) */

void FUN_100331bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  uVar1 = 0xff;
  local_90[0] = param_6;
  FUN_100277ad0(0xff);
  puVar2 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar3 = 0;
  (*param_4)(0,param_3,uVar1,puVar2);
  lVar9 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(lVar9 + 0x40);
  lVar8 = (long)local_90 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x10))(lVar8,param_2,lVar3);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar7 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  _swift_allocObject(param_5,uVar7 + lVar10,uVar5 | 7);
  *(undefined8 *)(param_5 + 0x10) = param_3;
  *(undefined8 *)(param_5 + 0x18) = param_1;
  (**(code **)(lVar9 + 0x20))(param_5 + uVar7,lVar8,lVar3);
  puVar4 = &DAT_1009b2260;
  _swift_allocObject(&DAT_1009b2260,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = local_90[0];
  *(long *)(puVar4 + 0x18) = param_5;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
  _swift_retain(param_1);
  _os_unfair_lock_lock(uVar6);
  _swift_beginAccess(lVar3 + 0x18,auStack_78,0,0);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  local_80 = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  FUN_10032de9c(&local_80,puVar4);
  _swift_bridgeObjectRelease(uVar1);
  _os_unfair_lock_unlock(uVar6);
  _swift_release(puVar4);
  return;
}

