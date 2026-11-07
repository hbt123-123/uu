// rea decompile_all
// name: FUN_1002e6660
// address: 0x1002e6660
// body: available
// range: 0x1002e6660-0x1002e67fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1002e6660(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  undefined *local_e0 [3];
  undefined *local_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_1000b142c(param_3,auStack_b8);
  uStack_78 = param_10;
  local_70 = param_11;
  lVar1 = 0;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  FUN_10033b108();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  lVar5 = _TtC9Alamofire17MultipartFormData::bodyPartError;
  lVar2 = 0;
  FUN_100277ad0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar1 + lVar5,1,1,lVar2);
  *(undefined8 *)(lVar1 + 0x30) = param_9;
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(param_6);
  FUN_10004090c(param_10);
  uVar3 = param_9;
  FUN_10033aaf4();
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = param_11;
  *(undefined **)(lVar1 + 0x38) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(lVar1 + _TtC9Alamofire17MultipartFormData::streamBufferSize) = 0x400;
  (*param_1)(lVar1);
  local_c8 = &DAT_1009aea00;
  ppuStack_c0 = &PTR_PTR_1009aebc8;
  puVar4 = &DAT_1009ae728;
  _swift_allocObject(&DAT_1009ae728,0x60,7);
  local_e0[0] = puVar4;
  FUN_1002eed94(auStack_b8,puVar4 + 0x10);
  lVar5 = lVar1;
  (**(code **)(*unaff_x20 + 0x188))(lVar1,local_e0,param_4,param_8,2,param_9);
  _swift_release(lVar1);
  FUN_1002eedc8(auStack_b8);
  FUN_10003f094(local_e0);
  return lVar5;
}

