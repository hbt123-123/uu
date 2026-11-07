// rea decompile_all
// name: FUN_100096cd8
// address: 0x100096cd8
// body: available
// range: 0x100096cd8-0x100096e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100096cd8(ulong param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar3 = param_2 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    uVar1 = 0xf;
    uVar3 = param_1;
    lVar4 = param_4;
    __sSSySJSS5IndexVcig(0xf,param_1,param_2);
    if ((uVar1 == 0x5f) && (uVar3 == 0xe100000000000000)) {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      lVar4 = -0x1f00000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(uVar3);
      if ((uVar1 & 1) == 0) goto LAB_100096dbc;
    }
    uVar1 = 1;
    uVar3 = param_2;
    FUN_100096c3c(1,param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    __sSS14_fromSubstringySSSshFZ(uVar1,param_1,uVar3,lVar4);
    _swift_bridgeObjectRelease(lVar4);
    param_1 = uVar1;
  }
LAB_100096dbc:
  if (param_4 != 0) {
    puVar2 = &DAT_100103f18;
    FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(long *)(puVar2 + 0x28) = param_4;
    FUN_10006d548();
  }
  return param_1;
}

