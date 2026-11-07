// rea decompile_all
// name: FUN_1002f8884
// address: 0x1002f8884
// body: available
// range: 0x1002f8884-0x1002f8a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f8884(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long local_60;
  long local_58;
  
  lVar1 = 0;
  FUN_1002c76a8();
  lVar1 = -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + lVar1;
  puVar2 = &DAT_100a84710;
  FUN_100004bb4(&DAT_100a84710,&DAT_1008190f0);
  lVar5 = (long)puVar4 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100082394(param_1,lVar5,FUN_1002f9800);
  lVar3 = 0;
  FUN_1002f9800();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar5,0,1,lVar3);
  lVar3 = _TtC9Alamofire13UploadRequest::uploadable;
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire13UploadRequest::uploadable,auStack_78,0x21,0);
  FUN_1002f90b0(lVar5,unaff_x20 + lVar3);
  _swift_endAccess(auStack_78);
  plVar7 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar6 = *(undefined8 *)(plVar7[2] + 0x10);
  _os_unfair_lock_lock(uVar6);
  lVar3 = *(long *)(*plVar7 + 0x60);
  _swift_beginAccess((long)plVar7 + lVar3,auStack_90,0,0);
  FUN_100082394((long)plVar7 + lVar3,puVar4,FUN_1002c76a8);
  FUN_10007f314(&stack0x00000060 + lVar1,auStack_78,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(puVar4,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar6);
  if (local_60 == 0) {
    FUN_100040bb4(auStack_78,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_10003f030(auStack_78,local_60);
    (**(code **)(local_58 + 0x130))();
    FUN_10003f094(auStack_78);
  }
  return;
}

