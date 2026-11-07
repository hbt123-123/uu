// rea decompile_all
// name: FUN_10033854c
// address: 0x10033854c
// body: available
// range: 0x10033854c-0x1003385ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033854c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  lVar1 = _TtC9Alamofire17MultipartFormData::bodyPartError;
  lVar2 = 0;
  FUN_100277ad0();
  lVar3 = 1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(unaff_x20 + lVar1,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  if (param_3 == 0) {
    FUN_10033aaf4();
    param_3 = lVar3;
    param_2 = param_1;
  }
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(long *)(unaff_x20 + 0x28) = param_3;
  *(undefined **)(unaff_x20 + 0x38) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(unaff_x20 + _TtC9Alamofire17MultipartFormData::streamBufferSize) = 0x400;
  return;
}

