// rea decompile_all
// name: FUN_10026b890
// address: 0x10026b890
// body: available
// range: 0x10026b890-0x10026baa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10026b890(ID param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ID param_5)

{
  ulong uVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_70 [16];
  
  puVar4 = &DAT_100a81018;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  puVar6 = auStack_70 + -(*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_5 == 0) {
    if (param_1 == 0) {
      uVar5 = *(undefined8 *)PTR__NSURLErrorDomain_100995318;
      puVar4 = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      param_5 = _objc_msgSend((ID)puVar4,"initWithDomain:code:userInfo:",uVar5,0xffffffffffffffff,0)
      ;
    }
    else {
      IVar2 = _objc_msgSend(param_1,"statusCode");
      uVar5 = 0;
      if (param_4 >> 0x3c < 0xf) {
        uVar5 = param_3;
      }
      uVar1 = 0xc000000000000000;
      if (param_4 >> 0x3c < 0xf) {
        uVar1 = param_4;
      }
      FUN_100263c94(param_2,puVar6);
      param_5 = 0;
      FUN_100274594();
      _swift_allocObject();
      *(ID *)(param_5 + 0x10) = IVar2;
      *(undefined8 *)(param_5 + 0x18) = uVar5;
      *(ulong *)(param_5 + 0x20) = uVar1;
      FUN_10026b39c(puVar6,param_5 + _TtC4Moya8Response::request);
      *(ID *)(param_5 + _TtC4Moya8Response::response) = param_1;
      FUN_10010bd10(param_3,param_4);
    }
  }
  else if (param_1 == 0) {
    _swift_errorRetain(param_5);
  }
  else {
    _swift_errorRetain(param_5);
    IVar2 = _objc_msgSend(param_1,"statusCode");
    uVar5 = 0;
    if (param_4 >> 0x3c < 0xf) {
      uVar5 = param_3;
    }
    uVar1 = 0xc000000000000000;
    if (param_4 >> 0x3c < 0xf) {
      uVar1 = param_4;
    }
    FUN_100263c94(param_2,puVar6);
    lVar3 = 0;
    FUN_100274594();
    _swift_allocObject();
    *(ID *)(lVar3 + 0x10) = IVar2;
    *(undefined8 *)(lVar3 + 0x18) = uVar5;
    *(ulong *)(lVar3 + 0x20) = uVar1;
    FUN_10026b39c(puVar6,lVar3 + _TtC4Moya8Response::request);
    *(ID *)(lVar3 + _TtC4Moya8Response::response) = param_1;
    FUN_10010bd10(param_3,param_4);
  }
  return param_5;
}

