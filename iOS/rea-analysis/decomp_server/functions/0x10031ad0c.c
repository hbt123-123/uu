// rea decompile_all
// name: FUN_10031ad0c
// address: 0x10031ad0c
// body: available
// range: 0x10031ad0c-0x10031ae6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10031ad0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  puVar1 = &DAT_100a82470;
  FUN_100004bb4(&DAT_100a82470,&DAT_100819d70);
  lVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  FUN_1000b142c(param_2,auStack_88);
  FUN_10007f314(param_3,auStack_90 + -(lVar3 + 0xfU & 0xfffffffffffffff0),&DAT_100a82470,
                &DAT_100819d70);
  lVar2 = 0;
  FUN_100347ce4();
  _swift_allocObject();
  FUN_1000a0074(auStack_88,lVar2 + 0x10);
  FUN_1000a00a8(auStack_90 + -(lVar3 + 0xfU & 0xfffffffffffffff0),
                lVar2 + _TtC9Alamofire24StringResponseSerializer::encoding,&DAT_100a82470,
                &DAT_100819d70);
  *(undefined8 *)(lVar2 + _TtC9Alamofire24StringResponseSerializer::emptyResponseCodes) = param_4;
  *(undefined8 *)(lVar2 + _TtC9Alamofire24StringResponseSerializer::emptyRequestMethods) = param_5;
  puVar1 = &DAT_1009b09f8;
  _swift_allocObject(&DAT_1009b09f8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(long *)(puVar1 + 0x20) = lVar2;
  _swift_retain_n();
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  return;
}

