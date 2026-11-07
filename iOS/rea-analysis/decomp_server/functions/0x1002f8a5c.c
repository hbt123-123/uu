// rea decompile_all
// name: FUN_1002f8a5c
// address: 0x1002f8a5c
// body: available
// range: 0x1002f8a5c-0x1002f8caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f8a5c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  long local_70;
  long local_68;
  
  lVar3 = 0;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_90 + lVar2;
  puVar4 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar6 = (long)puVar7 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100082394(param_1,lVar6,FUN_100277ad0);
  lVar5 = 0;
  FUN_100277ad0();
  pcVar9 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar9)(lVar6,0,1,lVar5);
  plVar8 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar10 = *(undefined8 *)(plVar8[2] + 0x10);
  _os_unfair_lock_lock(uVar10);
  lVar1 = (long)plVar8 + *(long *)(*plVar8 + 0x60);
  _swift_beginAccess(lVar1,auStack_88,0x21,0);
  FUN_10028fba0(lVar6,lVar1 + *(int *)(lVar3 + 0x5c));
  _swift_endAccess(auStack_88);
  _os_unfair_lock_unlock(uVar10);
  FUN_100040bb4(lVar6,&DAT_100a82460,&DAT_1008175c0);
  uVar10 = *(undefined8 *)(plVar8[2] + 0x10);
  _os_unfair_lock_lock(uVar10);
  FUN_100082394(lVar1,puVar7,FUN_1002c76a8);
  FUN_10007f314(&stack0x00000060 + lVar2,auStack_88,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(puVar7,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar10);
  if (local_70 == 0) {
    FUN_100040bb4(auStack_88,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_10003f030(auStack_88,local_70);
    (**(code **)(local_68 + 0x138))();
    FUN_10003f094(auStack_88);
  }
  FUN_100082394(param_1,lVar6,FUN_100277ad0);
  (*pcVar9)(lVar6,0,1,lVar5);
  FUN_1002cb664(lVar6);
  FUN_100040bb4(lVar6,&DAT_100a82460,&DAT_1008175c0);
  return;
}

