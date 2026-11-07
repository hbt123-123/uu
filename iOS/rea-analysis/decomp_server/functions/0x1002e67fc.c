// rea decompile_all
// name: FUN_1002e67fc
// address: 0x1002e67fc
// body: available
// range: 0x1002e67fc-0x1002e690b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1002e67fc(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_10033b108();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  lVar4 = _TtC9Alamofire17MultipartFormData::bodyPartError;
  lVar2 = 0;
  FUN_100277ad0();
  uVar5 = 1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar1 + lVar4,1,1,lVar2);
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  uVar3 = param_6;
  FUN_10033aaf4();
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  *(undefined **)(lVar1 + 0x38) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(lVar1 + _TtC9Alamofire17MultipartFormData::streamBufferSize) = 0x400;
  (*param_1)(lVar1);
  lVar4 = lVar1;
  (**(code **)(*unaff_x20 + 0x188))(lVar1,param_3,param_4,param_5,2,param_6);
  _swift_release(lVar1);
  return lVar4;
}

