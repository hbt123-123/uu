// rea decompile_all
// name: FUN_10033b300
// address: 0x10033b300
// body: available
// range: 0x10033b300-0x10033b56f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010033b438) */

void FUN_10033b300(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100a846a0;
  local_a0 = param_1;
  FUN_100004bb4(&DAT_100a846a0,&DAT_100818fb0);
  lVar9 = *(long *)(puVar1 + -8);
  uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b0 = (long)&local_b0 - uVar4;
  lVar8 = local_b0 - uVar4;
  puVar2 = &DAT_100a84698;
  FUN_100004bb4(&DAT_100a84698,&DAT_100818fa8);
  uVar4 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a8 = lVar8 - uVar4;
  lVar6 = local_a8 - uVar4;
  plVar7 = *(long **)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(plVar7[2] + 0x10);
  _os_unfair_lock_lock(uVar10);
  lVar5 = *(long *)(*plVar7 + 0x60);
  _swift_beginAccess((long)plVar7 + lVar5,auStack_78,0,0);
  FUN_10007f314((long)plVar7 + lVar5,lVar6,&DAT_100a84698,&DAT_100818fa8);
  _os_unfair_lock_unlock(uVar10);
  lVar3 = lVar6;
  (**(code **)(lVar9 + 0x30))(lVar6,1,puVar1);
  uVar10 = local_a0;
  if ((int)lVar3 == 1) {
    FUN_10033bd34(lVar6);
    lVar3 = local_b0;
    FUN_10033b570(local_b0);
    _swift_storeEnumTagMultiPayload(lVar3,puVar1,0);
    FUN_1000a00a8(lVar3,lVar8,&DAT_100a846a0,&DAT_100818fb0);
    FUN_1000a00a8(lVar8,uVar10,&DAT_100a846a0,&DAT_100818fb0);
    lVar3 = local_a8;
    FUN_10007f314(uVar10,local_a8,&DAT_100a846a0,&DAT_100818fb0);
    (**(code **)(lVar9 + 0x38))(lVar3,0,1,puVar1);
    uVar10 = *(undefined8 *)(plVar7[2] + 0x10);
    _os_unfair_lock_lock(uVar10);
    _swift_beginAccess((long)plVar7 + lVar5,auStack_98,0x21,0);
    FUN_10033bd34((long)plVar7 + lVar5);
    FUN_10007f314(lVar3,(long)plVar7 + lVar5,&DAT_100a84698,&DAT_100818fa8);
    _swift_endAccess(auStack_98);
    _os_unfair_lock_unlock(uVar10);
    FUN_10033bd34(lVar3);
  }
  else {
    FUN_1000a00a8(lVar6,local_a0,&DAT_100a846a0,&DAT_100818fb0);
  }
  return;
}

