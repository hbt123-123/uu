// rea decompile_all
// name: FUN_1002f9438
// address: 0x1002f9438
// body: available
// range: 0x1002f9438-0x1002f9533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f9438(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  puVar3 = &DAT_100a84710;
  FUN_100004bb4(&DAT_100a84710,&DAT_1008190f0);
  lVar5 = *(long *)(*(long *)(puVar3 + -8) + 0x40);
  lVar4 = 0;
  FUN_1002f9800();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))
            (auStack_50 + -(lVar5 + 0xfU & 0xfffffffffffffff0),1,1,lVar4);
  lVar4 = _TtC9Alamofire13UploadRequest::uploadable;
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire13UploadRequest::uploadable,auStack_48,0x21,0);
  FUN_1002f90b0(auStack_50 + -(lVar5 + 0xfU & 0xfffffffffffffff0),unaff_x20 + lVar4);
  _swift_endAccess(auStack_48);
  FUN_1002c73dc();
  lVar4 = *(long *)(unaff_x20 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar6);
  _swift_beginAccess(lVar4 + 0x18,auStack_48,1,0);
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(lVar4 + 0x20) = 0xf000000000000000;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  FUN_100006cc8(uVar1,uVar2);
  _os_unfair_lock_unlock(uVar6);
  return;
}

