// rea decompile_all
// name: FUN_100339c3c
// address: 0x100339c3c
// body: available
// range: 0x100339c3c-0x100339d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100339c3c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar1 = _TtC9Alamofire17MultipartFormData::bodyPartError;
  uVar5 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar6 = auStack_90 + -uVar5;
  lVar7 = (long)puVar6 - uVar5;
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire17MultipartFormData::bodyPartError,auStack_78,0,0);
  FUN_10033b0b0(unaff_x20 + lVar1,lVar7);
  lVar3 = 0;
  FUN_100277ad0();
  lVar8 = *(long *)(lVar3 + -8);
  lVar4 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar3);
  FUN_100040bb4(lVar7,&DAT_100a82460,&DAT_1008175c0);
  if ((int)lVar4 == 1) {
    FUN_100082394(param_1,puVar6,FUN_100278198);
    _swift_storeEnumTagMultiPayload(puVar6,lVar3,4);
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,lVar3);
    _swift_beginAccess(unaff_x20 + lVar1,auStack_90,0x21,0);
    FUN_10033b27c(puVar6,unaff_x20 + lVar1);
    _swift_endAccess(auStack_90);
  }
  return;
}

