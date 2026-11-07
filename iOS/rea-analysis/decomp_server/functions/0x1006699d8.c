// rea decompile_all
// name: FUN_1006699d8
// address: 0x1006699d8
// body: available
// range: 0x1006699d8-0x100669caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006699d8(undefined8 param_1,undefined1 *param_2,ulong param_3,long param_4,long param_5,
                  ulong param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x19;
  long unaff_x21;
  
  if (param_4 < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100669c60);
    (*pcVar2)();
  }
  if (*(long *)(param_2 + 0x10) != 8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100669c64);
    (*pcVar2)();
  }
  lVar3 = 0x14;
  if ((param_3 & 1) == 0) {
    lVar3 = 0x10;
  }
  lVar1 = lVar3;
  if ((param_6 & 1) == 0) {
    lVar1 = param_5;
  }
  if (lVar3 < lVar1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease();
    FUN_100669f50();
    _swift_allocError(&DAT_1009e4d88,param_2,0,0);
    *param_2 = 1;
    _swift_willThrow();
    param_4 = unaff_x19;
  }
  else {
    FUN_100628ae0(param_2);
    lVar3 = 0;
    if ((param_3 & 1) == 0) {
      FUN_100669640();
      _swift_initStackObject();
      *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      puVar4 = &DAT_100ab7cb8;
      FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
      puVar5 = puVar4;
      _swift_initStaticObject();
      *(undefined **)(lVar3 + 0x20) = puVar5;
      puVar5 = puVar4;
      _swift_initStaticObject(puVar4,&DAT_100ab1170);
      *(undefined **)(lVar3 + 0x28) = puVar5;
      _swift_initStaticObject(puVar4,&DAT_100ab1298);
      *(undefined **)(lVar3 + 0x30) = puVar4;
      _swift_bridgeObjectRetain(param_1);
      FUN_100668e34();
      if (unaff_x21 != 0) {
        _swift_errorRelease();
        _swift_bridgeObjectRelease(param_1);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0,0xe000000000000000,"CryptoSwift/MD5.swift",0x15,2,0x3c,0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100669cb0);
        (*pcVar2)();
      }
      _swift_bridgeObjectRelease_n(param_1,2);
      _swift_setDeallocating(lVar3);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x10));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x20));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x28));
      param_1 = *(undefined8 *)(lVar3 + 0x30);
    }
    else {
      FUN_1006730b4();
      _swift_initStackObject();
      *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      puVar4 = &DAT_100ab7cb8;
      FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
      _swift_initStaticObject();
      *(undefined **)(lVar3 + 0x20) = puVar4;
      _swift_bridgeObjectRetain(param_1);
      FUN_1006727b8();
      if (unaff_x21 == 0) {
        _swift_release(lVar3);
        _swift_bridgeObjectRelease(param_1);
      }
      else {
        _swift_bridgeObjectRelease(param_1);
        _swift_errorRelease();
        _swift_release(lVar3);
      }
    }
    _swift_bridgeObjectRelease(param_1);
  }
  return param_4;
}

